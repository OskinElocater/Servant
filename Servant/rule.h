#ifndef RULE_H
#define RULE_H

#include <QString>
#include <QStringList>

class Rule
{
public:
    Rule(QString &name = QString("rule %1").arg(Rule::id),
         QString &wdir = QString(""),
         QStringList &dirFilters = QStringList("*"),
         QStringList &fileFilters = QStringList("*.*"),
         QString &cmd = QString(""),
         QStringList &args = QStringList("")):
        _ruleName(name),
        _wDir(wdir),
        _dirFilters(dirFilters),
        _fileFilters(fileFilters),
        _command(cmd),
        _args(args) { id = Rule::id++; }
    ~Rule();

    void setName(QString &name) { _ruleName = name; }
    void setWorkingDirectory(QString &wdir) { _wDir = wdir; }
    void setDirectoryFilters(QStringList &dirFilters) { _dirFilters = dirFilters; }
    void setFileFilters(QStringList &fileFilters) { _fileFilters = fileFilters; }
    void setCommand(QString &cmd) { _command = cmd; }
    void setArguments(QStringList &args) { _args = args; }

    int getId() { return _id; }
    QString& getName() { return _ruleName; }
    QString& getWorkingDirectory() { return _wDir; }
    QStringList& getDirectoryFilters() { return _dirFilters; }
    QStringList& getFileFilters() { return _fileFilters; }
    QString& getCommand() { return _command; }
    QStringList& getArguments() { return _args; }

    static int id;

private:
    int _id{0};
    QString _ruleName;
    QString _wDir;
    QStringList _dirFilters;
    QStringList _fileFilters;
    QString _command;
    QStringList _args;
};

int Rule::id = 0;

#endif // RULE_H
