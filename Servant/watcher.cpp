#include "watcher.h"

#include <QDir>
#include <QProcess>

void Watcher::rulesUpdated(QList<std::shared_ptr<Rule>> rules) {
    qDebug("Watcher: Rules updated!");
    Q_FOREACH(auto& rule, rules) {
        qDebug("Updating rule named %s", rule->name.toUtf8().constData());
        /*addRuleRecursive(*rule);
        emit ruleUpdated(*rule);*/
    }
}

void Watcher::stopWatching() {
    removeAllPaths();
    _rules.clear();
}

void Watcher::on_dir_changed(const QString &path) {
    qDebug("DIR CHANGED!");
    QString p = path;
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
    args.append("-t");
    args.append("binary");
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

void Watcher::addRuleRecursive(Rule &rule) {
    QDir newDir(rule.workingDirectory);

    QStringList dirs = newDir.entryList(QDir::Filter::Dirs | QDir::Filter::NoDotAndDotDot);

    this->addPath(rule.workingDirectory);
    //qDebug(path.toUtf8().constData());

    Q_FOREACH(QString dir, dirs) {
        QString fullDir = QString("%1/%2").arg(rule.workingDirectory, dir.toUtf8().constData());
        Rule newRule(rule.id,
                     rule.name,
                     rule.workingDirectory,
                     rule.directoryFilters,
                     rule.fileFilters,
                     rule.command,
                     rule.arguments);
        addRuleRecursive(newRule);
    }

    QStringList filesToAdd;
    Q_FOREACH(QString filter, rule.directoryFilters)
    if(newDir.dirName() == filter) {
        Q_FOREACH(QString file,
                  newDir.entryList(rule.fileFilters,
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
        qDebug("Skipping %s", rule.workingDirectory.toUtf8().constData());
    else
       this->addPaths(filesToAdd);
}

/*void Watcher::addPathRecursive(QString &path) {
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

    if(filesToAdd.empty())
        qDebug("Skipping %s", path.toUtf8().constData());
    else
       this->addPaths(filesToAdd);
}*/

void Watcher::removeAllPaths() {
    Q_FOREACH(QString dir, this->directories())
        this->removePath(dir);

    Q_FOREACH(QString file, this->files())
        this->removePath(file);
}
