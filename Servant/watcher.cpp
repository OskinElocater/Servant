#include "watcher.h"

#include <QDir>
#include <QProcess>

void Watcher::dir_changed(QString &path) {
    if(path.begin() == path.end())
        refreshPath(wDir);
    else if(path != wDir)
        refreshPath(path);

    qDebug("Dir not changed!");
}

void Watcher::dir_filters_changed(QStringList &filters) {
    if(wDirFilters == filters)
        return;

    wDirFilters = filters;
    refreshPath(wDir);

    qDebug("Dir Filters changed to ");
    Q_FOREACH(QString filter, filters)
            qDebug(filter.toUtf8().constData());
}

void Watcher::file_filters_changed(QStringList &filters) {
    if(wFileFilters == filters)
        return;

    wFileFilters = filters;
    refreshPath(wDir);

    qDebug("File Filters changed to ");
    Q_FOREACH(QString filter, filters)
        qDebug(filter.toUtf8().constData());
}

void Watcher::cmd_changed(QString &cmd) {
    if(wCmd == cmd)
        return;

    wCmd = cmd;
    qDebug("Command changed!");
}

void Watcher::args_changed(QStringList &args) {
    wArgs = args;
    qDebug("Arguments changed!");
}

void Watcher::on_dir_changed(const QString &path) {
    qDebug("DIR CHANGED!");
    QString p = path;
    refreshPath(p);
}

void Watcher::on_file_changed(const QString &path) {
    QStringList args;
    args.append("e:/Documents/Work/Cars/convert_obj_three.py");
    args.append("-i");
    args.append(path);
    QString outfile(path);
    outfile.replace(QString("Exported"), QString("Converted"));
    outfile.replace(QString("obj"), QString("js"));
    args.append("-o");
    args.append(outfile);
    Q_FOREACH(QString a, args)
        qDebug(a.toUtf8().constData());
    executeCommand(wCmd, args);
}

void Watcher::executeCommand(QString &cmd, QStringList &args) {
    //QProcess p;
    //int err = QProcess::execute(cmd, args);
    QProcess::execute(cmd, args);
    //p.waitForFinished();

    //qDebug("%i", err);
}


void Watcher::refreshPath(QString &newPath) {
    removeAllPaths();

    this->addPathRecursive(newPath);

    wDir = newPath;

    emit pathUpdated(newPath);
}

void Watcher::addPathRecursive(QString &path) {
    QDir newDir(path);

    QStringList dirs = newDir.entryList(QDir::Filter::Dirs | QDir::Filter::NoDotAndDotDot);

    this->addPath(path);
    //qDebug(path.toUtf8().constData());

    Q_FOREACH(QString dir, dirs) {
        QString fullDir = QString("%1/%2").arg(path, dir.toUtf8().constData());
        addPathRecursive(fullDir);
    }

    QStringList filesToAdd;
    Q_FOREACH(QString filter, wDirFilters)
    if(newDir.dirName() == filter) {
        Q_FOREACH(QString file,
                  newDir.entryList(wFileFilters,
                                   QDir::Filter::Files | QDir::Filter::NoDotAndDotDot))
        {
            qDebug(newDir.absoluteFilePath(file).toUtf8().constData());
            filesToAdd.append(newDir.absoluteFilePath(file));
        }
    }

    /*QStringList filesWatched = this->files();
    Q_FOREACH(QString file, filesWatched)
        qDebug(file.toUtf8().constData());*/    
    if(filesToAdd.empty())
        qDebug("Skipping %s", path.toUtf8().constData());
    else
       this->addPaths(filesToAdd);
}

void Watcher::removeAllPaths() {
    Q_FOREACH(QString dir, this->directories())
        this->removePath(dir);

    Q_FOREACH(QString file, this->files())
        this->removePath(file);
}
