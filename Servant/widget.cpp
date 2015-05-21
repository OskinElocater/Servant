#include "widget.h"
#include "ui_widget.h"

#include <string>
#include <algorithm>

#include <QProcess>
#include <QDir>

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

void Widget::initFields(QString &dir,
                        QStringList &dirFilters,
                        QStringList &fileFilters,
                        QString &cmd,
                        QStringList &args) {
    ui->inputDir->clear();
    ui->inputDir->insert(dir);

    ui->inputDirFilters->clear();
    ui->inputDirFilters->insert(dirFilters.join(", "));

    ui->inputFileFilters->clear();
    ui->inputFileFilters->insert(fileFilters.join(", "));

    ui->inputCmd->clear();
    ui->inputCmd->insert(cmd);

    ui->inputArg->clear();
    ui->inputArg->insert(args.join(", "));
}

void Widget::on_inputDir_editingFinished()
{
    QString dirString = ui->inputDir->text();
    emit dir_changed(dirString);
}

void Widget::on_inputDirFilters_editingFinished()
{
    QString filtersString = ui->inputDirFilters->text();
    QStringList filters = filtersString.split(", ", QString::SkipEmptyParts);
    emit dir_filters_changed(filters);
}

void Widget::on_inputFileFilters_editingFinished()
{
    QString filtersString = ui->inputFileFilters->text();
    QStringList filters = filtersString.split(", ", QString::SkipEmptyParts);
    emit file_filters_changed(filters);
}

void Widget::on_inputCmd_editingFinished()
{
    QString cmdString = ui->inputCmd->text();
    emit cmd_changed(cmdString);
}

void Widget::on_inputArg_editingFinished()
{
    QString argsString = ui->inputArg->text();
    QStringList args = argsString.split(", ", QString::SkipEmptyParts);
    emit args_changed(args);
}

void Widget::fileChanged(const QString &path)
{
    //qDebug("File %s changed!", path.toUtf8().constData());
    ui->output->append(path);
}

void Widget::directoryChanged(const QString &path)
{
    //qDebug("Dir %s changed!", path.toUtf8().constData());
    ui->output->append(path);
}

void Widget::pathUpdated(QString &path) {
    ui->treeWidget->clear();
    updateTreeWidget(path, Q_NULLPTR);
}

void Widget::updateTreeWidget(QString &path, QTreeWidgetItem *parent) {
    QDir newDir(path);
    QTreeWidgetItem *topItem = new QTreeWidgetItem();
    topItem->setText(0, newDir.dirName());

    QStringList dirs = newDir.entryList(QDir::Filter::Dirs | QDir::Filter::NoDotAndDotDot);

    Q_FOREACH(QString dir, dirs) {
        //qDebug(dir.toUtf8().constData());
        updateTreeWidget(QString("%1/%2").arg(path, dir), topItem);
    }

    QString filtersString = ui->inputDirFilters->text();
    QStringList filters = filtersString.split(", ", QString::SkipEmptyParts);
    Q_FOREACH(QString filter, filters)
        if(newDir.dirName() == filter) {
            QString fileFiltersString = ui->inputFileFilters->text();
            QStringList fileFilters = fileFiltersString.split(", ", QString::SkipEmptyParts);
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

void Widget::on_inputDir_textChanged(const QString &arg1)
{

}
