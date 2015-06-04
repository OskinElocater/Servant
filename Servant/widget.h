#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTreeWidget>
#include <QTreeWidgetItem>

#include "settings.h"

namespace Ui {
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void fileChanged(const QString &path);
    void directoryChanged(const QString &path);
    void onRuleUpdated(Rule &rule);
    void onRulesUpdated(QList<std::shared_ptr<Rule> > rules);

private slots:
    void on_btn_settings_clicked();

    void on_btn_start_clicked();

    void on_btn_stop_clicked();

signals:
    void rulesUpdated(QList<std::shared_ptr<Rule>> rules);
    void stopWatching();

private:
    void updateTreeWidgetWithRule(Rule &rule, QTreeWidgetItem *parent);
    void updateTreeWidgetWithRuleId(int &id, QTreeWidgetItem *parent);

    //Settings& _settings;

    Ui::Widget *ui;  
};

#endif // WIDGET_H
