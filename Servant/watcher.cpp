#include "watcher.h"

#include <QProcess>

Watcher::Watcher(QFileSystemWatcher *parent):
QFileSystemWatcher(parent)
{

}

Watcher::Watcher(shared_ptr<Rule> rule, QFileSystemWatcher *parent):
QFileSystemWatcher(parent),
_rule(rule)
{

}

void Watcher::start() {
    addPathRecursive(_rule->workingDirectory);
}

void Watcher::refresh() {
    removeAllPaths();
    addPathRecursive(_rule->workingDirectory);
}

void Watcher::stop() {
    removeAllPaths();
}

void Watcher::on_dir_changed(const QString &path) {
    qDebug("DIR CHANGED!");
    QString p = path;
}

void Watcher::on_file_changed(const QString &path) {
    //processVariables();

    _rule->arguments.replaceInStrings(QString("{WORKING_DIR}"), _rule->workingDirectory);
    _rule->arguments.replaceInStrings(QString("{FILE_PATH}"), path);
    _rule->arguments.replaceInStrings(QString("{FILE_PATH_NO_EXT}"),
                                      path.split(".").first());

    QString fileName = path.split("/").last();
    _rule->arguments.replaceInStrings(QString("{FILE_NAME}"), fileName);

    Q_FOREACH(auto arg, _rule->arguments)
    {

    }


    qDebug("Executing %s %s",
           _rule->command.toUtf8().constData(),
           _rule->arguments.join(" ").toUtf8().constData());
    executeCommand(_rule->command, _rule->arguments);
}

void Watcher::processVariables() {
    QRegExp exp("\\{([^\\]]+)\\}");

    Q_FOREACH(auto arg, _rule->arguments) {
        exp.indexIn(arg);
        if(exp.captureCount() >= 0) {
            auto var = exp.capturedTexts()[1];
            if(var == "WORKING_DIR") {
                arg.replace("{WORKING_DIR}", _rule->workingDirectory);
            }
        }
    }
}

void Watcher::executeCommand(QString &cmd, QStringList &args) {
    //QProcess p;
    //int err = QProcess::execute(cmd, args);
    QProcess::execute(cmd, args);
    //p.waitForFinished();

    //qDebug("%i", err);
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

    if(_rule->directoryFilters.empty())
        filesToAdd = addFilesInDir(newDir);
    else
        Q_FOREACH(QString filter, _rule->directoryFilters)
            if(newDir.dirName() == filter || filter == QString(""))
                filesToAdd = addFilesInDir(newDir);

    if(filesToAdd.empty()) {
        //qDebug("Skipping %s", path.toUtf8().constData());
    }
    else
       this->addPaths(filesToAdd);
}

QStringList Watcher::addFilesInDir(QDir &dir) {
    QStringList ret;
    Q_FOREACH(QString file,
              dir.entryList(_rule->fileFilters,
                            QDir::Filter::Files | QDir::Filter::NoDotAndDotDot))
    {
        //qDebug(dir.absoluteFilePath(file).toUtf8().constData());
        ret.append(dir.absoluteFilePath(file));
    }
    return ret;
}

void Watcher::removeAllPaths() {
    Q_FOREACH(QString dir, this->directories())
        this->removePath(dir);

    Q_FOREACH(QString file, this->files())
        this->removePath(file);
}
