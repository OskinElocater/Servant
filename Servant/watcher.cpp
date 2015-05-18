#include "watcher.h"

#include <QDir>

void Watcher::dir_changed(QString &path) {
    if(path.begin() == path.end())
        changePath(wDir);
    else
        changePath(path);

    qDebug("Dir changed!");
}

void Watcher::ext_changed(QString &ext) {
    wExt = ext;
    changePath(wDir);

    qDebug("Extension changed to %s!", ext.toUtf8().constData());
}

void Watcher::cmd_changed(QString &cmd) {
    wCmd = cmd;
    qDebug("Command changed!");
}

void Watcher::changePath(QString &newPath) {
    removeAllPaths();

    this->addPathRecursive(newPath);

    wDir = newPath;
}

void Watcher::addPathRecursive(QString &path) {
    QDir newDir(path);

    QStringList dirs = newDir.entryList(QDir::Filter::Dirs | QDir::Filter::NoDotAndDotDot);

    this->addPath(path);
    qDebug(path.toUtf8().constData());

    Q_FOREACH(QString dir, dirs) {
        QString fullDir = QString("%1/%2").arg(path, dir.toUtf8().constData());
        addPathRecursive(fullDir);
    }

    QStringList filter(QString("*.%1").arg(wExt));
    QStringList filesToAdd;
    Q_FOREACH(QString file,
              newDir.entryList(filter,
                               QDir::Filter::Files | QDir::Filter::NoDotAndDotDot))
    {
        qDebug(newDir.absoluteFilePath(file).toUtf8().constData());
        filesToAdd.append(newDir.absoluteFilePath(file));
    }

    this->addPaths(filesToAdd);
}

void Watcher::removeAllPaths() {
    Q_FOREACH(QString dir, this->directories())
        this->removePath(dir);

    Q_FOREACH(QString file, this->files())
        this->removePath(file);
}
