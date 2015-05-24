/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_add_rule;
    QPushButton *btn_del_rule;
    QListWidget *listWidget;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *in_wdir;
    QToolButton *toolButton;
    QLabel *label_2;
    QLineEdit *in_dirfs;
    QLabel *label_3;
    QLineEdit *in_filefs;
    QLabel *label_4;
    QLineEdit *in_cmd;
    QLabel *label_5;
    QLineEdit *in_args;
    QWidget *tab_2;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(620, 281);
        tabWidget = new QTabWidget(Settings);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 621, 281));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 158, 241));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_add_rule = new QPushButton(widget);
        btn_add_rule->setObjectName(QStringLiteral("btn_add_rule"));

        gridLayout->addWidget(btn_add_rule, 0, 0, 1, 1);

        btn_del_rule = new QPushButton(widget);
        btn_del_rule->setObjectName(QStringLiteral("btn_del_rule"));

        gridLayout->addWidget(btn_del_rule, 0, 1, 1, 1);

        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 1, 0, 1, 2);

        widget1 = new QWidget(tab);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(180, 10, 431, 241));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        in_wdir = new QLineEdit(widget1);
        in_wdir->setObjectName(QStringLiteral("in_wdir"));

        gridLayout_2->addWidget(in_wdir, 1, 0, 1, 1);

        toolButton = new QToolButton(widget1);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        gridLayout_2->addWidget(toolButton, 1, 1, 1, 1);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 2);

        in_dirfs = new QLineEdit(widget1);
        in_dirfs->setObjectName(QStringLiteral("in_dirfs"));

        gridLayout_2->addWidget(in_dirfs, 3, 0, 1, 2);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        in_filefs = new QLineEdit(widget1);
        in_filefs->setObjectName(QStringLiteral("in_filefs"));

        gridLayout_2->addWidget(in_filefs, 5, 0, 1, 2);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 6, 0, 1, 1);

        in_cmd = new QLineEdit(widget1);
        in_cmd->setObjectName(QStringLiteral("in_cmd"));

        gridLayout_2->addWidget(in_cmd, 7, 0, 1, 2);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 8, 0, 1, 2);

        in_args = new QLineEdit(widget1);
        in_args->setObjectName(QStringLiteral("in_args"));

        gridLayout_2->addWidget(in_args, 9, 0, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(Settings);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Dialog", 0));
        btn_add_rule->setText(QApplication::translate("Settings", "Add", 0));
        btn_del_rule->setText(QApplication::translate("Settings", "Delete", 0));
        label->setText(QApplication::translate("Settings", "Working directory", 0));
        toolButton->setText(QApplication::translate("Settings", "...", 0));
        label_2->setText(QApplication::translate("Settings", "Directory filters (only directories with these names will be watched, separate with \",\")", 0));
        in_dirfs->setText(QString());
        label_3->setText(QApplication::translate("Settings", "File filters (use wildcard format to specify filter, separate with \",\")", 0));
        in_filefs->setText(QString());
        label_4->setText(QApplication::translate("Settings", "Command (executed when file changes)", 0));
        in_cmd->setText(QString());
        label_5->setText(QApplication::translate("Settings", "Arguments (everything that is separated by whitespace counts as an argument!)", 0));
        in_args->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Settings", "Rules", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Settings", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
