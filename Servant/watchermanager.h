#ifndef WATCHERMANAGER_H
#define WATCHERMANAGER_H

#include <memory>

#include <QWidget>

#include "watcher.h"

using std::shared_ptr;
using std::make_shared;

class WatcherManager : public QObject
{
    Q_OBJECT
public slots:
    void rulesUpdated(QVector<shared_ptr<Rule>> rules);
    void onFileChanged(const QString &path);

signals:
    void fileChanged(QString &ruleName, const QString &filePath);

private:
    void addWatcherWithRule(shared_ptr<Rule> rule);
    void removeWatcherWithRule(shared_ptr<Rule> rule);
    void removeAllWatchers() { _watchers.clear(); }

    QVector<shared_ptr<Watcher>> _watchers;
};

#endif // WATCHERMANAGER_H
