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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *dirLabel;
    QLineEdit *inputDir;
    QLabel *label;
    QLineEdit *inputExt;
    QHBoxLayout *horizontalLayout;
    QLabel *cmdLabel;
    QLineEdit *inputCmd;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *output;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(600, 460);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        dirLabel = new QLabel(Widget);
        dirLabel->setObjectName(QStringLiteral("dirLabel"));

        horizontalLayout_2->addWidget(dirLabel);

        inputDir = new QLineEdit(Widget);
        inputDir->setObjectName(QStringLiteral("inputDir"));
        inputDir->setMaxLength(32765);

        horizontalLayout_2->addWidget(inputDir);

        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        inputExt = new QLineEdit(Widget);
        inputExt->setObjectName(QStringLiteral("inputExt"));

        horizontalLayout_2->addWidget(inputExt);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cmdLabel = new QLabel(Widget);
        cmdLabel->setObjectName(QStringLiteral("cmdLabel"));

        horizontalLayout->addWidget(cmdLabel);

        inputCmd = new QLineEdit(Widget);
        inputCmd->setObjectName(QStringLiteral("inputCmd"));

        horizontalLayout->addWidget(inputCmd);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(Widget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 580, 384));
        horizontalLayout_3 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        output = new QTextEdit(scrollAreaWidgetContents);
        output->setObjectName(QStringLiteral("output"));
        output->setReadOnly(true);

        horizontalLayout_3->addWidget(output);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        dirLabel->setText(QApplication::translate("Widget", "Working Directory", 0));
        label->setText(QApplication::translate("Widget", "File extension", 0));
        cmdLabel->setText(QApplication::translate("Widget", "Command", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
