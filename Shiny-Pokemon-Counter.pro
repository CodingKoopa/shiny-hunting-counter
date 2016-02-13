#-------------------------------------------------
#
# Project created by QtCreator 2016-02-07T15:05:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Shiny-Pokemon-Counter
TEMPLATE = app

QMAKE_CXXFLAGS += -Wunused-parameter
                                             ^
SOURCES += main.cpp\
        counterwindow.cpp \
    gradient.cpp \
    textpos.cpp \
    font.cpp \
    outline.cpp \
    about.cpp \
    encounter.cpp \
    solid.cpp

HEADERS  += counterwindow.h \
    gradient.h \
    about.h

FORMS    += \
    about.ui \
    counterwindow.ui

DISTFILES +=

RESOURCES += \
    resources.qrc

RC_FILE = icon.rc
