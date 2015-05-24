#include "settings.h"
#include "ui_settings.h"

#include <QFileDialog>
#include <QSettings>

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
}

Settings::~Settings()
{
    delete ui;
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


