#ifndef RULE_H
#define RULE_H

#include <QString>
#include <QStringList>

struct Rule
{
public:
    Rule(const Rule& r):
        name(r.name),
        workingDirectory(r.workingDirectory),
        directoryFilters(r.directoryFilters),
        fileFilters(r.fileFilters),
        command(r.command),
        arguments(r.arguments)
    { }
    Rule(QString &ruleName = QString("new rule"),
         QString &wdir = QString(""),
         QStringList &dirFilters = QStringList(""),
         QStringList &fileFilters = QStringList(""),
         QString &cmd = QString(""),
         QStringList &args = QStringList("")):
        name(ruleName),
        workingDirectory(wdir),
        directoryFilters(dirFilters),
        fileFilters(fileFilters),
        command(cmd),
        arguments(args)
    { }
    ~Rule() {}

    bool operator==(const Rule& r) {
        if(this->name == r.name &&
                this->workingDirectory == r.workingDirectory &&
                this->directoryFilters == r.directoryFilters &&
                this->fileFilters == r.fileFilters &&
                this->command == r.command &&
                this->arguments == r.arguments)
            return true;
        else
            return false;
    }

    QString name;
    QString workingDirectory;
    QStringList directoryFilters;
    QStringList fileFilters;
    QString command;
    QStringList arguments;
};

#endif // RULE_H
