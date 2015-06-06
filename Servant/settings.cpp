#include "settings.h"
#include "settingsloader.h"
#include "ui_settings.h"

#include <QFileDialog>
#include <QSettings>

using namespace std;

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    qDebug("Constructing settings dialog...");

    ui->setupUi(this);
    ui->listWidget->setSortingEnabled(false);

    QSettings s;
    if(s.value("IsFirstLaunch", true).toBool()) {
        qDebug("Initializing settings");
        this->init();
        s.setValue("IsFirstLaunch", false);
    }

    _rules = SettingsLoader::loadRules();    

    Q_FOREACH(auto& r, _rules) {
        qDebug("Index of item %i", r->id);
        QListWidgetItem *newItem = new QListWidgetItem(r->name);
        ui->listWidget->addItem(newItem);
    }
}

Settings::~Settings()
{
    delete ui;
}

void Settings::init() {
    shared_ptr<Rule> r = make_shared<Rule>(QString("Default"),
                                           QString(""),
                                           QStringList("*"),
                                           QStringList("*.*"),
                                           QString(""),
                                           QStringList(""));

    SettingsLoader::saveRule(r);
}

void Settings::on_toolButton_clicked()
{
    QString dirName;
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::Directory);
    //dialog.setDirectory();                    TODO

    if(dialog.exec()) {
        dirName = dialog.selectedFiles().first();
        ui->in_wdir->setText(dirName);
    }

    qDebug(dirName.toUtf8().constData());
}

void Settings::on_btn_add_rule_clicked()
{
    qDebug("Adding new rule...");
    shared_ptr<Rule> newRule = make_shared<Rule>(QString("Rule %1").arg(Rule::rules_count),
                                                 QString(""),
                                                 QStringList("*"),
                                                 QStringList("*.*"),
                                                 QString(""),
                                                 QStringList(""));

    _rules.push_back(newRule);

    _currentRule = newRule;

    auto *newItem = new QListWidgetItem(_currentRule->name, ui->listWidget);

    newItem->setFlags(newItem->flags () | Qt::ItemIsEditable);
    ui->listWidget->editItem(newItem);
    ui->listWidget->setCurrentItem(newItem);

    _wereRulesUpdated = true;
}

void Settings::on_btn_del_rule_clicked()
{
    qDebug("Deleting rule...");
    auto item = ui->listWidget->takeItem(ui->listWidget->currentRow());
    qDebug(item->text().toUtf8().constBegin());
    QSettings settings;
    settings.beginGroup("Rules");
    settings.remove(item->text());
    settings.endGroup();

    _rules.remove(_currentRule->id);
    delete item;
    _currentRule = _rules.first();
}

void Settings::on_btn_apply_clicked()
{
    qDebug("Applying changes...");
    SettingsLoader::saveRules(_rules);
}

void Settings::on_btn_ok_clicked()
{    
    qDebug("Applying and closing dialog...");
    SettingsLoader::saveRules(_rules);

    if(_wereRulesUpdated)
        emit rulesUpdated(_rules);

    _rules.clear();
    this->close();
}

void Settings::on_btn_cancel_clicked()
{    
    qDebug("Cancelling and closing dialog...");
    _rules.clear();

    _wereRulesUpdated = false;

    this->close();
}

void Settings::on_listWidget_itemClicked(QListWidgetItem *item)
{
    qDebug("Clicking item...");
    int id = -1;
    Q_FOREACH(auto r, _rules) {
        if(r->name == item->text())
           id = r->id;
    }

    qDebug("Item at row %i with id %i Clicked!", ui->listWidget->currentRow(), id);

    _currentRule = _rules[ui->listWidget->currentRow()];
    qDebug("Item at row %i with id %i Clicked!",
           ui->listWidget->currentRow(),
           _currentRule->id);

    ui->in_wdir->setText(_currentRule->workingDirectory);
    ui->in_dirfs->setText(_currentRule->directoryFilters.join(", "));
    ui->in_filefs->setText(_currentRule->fileFilters.join(", "));
    ui->in_cmd->setText(_currentRule->command);
    ui->in_args->setText(_currentRule->arguments.join(", "));
}

void Settings::on_in_wdir_editingFinished()
{
    qDebug("Editing wDir finished!");
    _currentRule->workingDirectory = ui->in_wdir->text();
}

void Settings::on_in_dirfs_editingFinished()
{
    qDebug("Editing dirFs finished!");
    _currentRule->directoryFilters = ui->in_dirfs->text().split(", ",
                                                                QString::SkipEmptyParts);
}

void Settings::on_in_filefs_editingFinished()
{
    qDebug("Editing fileFs finished!");
    _currentRule->fileFilters = ui->in_filefs->text().split(", ",
                                                            QString::SkipEmptyParts);
}

void Settings::on_in_cmd_editingFinished()
{
    qDebug("Editing cmd finished!");
    _currentRule->command = ui->in_cmd->text();
}

void Settings::on_in_args_editingFinished()
{
    qDebug("Editing args finished!");
    _currentRule->arguments = ui->in_args->text().split(", ",
                                                        QString::SkipEmptyParts);
}

void Settings::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    qDebug("Item double-clicked!");
    item->setFlags(item->flags () | Qt::ItemIsEditable);
    _isEditing = true;
    ui->listWidget->editItem(item);
}

void Settings::on_listWidget_currentTextChanged(const QString &currentText)
{
    qDebug("Current text changed!");
    if(_isEditing) {
        _currentRule->name = currentText;
        _isEditing = false;
    }
}
