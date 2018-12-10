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
    maintest.cpp \
    tst_graph.cpp

HEADERS += \
    dbmanager.h \
    conferenceview.h \
    graph.h \
    tst_conferencepage.h \
    tst_graph.h
