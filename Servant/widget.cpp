#include "widget.h"
#include "ui_widget.h"

#include <string>
#include <algorithm>

#include <QProcess>

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

void Widget::on_inputDir_editingFinished()
{
    QString dirString = ui->inputDir->text();
    emit dir_changed(dirString);
}

void Widget::on_inputExt_editingFinished()
{
    QString extString = ui->inputExt->text();
    emit ext_changed(extString);
}

void Widget::on_inputCmd_editingFinished()
{
    QString cmdString = ui->inputCmd->text();
    emit cmd_changed(cmdString);
}

void Widget::fileChanged(const QString &path)
{
    qDebug("%s changed!", path.toUtf8().constData());
    ui->output->append(path);
}

void Widget::directoryChanged(const QString &path)
{
    qDebug("%s changed!", path.toUtf8().constData());
    ui->output->append(path);
}
