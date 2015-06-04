#include "widget.h"
#include "watcher.h"
#include "settings.h"
#include "rule.h"

#include <QApplication>
#include <QDir>
#include <QSettings>

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

    QObject::connect(&watcher, &Watcher::ruleUpdated,
                     &widget, &Widget::onRuleUpdated);

    QObject::connect(&widget, &Widget::rulesUpdated,
                     &watcher, &Watcher::rulesUpdated);

    QCoreApplication::setApplicationName("Servant");
    QCoreApplication::setOrganizationName("Alexander Oskin");

    return a.exec();
}
