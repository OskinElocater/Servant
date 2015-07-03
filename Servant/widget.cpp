#include "widget.h"
#include "ui_widget.h"
#include "settingsloader.h"

#include <string>
#include <algorithm>

#include <QProcess>
#include <QSettings>

using namespace std;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::fileChanged(QString &ruleName, const QString &path)
{
    //qDebug("File %s changed!", path.toUtf8().constData());
    ui->output->append(path + QString(" is changed."));
}

void Widget::directoryChanged(const QString &path)
{
    //qDebug("Dir %s changed!", path.toUtf8().constData());
    ui->output->append(path + QString(" is changed."));
}

void Widget::onRulesUpdated(QVector<shared_ptr<Rule>> rules) {
    //qDebug("Widget: Rules updated! Updating tree view...");
    ui->output->append("Rules changed! Updating...");

    emit rulesUpdated(rules);

    ui->treeWidget->clear();
    Q_FOREACH(auto& r, rules) {        
        _currentRule = r;

        QTreeWidgetItem *ruleNameItem = new QTreeWidgetItem();
        ruleNameItem->setText(0, r->name);
        updateTreeWidgetWithPath(_currentRule->workingDirectory, ruleNameItem);
        ui->treeWidget->addTopLevelItem(ruleNameItem);

        ui->output->append(QString("Updated rule %1").arg(r->name));
    }

    _currentRule.reset();
}

void Widget::outputMessage(const QString &msg) {
    ui->output->append(msg);
}

void Widget::updateTreeWidgetWithPath(QString &path, QTreeWidgetItem *parent) {
    QDir newDir(path);
    QTreeWidgetItem *topItem = new QTreeWidgetItem();
    topItem->setText(0, newDir.dirName());

    QStringList dirs = newDir.entryList(QDir::Filter::Dirs | QDir::Filter::NoDotAndDotDot);

    Q_FOREACH(QString dir, dirs) {
        //qDebug(dir.toUtf8().constData());
        QString fullDir = QString("%1/%2").arg(path, dir.toUtf8().constData());
        updateTreeWidgetWithPath(fullDir, topItem);
    }

    if(_currentRule->directoryFilters.empty())
        addItemInDir(newDir, topItem);
    else
        Q_FOREACH(QString filter, _currentRule->directoryFilters)
            if(newDir.dirName() == filter) {
                addItemInDir(newDir, topItem);
            }

    if(parent == Q_NULLPTR)
        ui->treeWidget->addTopLevelItem(topItem);
    else if(topItem->childCount() != 0)
        parent->addChild(topItem);
}

void Widget::addItemInDir(QDir &dir, QTreeWidgetItem *parent) {
    Q_FOREACH(QString file,
              dir.entryList(_currentRule->fileFilters,                            
                            QDir::Filter::Files | QDir::Filter::NoDotAndDotDot))
    {
        QTreeWidgetItem *fileItem = new QTreeWidgetItem();
        fileItem->setText(0, file);
        parent->addChild(fileItem);
    }
}

void Widget::on_btn_settings_clicked()
{
    QSettings s;
    //s.clear();

    Settings settings = Settings();
    QObject::connect(&settings, &Settings::rulesUpdated,
                     this, &Widget::onRulesUpdated);

    settings.setModal(true);
    settings.exec();
}

void Widget::on_btn_start_clicked()
{

}

void Widget::on_btn_stop_clicked()
{

}
