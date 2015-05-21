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

    QObject::connect(&watcher, &Watcher::fileChanged,
                     &watcher, &Watcher::on_file_changed);

    QObject::connect(&watcher, &Watcher::directoryChanged,
                     &watcher, &Watcher::on_dir_changed);

    QObject::connect(&watcher, &Watcher::fileChanged,
                     &widget, &Widget::fileChanged);

    QObject::connect(&watcher, &Watcher::directoryChanged,
                     &widget, &Widget::directoryChanged);

    QObject::connect(&watcher, &Watcher::pathUpdated,
                     &widget, &Widget::pathUpdated);

    QObject::connect(&widget, &Widget::dir_changed,
                     &watcher, &Watcher::dir_changed);

    QObject::connect(&widget, &Widget::dir_filters_changed,
                     &watcher, &Watcher::dir_filters_changed);

    QObject::connect(&widget, &Widget::file_filters_changed,
                     &watcher, &Watcher::file_filters_changed);

    QObject::connect(&widget, &Widget::cmd_changed,
                     &watcher, &Watcher::cmd_changed);

    QObject::connect(&widget, &Widget::args_changed,
                     &watcher, &Watcher::args_changed);

    watcher.setDefaultDirFilters(QStringList("Exported"));
    watcher.setDefaultFileFilters(QStringList("*.obj"));
    watcher.setDefaultDir(QString("E:/Documents/Work/Cars"));
    watcher.setDefaultCommand(QString("python"));
    watcher.setDefaultArgs(QStringList(""));

    widget.initFields(watcher.getDefaultDir(),
                      watcher.getDefaultDirFilters(),
                      watcher.getDefaultFileFilters(),
                      watcher.getDefaultCommand(),
                      watcher.getDefaultArgs());

    watcher.init();

    return a.exec();
}
