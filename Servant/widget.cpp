#include "widget.h"
#include "ui_widget.h"
#include "settingsloader.h"

#include <string>
#include <algorithm>

#include <QProcess>
#include <QSettings>
#include <QDir>

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

void Widget::fileChanged(const QString &path)
{
    //qDebug("File %s changed!", path.toUtf8().constData());
    ui->output->append(path + QString(" is changed."));
}

void Widget::directoryChanged(const QString &path)
{
    //qDebug("Dir %s changed!", path.toUtf8().constData());
    ui->output->append(path + QString(" is changed."));
}

void Widget::onRuleUpdated(Rule &rule) {
    ui->treeWidget->clear();
    updateTreeWidgetWithRule(rule, Q_NULLPTR);
}

void Widget::onRulesUpdated(QList<Rule> rules) {
    qDebug("Widget: Rules Updated!");
    emit rulesUpdated(rules);
}

void Widget::updateTreeWidgetWithRule(Rule &rule, QTreeWidgetItem *parent) {
    QDir newDir(rule.workingDirectory);
    QTreeWidgetItem *topItem = new QTreeWidgetItem();
    topItem->setText(0, newDir.dirName());

    QStringList dirs = newDir.entryList(QDir::Filter::Dirs | QDir::Filter::NoDotAndDotDot);

    Q_FOREACH(QString dir, dirs) {
        //qDebug(dir.toUtf8().constData());
        Rule newRule(rule.name, dir, rule.directoryFilters, rule.fileFilters,
                     rule.command, rule.arguments);
        updateTreeWidgetWithRule(newRule, topItem);
    }

    QStringList filters = rule.directoryFilters;
    Q_FOREACH(QString filter, filters)
        if(newDir.dirName() == filter) {
            QStringList fileFilters = rule.fileFilters;
            Q_FOREACH(QString file,
                      newDir.entryList(fileFilters,
                                       QDir::Filter::Files | QDir::Filter::NoDotAndDotDot))
            {
                QTreeWidgetItem *fileItem = new QTreeWidgetItem();
                fileItem->setText(0, file);
                topItem->addChild(fileItem);
            }
        }

    if(parent == Q_NULLPTR)
        ui->treeWidget->addTopLevelItem(topItem);
    else if(topItem->childCount() != 0)
        parent->addChild(topItem);
}

void Widget::updateTreeWidgetWithRuleId(int &id, QTreeWidgetItem *parent) {
    /*auto rules = SettingsLoader::loadRules();
    Rule rule = rules->value(id);
    QDir newDir(rule.workingDirectory);
    QTreeWidgetItem *topItem = new QTreeWidgetItem();
    topItem->setText(0, newDir.dirName());

    QStringList dirs = newDir.entryList(QDir::Filter::Dirs | QDir::Filter::NoDotAndDotDot);

    Q_FOREACH(QString dir, dirs) {
        //qDebug(dir.toUtf8().constData());
        Rule newRule(rule.name, dir, rule.directoryFilters, rule.fileFilters,
                     rule.command, rule.arguments);
        updateTreeWidgetWithRule(newRule, topItem);
    }

    QStringList filters = rule.directoryFilters;
    Q_FOREACH(QString filter, filters)
        if(newDir.dirName() == filter) {
            QStringList fileFilters = rule.fileFilters;
            Q_FOREACH(QString file,
                      newDir.entryList(fileFilters,
                                       QDir::Filter::Files | QDir::Filter::NoDotAndDotDot))
            {
                QTreeWidgetItem *fileItem = new QTreeWidgetItem();
                fileItem->setText(0, file);
                topItem->addChild(fileItem);
            }
        }

    if(parent == Q_NULLPTR)
        ui->treeWidget->addTopLevelItem(topItem);
    else if(topItem->childCount() != 0)
        parent->addChild(topItem);*/
}

void Widget::on_btn_settings_clicked()
{
    QSettings s;
    //s.clear();

    Settings settings = Settings();
    /*QObject::connect(&settings, &Settings::rulesUpdated,
                     this, &Widget::onRulesUpdated);*/

    settings.setModal(true);
    settings.exec();
}

void Widget::on_btn_start_clicked()
{

}

void Widget::on_btn_stop_clicked()
{

}
