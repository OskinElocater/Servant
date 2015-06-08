#ifndef WATCHER_H
#define WATCHER_H

#include <memory>

#include <QFileSystemWatcher>
#include <QWidget>
#include <QProcess>
#include <QDir>

#include "rule.h"

using std::shared_ptr;

class Watcher : public QFileSystemWatcher
{
    Q_OBJECT

public:
    Watcher(QFileSystemWatcher * parent = 0);
    Watcher(shared_ptr<Rule> rule, QFileSystemWatcher * parent = 0);

    void start();
    void refresh();
    void stop();

    shared_ptr<Rule> getRule() { return _rule; }
    void setRule(shared_ptr<Rule> r) { _rule = r; refresh(); }

public slots:
    void on_file_changed(const QString &path);
    void on_dir_changed(const QString &path);

private:
    void addPathRecursive(QString &path);
    QStringList addFilesInDir(QDir &dir);
    void removeAllPaths();

    void executeCommand(QString &cmd, QStringList &args);

    void processVariables();

    shared_ptr<Rule> _rule;
};

#endif // WATCHER_H
