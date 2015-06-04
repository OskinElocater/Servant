#include "rule.h"

int Rule::rules_count = 0;

Rule::Rule(int ruleId,
           QString &ruleName,
           QString &wdir,
           QStringList &dirFilters,
           QStringList &fileFilters,
           QString &cmd,
           QStringList &args):
    id(ruleId),
    name(ruleName),
    workingDirectory(wdir),
    directoryFilters(dirFilters),
    fileFilters(fileFilters),
    command(cmd),
    arguments(args)
{
    if(id == -1)
        id = Rule::rules_count++;
    else
        Rule::rules_count++;
}

Rule::Rule(const Rule &r):
    id(r.id),
    name(r.name),
    workingDirectory(r.workingDirectory),
    directoryFilters(r.directoryFilters),
    fileFilters(r.fileFilters),
    command(r.command),
    arguments(r.arguments)
{

}


Rule::~Rule() {
    rules_count--;
}
