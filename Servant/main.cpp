#include "widget.h"
#include "watcher.h"

#include <QApplication>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget widget;
    widget.show();

    Watcher watcher;
    watcher.setDefaultExtension(QString("*"));
    watcher.setDefaultDir(QString("E:/Documents/test"));
    watcher.setDefaultCommand(QString("echo"));

    QDir defaultDir(watcher.getDefaultDir());
    QStringList filter(QString("*.%1").arg(watcher.getDefaultExtension()));
    QStringList filesInDefDir = defaultDir.entryList(filter, QDir::Filter::Files);
    QStringList filesToWatch;

    Q_FOREACH(QString file, filesInDefDir)
        filesToWatch.append(defaultDir.absoluteFilePath(file));

    watcher.addPaths(filesToWatch);
    watcher.addPath(defaultDir.path());

    /*QStringList filesList = watcher.files();
    Q_FOREACH(QString file, filesList)
        qDebug("File %s", file.toUtf8().constData());*/


    QObject::connect(&watcher, &Watcher::fileChanged,
                     &widget, &Widget::fileChanged);

    QObject::connect(&watcher, &Watcher::directoryChanged,
                     &widget, &Widget::directoryChanged);

    QObject::connect(&widget, &Widget::dir_changed,
                     &watcher, &Watcher::dir_changed);

    QObject::connect(&widget, &Widget::ext_changed,
                     &watcher, &Watcher::ext_changed);

    QObject::connect(&widget, &Widget::cmd_changed,
                     &watcher, &Watcher::cmd_changed);

    return a.exec();
}
