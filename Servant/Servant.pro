#-------------------------------------------------
#
# Project created by QtCreator 2015-05-16T18:50:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Servant
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    watcher.cpp \
    settings.cpp \
    rule.cpp \
    watchermanager.cpp

HEADERS  += widget.h \
    watcher.h \
    settings.h \
    ../rule.h \
    rule.h \
    settingsloader.h \
    watchermanager.h

FORMS    += widget.ui \
    settings.ui
