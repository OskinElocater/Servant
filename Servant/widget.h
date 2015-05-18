#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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

private slots:
    void on_inputDir_editingFinished();
    void on_inputExt_editingFinished();
    void on_inputCmd_editingFinished();

signals:
    void dir_changed(QString &dir);
    void ext_changed(QString &ext);
    void cmd_changed(QString &cmd);

private:
    Ui::Widget *ui;  
};

#endif // WIDGET_H
