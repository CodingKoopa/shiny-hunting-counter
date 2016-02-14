#-------------------------------------------------
#
# Project created by QtCreator 2016-02-07T15:05:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Shiny-Pokemon-Counter
TEMPLATE = app

QMAKE_CXXFLAGS += -Wno-unused-variable
QMAKE_CXXFLAGS += -Wno-unused-parameter
                                             ^
SOURCES += main.cpp\
    gradient.cpp \
    textpos.cpp \
    font.cpp \
    outline.cpp \
    about.cpp \
    encounter.cpp \
    solid.cpp \
    counter.cpp

HEADERS  += \
    gradient.h \
    about.h \
    counter.h

FORMS    += \
    about.ui \
    counter.ui

DISTFILES +=

RESOURCES += \
    resources.qrc

RC_FILE = icon.rc
