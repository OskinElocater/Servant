#include "settings.h"
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

    loadRules();

    Q_FOREACH(auto& r, _rules) {
        QListWidgetItem *newItem = new QListWidgetItem(r->name);
        ui->listWidget->addItem(newItem);
    }
}

Settings::~Settings()
{
    delete ui;
}

void Settings::init() {
    _rules.insert("Default", make_shared<Rule>(QString("Default"),
                                                     QString(""),
                                                     QStringList("*"),
                                                     QStringList("*.*"),
                                                     QString(""),
                                                     QStringList("")));

    saveRules();
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
    auto *newItem = new QListWidgetItem("New rule", ui->listWidget);    

    newItem->setFlags(newItem->flags () | Qt::ItemIsEditable);
    ui->listWidget->editItem(newItem);

    auto newRule = make_shared<Rule>(QString("New rule"),
                                     QString(""),
                                     QStringList("*"),
                                     QStringList("*.*"),
                                     QString(""),
                                     QStringList(""));
    _currentRule = newRule;
    _rules.insert(_currentRule->name,_currentRule);
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

    _rules.remove(_currentRule->name);
    delete item;
    item = 0;
    _currentRule = _rules.first();
}

void Settings::on_btn_apply_clicked()
{
    saveRules();
}

void Settings::on_btn_ok_clicked()
{
    saveRules();
    _rules.clear();
    this->close();
}

void Settings::on_btn_cancel_clicked()
{    
    _rules.clear();
    this->close();
}

void Settings::on_listWidget_itemClicked(QListWidgetItem *item)
{
    _currentRule = _rules[item->text()];

    qDebug("%i is %s", ui->listWidget->currentRow(), _currentRule->name.toUtf8().constData());

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
    _currentRule->directoryFilters = ui->in_dirfs->text().split(", ");
}

void Settings::on_in_filefs_editingFinished()
{
    _currentRule->fileFilters = ui->in_filefs->text().split(", ");
}

void Settings::on_in_cmd_editingFinished()
{
    _currentRule->command = ui->in_cmd->text();
}

void Settings::on_in_args_editingFinished()
{
    _currentRule->arguments = ui->in_args->text().split(", ");
}

void Settings::loadRules() {
    QSettings settings;
    settings.beginGroup("Rules");
    Q_FOREACH(QString s, settings.childGroups()) {
        qDebug(s.toUtf8().constData());
        settings.beginGroup(s);
        qDebug("%s", settings.value("name").toString().toUtf8().constData());
        qDebug("%s", settings.value("wDir").toString().toUtf8().constData());
        qDebug("%s", settings.value("dirFilters").toStringList().join(", ").toUtf8().constData());
        qDebug("%s", settings.value("fileFilters").toStringList().join(", ").toUtf8().constData());
        qDebug("%s", settings.value("command").toString().toUtf8().constData());
        qDebug("%s", settings.value("args").toStringList().join(", ").toUtf8().constData());
        _rules.insert(settings.value("name").toString(), make_shared<Rule>(settings.value("name").toString(),
                                                                           settings.value("wDir").toString(),
                                                                           settings.value("dirFilters").toStringList(),
                                                                           settings.value("fileFilters").toStringList(),
                                                                           settings.value("command").toString(),
                                                                           settings.value("args").toStringList()));
        settings.endGroup();
    }
    settings.endGroup();
}

void Settings::saveRules() {
    QSettings settings;
    settings.beginGroup("Rules");
    Q_FOREACH(auto& r, _rules) {
        settings.beginGroup(r->name);
        settings.setValue("name", r->name);
        settings.setValue("wDir", r->workingDirectory);
        settings.setValue("dirFilters", r->directoryFilters);
        settings.setValue("fileFilters", r->fileFilters);
        settings.setValue("command", r->command);
        settings.setValue("args", r->arguments);
        settings.endGroup();
    }
    settings.endGroup();
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
