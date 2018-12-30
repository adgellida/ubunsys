#-------------------------------------------------
#
# Project created by QtCreator 2014-12-17T12:13:28
#
# ubunsys
#
# Copyright (c) 2017 all rights reserved - GPL v2
# Antonio David Gellida Lavara - adgellida@gmail.com
# https://github.com/adgellida/ubunsys
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET    = ubunsys
TEMPLATE  = app

SOURCES  += main.cpp \
            mainwindow.cpp \
            toolbartab.cpp \
            repairtab.cpp \
            tweakstab.cpp \
            packagestab.cpp \
            about.cpp \
            tutorial.cpp \
            packagesdialog.cpp \
            rootfilesysproxymodel.cpp \
            updatescriptsdialog.cpp \
            preferencesdialog.cpp \
    updates.cpp \
    dbmanager.cpp

HEADERS  += mainwindow.h \
            packagesdialog.h \
            rootfilesysproxymodel.h \
            updatescriptsdialog.h \
            preferencesdialog.h \
    dbmanager.h

FORMS    += mainwindow.ui \
            packagesdialog.ui \
            updatescriptsdialog.ui \
            preferencesdialog.ui

RESOURCES += ubunsys.qrc \
             qdarkstyle/style.qrc
DISTFILES +=

TRANSLATIONS += languages/ubunsys_es_ES.ts

#FILES

#binary
target.path = /usr/bin

#icon
icon.path = /usr/share/icons/hicolor/256x256/apps
icon.files = $$PWD/images/ubunsys.png

#desktop shortcut
desktop.path = /usr/share/applications
desktop.files += ubunsys.desktop

#scripts
checkApt-fastInstallation.path = /usr/share/ubunsys/scripts
checkApt-fastInstallation.files = $$PWD/scripts/checkApt-fastInstallation.sh

checkUbunsys.path = /usr/share/ubunsys/scripts
checkUbunsys.files = $$PWD/scripts/checkUbunsys.sh

checkUpdateUbuntupackages.path = /usr/share/ubunsys/scripts
checkUpdateUbuntupackages.files = $$PWD/scripts/checkUpdateUbuntupackages.sh

checkUpdateUbuntuScripts.path = /usr/share/ubunsys/scripts
checkUpdateUbuntuScripts.files = $$PWD/scripts/checkUpdateUbuntuScripts.sh

installApt-fast.path = /usr/share/ubunsys/scripts
installApt-fast.files = $$PWD/scripts/installApt-fast.sh

updateForced.path = /usr/share/ubunsys/scripts
updateForced.files = $$PWD/scripts/updateForced.sh

INSTALLS += target desktop icon checkApt-fastInstallation checkUbunsys checkUpdateUbuntupackages checkUpdateUbuntuScripts installApt-fast updateForced
