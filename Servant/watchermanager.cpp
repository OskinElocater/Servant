#include "watchermanager.h"

void WatcherManager::rulesUpdated(QVector<shared_ptr<Rule>> rules) {
    qDebug("Watchermanager: Rules updated! Updating watchers...");
    Q_FOREACH(auto r, rules) {
        addWatcherWithRule(r);
    }
}

void WatcherManager::onFileChanged(const QString &path) {
    auto w = dynamic_cast<Watcher*>(sender());
    emit fileChanged(w->getRule()->name, path);
}

void WatcherManager::addWatcherWithRule(shared_ptr<Rule> rule) {
    auto newWatcher = make_shared<Watcher>(rule);
    newWatcher->start();
    _watchers.push_back(newWatcher);

    QObject::connect(&*newWatcher, &Watcher::fileChanged,
                     &*newWatcher, &Watcher::on_file_changed);

    QObject::connect(&*newWatcher, &Watcher::directoryChanged,
                     &*newWatcher, &Watcher::on_dir_changed);

    QObject::connect(&*newWatcher, &Watcher::fileChanged,
                     this, &WatcherManager::onFileChanged);
}

void WatcherManager::removeWatcherWithRule(shared_ptr<Rule> rule) {
    Q_FOREACH(auto watcher, _watchers) {
        if(watcher->getRule() == rule) {
            watcher->stop();
            _watchers.removeOne(watcher);
        }
    }
}
