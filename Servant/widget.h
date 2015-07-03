#ifndef WIDGET_H
#define WIDGET_H

#include <memory>

#include <QWidget>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QDir>

#include "settings.h"

using std::shared_ptr;

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
    void fileChanged(QString &ruleName, const QString &path);
    void directoryChanged(const QString &path);
    void onRulesUpdated(QVector<shared_ptr<Rule> > rules);
    void outputMessage(const QString& msg);

private slots:
    void on_btn_settings_clicked();

    void on_btn_start_clicked();

    void on_btn_stop_clicked();

signals:
    void rulesUpdated(QVector<shared_ptr<Rule>> rules);
    void stopWatching();

private:
    void updateTreeWidgetWithPath(QString &path, QTreeWidgetItem *parent);
    void addItemInDir(QDir &dir, QTreeWidgetItem *parent);

    //Settings& _settings;

    shared_ptr<Rule> _currentRule;

    Ui::Widget *ui;  
};

#endif // WIDGET_H
