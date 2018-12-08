QT += core testlib sql
QT -= gui

TARGET = UnitTests

VPATH = "../NFL_Teams_App"

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \ 
    tst_conferencepage.cpp \
    dbmanager.cpp \
    conferenceview.cpp \
    #mainwindow.cpp \
    tst_stadiumpage.cpp \
    maintest.cpp

HEADERS += \
    dbmanager.h \
    conferenceview.h \
    #mainwindow.h \
    tst_conferencepage.h \
    tst_stadiumpage.h
