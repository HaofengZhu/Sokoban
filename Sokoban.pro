#-------------------------------------------------
#
# Project created by QtCreator 2017-08-02T11:31:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sokoban
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mappaint.cpp

HEADERS  += mainwindow.h \
    define.h \
    mappaint.h \
    ui_Sokoban.h

FORMS    += mainwindow.ui

RESOURCES += \
    myimages.qrc

DISTFILES += \
    images/start.jpg \
    images/box.png \
    images/goal.png \
    images/ground.png \
    images/man.png \
    images/wall.png \
    Map.txt

RC_ICONS=myico.ico

