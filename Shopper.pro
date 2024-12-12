#-------------------------------------------------
#
# Project created by QtCreator 2018-10-17T10:36:44
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Shopper
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    add.cpp \
    newsale.cpp \
    add_supplier.cpp \
    del_dialog.cpp \
    edit_dialog.cpp \
    editsupp_dialog.cpp \
    del_supp_dialog.cpp \
    quan_dialog.cpp \
    newpurchase.cpp \
    errdialog.cpp \
    pur_dialog.cpp

HEADERS += \
        mainwindow.h \
    add.h \
    newsale.h \
    add_supplier.h \
    del_dialog.h \
    edit_dialog.h \
    editsupp_dialog.h \
    del_supp_dialog.h \
    quan_dialog.h \
    newpurchase.h \
    errdialog.h \
    pur_dialog.h

FORMS += \
        mainwindow.ui \
    adddialog.ui \
    newsale.ui \
    add_supplier.ui \
    del_dialog.ui \
    edit_dialog.ui \
    editsupp_dialog.ui \
    del_supp_dialog.ui \
    quan_dialog.ui \
    newpurchase.ui \
    errdialog.ui \
    pur_dialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
