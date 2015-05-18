#ifndef WATCHER_H
#define WATCHER_H

#include <QFileSystemWatcher>
#include <QWidget>

#include "widget.h"

class Watcher : public QFileSystemWatcher
{
    Q_OBJECT

public slots:
    void dir_changed(QString &path);
    void ext_changed(QString &ext);
    void cmd_changed(QString &cmd);

    void setDefaultExtension(QString &ext) { wExt = ext; }
    void setDefaultDir(QString &path) { wDir = path; }
    void setDefaultCommand(QString &cmd) { wCmd = cmd; }

    QString& getDefaultExtension() { return wExt; }
    QString& getDefaultDir() { return wDir; }
    QString& getDefaultCommand() { return wCmd; }

private:
    void changePath(QString &newPath);
    void addPathRecursive(QString &path);

    QString wDir;
    QString wExt;
    QString wCmd;
};

#endif // WATCHER_H
