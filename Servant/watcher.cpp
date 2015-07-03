#include "watcher.h"

#include <QProcess>

#define PRINT_LIST_CONTENTS(list)\
    Q_FOREACH(auto el, list)\
        qDebug("%s", el.toUtf8().constData());

Watcher::Watcher(QFileSystemWatcher *parent):
QFileSystemWatcher(parent),
_pr(new QProcess())
{

}

Watcher::Watcher(shared_ptr<Rule> rule, QFileSystemWatcher *parent):
QFileSystemWatcher(parent),
_rule(rule),
_pr(new QProcess())
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
    QString pathNew = path;
    pathNew.replace("/", "\\");
    QStringList correctArgs = processArgumentsForFile(pathNew);


    if(_rule->command == "copy") {
        if(QFile::exists(correctArgs.last())) {
            qDebug("File exists. Removing...");
            QFile::remove(correctArgs.last());
        }

        qDebug("Copying %s to %s is %i",
               correctArgs.first().toUtf8().constData(),
               correctArgs.last().toUtf8().constData(),
               QFile::copy(correctArgs.first(), correctArgs.last()));
    }
    else {
        qDebug("Executing %s %s",
               _rule->command.toUtf8().constData(),
               correctArgs.join(" ").toUtf8().constData());
        executeCommand(_rule->command, correctArgs);
    }
}

QStringList Watcher::processArgumentsForFile(const QString& filePath) {
    QStringList ret;
    QStringList filePathList = filePath.split("\\",
                                              QString::SkipEmptyParts);

    QRegExp exp("\\{([^}]+)\\}");

    Q_FOREACH(auto arg, _rule->arguments) {
        QStringList list;
        QString newArg = arg;
        int pos = 0;

        while ((pos = exp.indexIn(arg, pos)) != -1) {
            list.append(exp.cap(1));
            pos += exp.matchedLength();
        }

        if(!list.empty()) {
            qDebug("Caught %s", list.join(" ").toUtf8().constData());
            Q_FOREACH(auto cap, list) {
                if(cap.contains("WORKING_DIR")) {
                    newArg.replace("{WORKING_DIR}", _rule->workingDirectory);
                }
                if(cap.contains("RELATIVE_DIR")) {
                    int wdir_size = _rule->workingDirectory.split("\\",
                                                                  QString::SkipEmptyParts).size();
                    QStringList relDirList;
                    for(int i = wdir_size; i < filePathList.size() - 1; ++i)
                        relDirList.append(filePathList[i]);

                    newArg.replace("{RELATIVE_DIR}", relDirList.join("\\"));
                }
                if(cap.contains("ABSOLUTE_DIR")) {
                    QStringList absDirList;
                    for(int i = 0; i < filePathList.size() - 1; ++i)
                        absDirList.append(filePathList[i]);

                    newArg.replace("{ABSOLUTE_DIR}", absDirList.join("\\"));
                }
                if(cap.contains("FILE_PATH_ABS")) {
                    newArg.replace("{FILE_PATH_ABS}", filePath);
                }
                if(cap.contains("FILE_PATH_ABS_NO_EXT")) {
                    newArg.replace("{FILE_PATH_ABS_NO_EXT}", filePath.split(".").first());
                }
                if(cap.contains("FILE_PATH_REL")) {
                    QStringList wdir = _rule->workingDirectory.split("\\",
                                                                     QString::SkipEmptyParts);
                    QStringList relFilePathList;
                    for(int i = wdir.size(); i < filePathList.size(); ++i)
                        relFilePathList.append(filePathList[i]);

                    newArg.replace("{FILE_PATH_REL}", relFilePathList.join("\\"));
                }
                if(cap.contains("FILE_PATH_REL_NO_EXT")) {
                    int wdir_size = _rule->workingDirectory.split("\\",
                                                                  QString::SkipEmptyParts).size();
                    QStringList relFilePathList;
                    for(int i = wdir_size; i < filePathList.size(); ++i)
                        relFilePathList.append(filePathList[i]);

                    newArg.replace("{FILE_PATH_REL_NO_EXT}", relFilePathList.join("\\")
                                   .split(".")
                                   .first());
                }
                if(cap.contains("FILE_NAME")) {
                    newArg.replace("{FILE_NAME}", filePathList.last());
                }
                if(cap.contains("FILE_NAME_NO_EXT")) {
                    newArg.replace("{FILE_NAME_NO_EXT}",
                                   filePathList.last().split(".").first());
                }
                if(cap.contains("ABSOLUTE_DIR_LEVEL_")) {
                    int level = cap.split("_", QString::SkipEmptyParts).last().toInt();
                    QStringList newPath;
                    for(int i = 0; i < filePathList.size() - level; ++i) {
                        newPath.append(filePathList[i]);
                    }

                    newArg.replace(QString("{") + cap + QString("}"),
                                   newPath.join("\\"));
                }
                if(cap.contains("RELATIVE_DIR_LEVEL_")) {

                    int level = cap.split("_", QString::SkipEmptyParts).last().toInt();
                    int wdir_size = _rule->workingDirectory.split("\\",
                                                                  QString::SkipEmptyParts).size();
                    QStringList relDirList;
                    for(int i = wdir_size; i < filePathList.size() - level; ++i)
                        relDirList.append(filePathList[i]);

                    newArg.replace(QString("{") + cap + QString("}"),
                                   relDirList.join("\\"));
                }
            }
        }

        ret.append(newArg);
    }

    /*qDebug("Corrected arguments are ");
    Q_FOREACH(auto arg, ret) {
        qDebug("%s", arg.toUtf8().constData());
    }*/

    return ret;
}

void Watcher::executeCommand(QString &cmd, QStringList &args) {

    /*QObject::connect(_pr.get(), static_cast<void (QProcess::*)(int)>(&QProcess::finished),
                     [](int exitCode){ qDebug("Finished"); });

    _pr->start(cmd, args);*/

    QProcess::execute(cmd, args);
    //delete pr;
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
