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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLineEdit *in_dirfs;
    QLabel *label_3;
    QLineEdit *in_filefs;
    QLineEdit *in_cmd;
    QLabel *label_5;
    QLineEdit *in_args;
    QLabel *label;
    QLineEdit *in_wdir;
    QToolButton *toolButton;
    QLabel *label_2;
    QLabel *label_4;
    QListWidget *listWidget;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_add_rule;
    QPushButton *btn_del_rule;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_apply;
    QPushButton *btn_ok;
    QPushButton *btn_cancel;
    QWidget *tab_2;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(622, 322);
        tabWidget = new QTabWidget(Settings);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 621, 321));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(180, 10, 431, 252));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        in_dirfs = new QLineEdit(layoutWidget);
        in_dirfs->setObjectName(QStringLiteral("in_dirfs"));

        gridLayout_2->addWidget(in_dirfs, 3, 0, 1, 2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        in_filefs = new QLineEdit(layoutWidget);
        in_filefs->setObjectName(QStringLiteral("in_filefs"));

        gridLayout_2->addWidget(in_filefs, 5, 0, 1, 2);

        in_cmd = new QLineEdit(layoutWidget);
        in_cmd->setObjectName(QStringLiteral("in_cmd"));

        gridLayout_2->addWidget(in_cmd, 7, 0, 1, 2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 8, 0, 1, 2);

        in_args = new QLineEdit(layoutWidget);
        in_args->setObjectName(QStringLiteral("in_args"));

        gridLayout_2->addWidget(in_args, 9, 0, 1, 2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        in_wdir = new QLineEdit(layoutWidget);
        in_wdir->setObjectName(QStringLiteral("in_wdir"));

        gridLayout_2->addWidget(in_wdir, 1, 0, 1, 1);

        toolButton = new QToolButton(layoutWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        gridLayout_2->addWidget(toolButton, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 6, 0, 1, 1);

        listWidget = new QListWidget(tab);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 161, 251));
        listWidget->setFrameShadow(QFrame::Sunken);
        listWidget->setDragDropOverwriteMode(true);
        listWidget->setSortingEnabled(false);
        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(8, 270, 601, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_add_rule = new QPushButton(layoutWidget1);
        btn_add_rule->setObjectName(QStringLiteral("btn_add_rule"));

        horizontalLayout->addWidget(btn_add_rule);

        btn_del_rule = new QPushButton(layoutWidget1);
        btn_del_rule->setObjectName(QStringLiteral("btn_del_rule"));

        horizontalLayout->addWidget(btn_del_rule);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_apply = new QPushButton(layoutWidget1);
        btn_apply->setObjectName(QStringLiteral("btn_apply"));

        horizontalLayout->addWidget(btn_apply);

        btn_ok = new QPushButton(layoutWidget1);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout->addWidget(btn_ok);

        btn_cancel = new QPushButton(layoutWidget1);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        horizontalLayout->addWidget(btn_cancel);

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
        in_dirfs->setText(QString());
        label_3->setText(QApplication::translate("Settings", "File filters (use wildcard format to specify filter, separate with \",\")", 0));
        in_filefs->setText(QString());
        in_cmd->setText(QString());
        label_5->setText(QApplication::translate("Settings", "Arguments (everything that is separated by whitespace counts as an argument!)", 0));
        in_args->setText(QString());
        label->setText(QApplication::translate("Settings", "Working directory", 0));
        toolButton->setText(QApplication::translate("Settings", "...", 0));
        label_2->setText(QApplication::translate("Settings", "Directory filters (only directories with these names will be watched, separate with \",\")", 0));
        label_4->setText(QApplication::translate("Settings", "Command (executed when file changes)", 0));
        btn_add_rule->setText(QApplication::translate("Settings", "Add", 0));
        btn_del_rule->setText(QApplication::translate("Settings", "Delete", 0));
        btn_apply->setText(QApplication::translate("Settings", "Apply", 0));
        btn_ok->setText(QApplication::translate("Settings", "OK", 0));
        btn_cancel->setText(QApplication::translate("Settings", "Cancel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Settings", "Rules", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Settings", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
