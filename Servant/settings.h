#ifndef SETTINGS_H
#define SETTINGS_H

#include <memory>

#include "rule.h"

#include <QDialog>
#include <QListWidget>
#include <QListWidgetItem>

using std::shared_ptr;
using std::make_shared;

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

    QVector<shared_ptr<Rule>> getRules() { return _rules; }
    shared_ptr<Rule> getRuleById(int id) { return _rules[id]; }

signals:
    void rulesUpdated(QVector<shared_ptr<Rule>> rules);

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

    void on_listWidget_itemChanged(QListWidgetItem *item);

private:

    shared_ptr<Rule> _currentRule;
    QVector<shared_ptr<Rule>> _rules;

    bool _isEditing{false};
    bool _wereRulesUpdated{false};

    Ui::Settings *ui;
};

#endif // SETTINGS_H
