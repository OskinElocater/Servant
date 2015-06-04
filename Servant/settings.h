#ifndef SETTINGS_H
#define SETTINGS_H

#include <memory>

#include "rule.h"

#include <QDialog>
#include <QListWidget>
#include <QListWidgetItem>

using std::shared_ptr;
using std::make_shared;

typedef shared_ptr<Rule> RuleS;

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);

    ~Settings();    

    void init();

    QList<RuleS> getRules() { return _rules.values(); }
    Rule getRuleById(int id) { return *_rules[id]; }

signals:
    void rulesUpdated(QList<RuleS> rules);

private slots:

    void on_toolButton_clicked();

    // Buttons
    void on_btn_add_rule_clicked();

    void on_btn_del_rule_clicked();

    void on_btn_apply_clicked();

    void on_btn_cancel_clicked();

    void on_btn_ok_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    // Line edits
    void on_in_wdir_editingFinished();

    void on_in_dirfs_editingFinished();

    void on_in_filefs_editingFinished();

    void on_in_cmd_editingFinished();

    void on_in_args_editingFinished();

    // Item edits
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_listWidget_currentTextChanged(const QString &currentText);

private:

    RuleS _currentRule;
    QMap<int, RuleS> _rules;

    bool _wereRulesUpdated{false};

    Ui::Settings *ui;
};

#endif // SETTINGS_H
