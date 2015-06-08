#include "widget.h"
#include "watchermanager.h"
#include "settings.h"
#include "settingsloader.h"
#include "rule.h"

#include <QApplication>
#include <QDir>
#include <QSettings>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget widget;
    widget.show();

    WatcherManager watcherManager;

    QObject::connect(&widget, &Widget::rulesUpdated,
                     &watcherManager, &WatcherManager::rulesUpdated);

    QObject::connect(&watcherManager, &WatcherManager::fileChanged,
                     &widget, &Widget::fileChanged);

    QCoreApplication::setApplicationName("Servant");
    QCoreApplication::setOrganizationName("Alexander Oskin");

    widget.onRulesUpdated(SettingsLoader::loadRules());

    return a.exec();
}
