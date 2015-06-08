#include "rule.h"

int Rule::rules_count{0};

Rule::Rule(int ruleId):
    id(ruleId),
    name(QString("")),
    workingDirectory(QString("")),
    directoryFilters(QStringList("")),
    fileFilters(QStringList("")),
    command(QString("")),
    arguments(QStringList(""))
{
    //qDebug("Creating empty rule with id %i", id);
}

Rule::Rule(QString &ruleName,
           QString &wdir,
           QStringList &dirFilters,
           QStringList &fileFilters,
           QString &cmd,
           QStringList &args):
    id(rules_count++),
    name(ruleName),
    workingDirectory(wdir),
    directoryFilters(dirFilters),
    fileFilters(fileFilters),
    command(cmd),
    arguments(args)
{
    //qDebug("Creating new rule with id %i", id);
}

Rule::Rule(const Rule & r):
    id(r.id),
    name(r.name),
    workingDirectory(r.workingDirectory),
    directoryFilters(r.directoryFilters),
    fileFilters(r.fileFilters),
    command(r.command),
    arguments(r.arguments)
{
    //qDebug("Calling copy constructor for id %i", id);
}

Rule& Rule::operator=(const Rule& r) {
    //qDebug("Copying rule with id %i", id);
    Rule newRule(QString(r.name),
                 QString(r.workingDirectory),
                 QStringList(r.directoryFilters),
                 QStringList(r.fileFilters),
                 QString(r.command),
                 QStringList(r.arguments));
    newRule.id = r.id;
    rules_count--;

    return newRule;
}

Rule::~Rule() {    
    rules_count--;
    //qDebug("Destroying rule, new count is %i", rules_count);
}
