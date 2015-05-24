#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTreeWidget>
#include <QTreeWidgetItem>

namespace Ui {
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void initFields(QString &dir,
                    QStringList &dirFilters,
                    QStringList &fileFilters,
                    QString &cmd,
                    QStringList &args);

public slots:
    void fileChanged(const QString &path);
    void directoryChanged(const QString &path);
    void pathUpdated(QString &path);

private slots:
    void on_inputDir_editingFinished();
    void on_inputDirFilters_editingFinished();
    void on_inputFileFilters_editingFinished();
    void on_inputCmd_editingFinished();    
    void on_inputArg_editingFinished();
    void on_btn_settings_clicked();

signals:
    void dir_changed(QString &dir);
    void file_filters_changed(QStringList &filter);
    void dir_filters_changed(QStringList &filter);
    void cmd_changed(QString &cmd);
    void args_changed(QStringList &args);

private:
    void updateTreeWidget(QString &path, QTreeWidgetItem *parent);

    Ui::Widget *ui;  
};

#endif // WIDGET_H
