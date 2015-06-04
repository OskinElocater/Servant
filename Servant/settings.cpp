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
    ui->setupUi(this);
    ui->listWidget->setSortingEnabled(false);

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
    RuleS r = make_shared<Rule>(-1,
                                QString("Default"),
                                QString(""),
                                QStringList("*"),
                                QStringList("*.*"),
                                QString(""),
                                QStringList(""));
    _rules.insert(r->id, r);


    SettingsLoader::saveRules(_rules);
}

void Settings::on_toolButton_clicked()
{
    QString dirName;
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::Directory);
    //dialog.setDirectory();                    TODO

    if(dialog.exec())
        dirName = dialog.selectedFiles().first();

    qDebug(dirName.toUtf8().constData());
}

void Settings::on_btn_add_rule_clicked()
{
    auto newRule = make_shared<Rule>(-1,
                                     QString("Rule %1").arg(Rule::rules_count + 1),
                                     QString(""),
                                     QStringList("*"),
                                     QStringList("*.*"),
                                     QString(""),
                                     QStringList(""));
    _currentRule = newRule;
    _rules.insert(_currentRule->id, _currentRule);

    auto *newItem = new QListWidgetItem(newRule->name, ui->listWidget);

    newItem->setFlags(newItem->flags () | Qt::ItemIsEditable);
    ui->listWidget->editItem(newItem);

    _wereRulesUpdated = true;
}

void Settings::on_btn_del_rule_clicked()
{
    auto item = ui->listWidget->takeItem(ui->listWidget->currentRow());
    qDebug(item->text().toUtf8().constBegin());
    QSettings settings;
    settings.beginGroup("Rules");
    settings.beginGroup(item->text());
    settings.remove("");
    settings.endGroup();
    settings.endGroup();

    _rules.remove(_currentRule->id);
    delete item;
    item = 0;
    _currentRule = _rules.first();    
}

void Settings::on_btn_apply_clicked()
{
    SettingsLoader::saveRules(_rules);
}

void Settings::on_btn_ok_clicked()
{    
    SettingsLoader::saveRules(_rules);

    if(_wereRulesUpdated)
        emit rulesUpdated(_rules.values());

    _rules.clear();
    this->close();
}

void Settings::on_btn_cancel_clicked()
{    
    _rules.clear();

    _wereRulesUpdated = false;

    this->close();
}

void Settings::on_listWidget_itemClicked(QListWidgetItem *item)
{
    int id;
    Q_FOREACH(auto r, _rules) {
        if(r->name == item->text())
           id = r->id;
    }

    qDebug("Item at row %i with id %i Clicked!", ui->listWidget->currentRow(), id);

    _currentRule = _rules[ui->listWidget->currentRow()];

    ui->in_wdir->setText(_currentRule->workingDirectory);
    ui->in_dirfs->setText(_currentRule->directoryFilters.join(", "));
    ui->in_filefs->setText(_currentRule->fileFilters.join(", "));
    ui->in_cmd->setText(_currentRule->command);
    ui->in_args->setText(_currentRule->arguments.join(", "));
}

void Settings::on_in_wdir_editingFinished()
{
    _currentRule->workingDirectory = ui->in_wdir->text();
}

void Settings::on_in_dirfs_editingFinished()
{
    _currentRule->directoryFilters = ui->in_dirfs->text().split(", ",
                                                                QString::SkipEmptyParts);
}

void Settings::on_in_filefs_editingFinished()
{
    _currentRule->fileFilters = ui->in_filefs->text().split(", ",
                                                            QString::SkipEmptyParts);
}

void Settings::on_in_cmd_editingFinished()
{
    _currentRule->command = ui->in_cmd->text();
}

void Settings::on_in_args_editingFinished()
{
    _currentRule->arguments = ui->in_args->text().split(", ",
                                                        QString::SkipEmptyParts);
}

void Settings::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    item->setFlags(item->flags () | Qt::ItemIsEditable);
    ui->listWidget->editItem(item);
}

void Settings::on_listWidget_currentTextChanged(const QString &currentText)
{
    _currentRule->name = currentText;
}
