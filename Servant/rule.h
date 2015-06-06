#ifndef RULE_H
#define RULE_H

#include <QString>
#include <QStringList>

struct Rule
{
public:
    Rule(int ruleId);

    Rule(QString &ruleName = QString("new rule"),
         QString &wdir = QString(""),
         QStringList &dirFilters = QStringList(""),
         QStringList &fileFilters = QStringList(""),
         QString &cmd = QString(""),
         QStringList &args = QStringList(""));

    Rule(const Rule& r);

    ~Rule();

    Rule& operator=(const Rule& r);

    bool operator==(const Rule& r) {
        if(this->id == r.id &&
                this->name == r.name &&
                this->workingDirectory == r.workingDirectory &&
                this->directoryFilters == r.directoryFilters &&
                this->fileFilters == r.fileFilters &&
                this->command == r.command &&
                this->arguments == r.arguments)
            return true;
        else
            return false;
    }

    static int rules_count;
    int id;
    QString name;
    QString workingDirectory;
    QStringList directoryFilters;
    QStringList fileFilters;
    QString command;
    QStringList arguments;

};

#endif // RULE_H
