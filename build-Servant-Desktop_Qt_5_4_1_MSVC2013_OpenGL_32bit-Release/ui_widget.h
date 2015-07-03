/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTreeWidget *treeWidget;
    QPushButton *btn_settings;
    QTextEdit *output;
    QPushButton *btn_start;
    QPushButton *btn_stop;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(730, 607);
        treeWidget = new QTreeWidget(Widget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 10, 201, 591));
        treeWidget->setColumnCount(1);
        treeWidget->header()->setVisible(false);
        btn_settings = new QPushButton(Widget);
        btn_settings->setObjectName(QStringLiteral("btn_settings"));
        btn_settings->setGeometry(QRect(620, 580, 101, 23));
        output = new QTextEdit(Widget);
        output->setObjectName(QStringLiteral("output"));
        output->setGeometry(QRect(220, 10, 501, 551));
        output->setReadOnly(true);
        btn_start = new QPushButton(Widget);
        btn_start->setObjectName(QStringLiteral("btn_start"));
        btn_start->setGeometry(QRect(220, 570, 31, 31));
        btn_stop = new QPushButton(Widget);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));
        btn_stop->setGeometry(QRect(250, 570, 31, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        btn_settings->setText(QApplication::translate("Widget", "Rules and Settings", 0));
        btn_start->setText(QApplication::translate("Widget", "PushButton", 0));
        btn_stop->setText(QApplication::translate("Widget", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
