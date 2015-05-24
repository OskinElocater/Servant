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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *dirLabel;
    QLineEdit *inputDir;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *inputDirFilters;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *inputFileFilters;
    QHBoxLayout *horizontalLayout_5;
    QLabel *cmdLabel;
    QLineEdit *inputCmd;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *inputArg;
    QTreeWidget *treeWidget;
    QPushButton *btn_settings;
    QTextEdit *output;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1146, 607);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 701, 136));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dirLabel = new QLabel(layoutWidget);
        dirLabel->setObjectName(QStringLiteral("dirLabel"));

        horizontalLayout->addWidget(dirLabel);

        inputDir = new QLineEdit(layoutWidget);
        inputDir->setObjectName(QStringLiteral("inputDir"));
        inputDir->setMaxLength(32765);

        horizontalLayout->addWidget(inputDir);

        toolButton = new QToolButton(layoutWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout->addWidget(toolButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        inputDirFilters = new QLineEdit(layoutWidget);
        inputDirFilters->setObjectName(QStringLiteral("inputDirFilters"));

        horizontalLayout_2->addWidget(inputDirFilters);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        inputFileFilters = new QLineEdit(layoutWidget);
        inputFileFilters->setObjectName(QStringLiteral("inputFileFilters"));

        horizontalLayout_4->addWidget(inputFileFilters);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        cmdLabel = new QLabel(layoutWidget);
        cmdLabel->setObjectName(QStringLiteral("cmdLabel"));

        horizontalLayout_5->addWidget(cmdLabel);

        inputCmd = new QLineEdit(layoutWidget);
        inputCmd->setObjectName(QStringLiteral("inputCmd"));

        horizontalLayout_5->addWidget(inputCmd);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        inputArg = new QLineEdit(layoutWidget);
        inputArg->setObjectName(QStringLiteral("inputArg"));

        horizontalLayout_6->addWidget(inputArg);


        verticalLayout->addLayout(horizontalLayout_6);

        treeWidget = new QTreeWidget(Widget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(720, 10, 421, 591));
        btn_settings = new QPushButton(Widget);
        btn_settings->setObjectName(QStringLiteral("btn_settings"));
        btn_settings->setGeometry(QRect(10, 0, 101, 23));
        output = new QTextEdit(Widget);
        output->setObjectName(QStringLiteral("output"));
        output->setGeometry(QRect(10, 170, 701, 431));
        output->setReadOnly(true);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        dirLabel->setText(QApplication::translate("Widget", "Working Directory", 0));
        toolButton->setText(QApplication::translate("Widget", "...", 0));
        label_2->setText(QApplication::translate("Widget", "Directory filters", 0));
        label->setText(QApplication::translate("Widget", "File filters", 0));
        cmdLabel->setText(QApplication::translate("Widget", "Command", 0));
        label_3->setText(QApplication::translate("Widget", "Arguments", 0));
        btn_settings->setText(QApplication::translate("Widget", "Rules and Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
