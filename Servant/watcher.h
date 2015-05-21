#ifndef WATCHER_H
#define WATCHER_H

#include <QFileSystemWatcher>
#include <QWidget>
#include <QProcess>

#include "widget.h"

class Watcher : public QFileSystemWatcher
{
    Q_OBJECT

public:
    void setDefaultDir(QString &path) { wDir = path; }
    void setDefaultDirFilters(QStringList &filters) { wDirFilters = filters; }
    void setDefaultFileFilters(QStringList &filters) { wFileFilters = filters; }    
    void setDefaultCommand(QString &cmd) { wCmd = cmd; }
    void setDefaultArgs(QStringList &args) { wArgs = args; }

    QStringList& getDefaultDirFilters() { return wDirFilters; }
    QStringList& getDefaultFileFilters() { return wFileFilters; }
    QString& getDefaultDir() { return wDir; }
    QString& getDefaultCommand() { return wCmd; }
    QStringList& getDefaultArgs() { return wArgs; }

    void init() { refreshPath(wDir); }
public slots:
    void dir_changed(QString &path);
    void dir_filters_changed(QStringList &filters);
    void file_filters_changed(QStringList &filters);
    void cmd_changed(QString &cmd);
    void args_changed(QStringList &args);

    void on_file_changed(const QString &path);
    void on_dir_changed(const QString &path);

signals:
    void pathUpdated(QString &path);

private:
    void refreshPath(QString &newPath);
    void addPathRecursive(QString &path);
    void removeAllPaths();

    void executeCommand(QString &cmd, QStringList &args);

    QString wDir;
    QStringList wFileFilters;
    QStringList wDirFilters;
    QString wCmd;
    QStringList wArgs;
};

#endif // WATCHER_H
