#-------------------------------------------------
#
# Project created by QtCreator 2017-06-26T11:22:10
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += axcontainer
QT       += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyProject
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    menudialog.cpp \
    apartwindow.cpp \
    Company.cpp \
    prowindow.cpp \
    empwindow.cpp \
    aptadddialog.cpp \
    proadddialog.cpp \
    empadddialog.cpp \
    conndlg.cpp \
    Apartment.cpp \
    Project.cpp \
    Employee.cpp

HEADERS  += mainwindow.h \
    menudialog.h \
    apartwindow.h \
    Company.h \
    prowindow.h \
    empwindow.h \
    aptadddialog.h \
    proadddialog.h \
    empadddialog.h \
    conndlg.h \
    Apartment.h \
    Project.h \
    Employee.h

FORMS    += mainwindow.ui \
    menudialog.ui \
    prowindow.ui \
    empwindow.ui \
    aptadddialog.ui \
    proadddialog.ui \
    empadddialog.ui

RESOURCES += \
    file.qrc
