#ifndef SETTINGSLOADER_H
#define SETTINGSLOADER_H

#include <memory>

#include <QWidget>
#include <QSettings>

#include "rule.h"

using namespace std;

class SettingsLoader
{
public:
    SettingsLoader() { }
    ~SettingsLoader() { }

    static QVector<shared_ptr<Rule>> SettingsLoader::loadRules() {
        QVector<shared_ptr<Rule>> ret;
        QSettings settings;
        settings.beginGroup("Rules");
        Q_FOREACH(QString s, settings.childGroups()) {
            settings.beginGroup(s);            
            qDebug("%s", settings.value("name").toString().toUtf8().constData());
            qDebug("%s", settings.value("wDir").toString().toUtf8().constData());
            qDebug("%s", settings.value("dirFilters").toStringList().join(", ").toUtf8().constData());
            qDebug("%s", settings.value("fileFilters").toStringList().join(", ").toUtf8().constData());
            qDebug("%s", settings.value("command").toString().toUtf8().constData());
            qDebug("%s", settings.value("args").toStringList().join(", ").toUtf8().constData());
            shared_ptr<Rule> r = make_shared<Rule>(settings.value("name").toString(),
                              settings.value("wDir").toString(),
                              settings.value("dirFilters").toStringList(),
                              settings.value("fileFilters").toStringList(),
                              settings.value("command").toString(),
                              settings.value("args").toStringList());

            r->id = settings.value("id", -1).toInt(); // This may be bad!
            ret.push_back(r);
            settings.endGroup();
        }
        settings.endGroup();

        return ret;
    }

    static void SettingsLoader::saveRule(shared_ptr<Rule> r) {
        QSettings settings;
        settings.beginGroup("Rules");
            settings.beginGroup(r->name);
                settings.setValue("id", r->id);
                settings.setValue("name", r->name);
                settings.setValue("wDir", r->workingDirectory);
                settings.setValue("dirFilters", r->directoryFilters);
                settings.setValue("fileFilters", r->fileFilters);
                settings.setValue("command", r->command);
                settings.setValue("args", r->arguments);
            settings.endGroup();
        settings.endGroup();
    }

    static void SettingsLoader::saveRules(QVector<shared_ptr<Rule>> rules) {
        QSettings settings;
        settings.beginGroup("Rules");
            Q_FOREACH(auto& r, rules) {
                settings.beginGroup(r->name);
                    settings.setValue("id", r->id);
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
};

#endif // SETTINGSLOADER_H
