#include "watcher.h"

#include <QDir>

void Watcher::dir_changed(QString &path) {
    if(path.begin() == path.end())
        changePath(wDir);
    else
        changePath(path);

    wDir = path;

    qDebug("Dir changed!");
}

void Watcher::ext_changed(QString &ext) {
    wExt = ext;
    changePath(wDir);

    qDebug("Extension changed!");
}

void Watcher::cmd_changed(QString &cmd) {
    wCmd = cmd;
    qDebug("Command changed!");
}

void Watcher::changePath(QString &newPath) {
    QDir newDir(newPath);
    QStringList filter(QString("*.%1").arg(wExt));
    QStringList filesToWatch;

    Q_FOREACH(QString file, newDir.entryList(filter)) {
        filesToWatch.append(newDir.absoluteFilePath(file));
        qDebug(newDir.absoluteFilePath(file).toUtf8().constData());
    }

    this->removePaths(this->files());
    this->removePath(wDir);

    this->addPaths(filesToWatch);
    this->addPath(newDir.path());
}

void Watcher::addPathRecursive(QString &path) {

}