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

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET    = ubunsys
TEMPLATE  = app

SOURCES  += main.cpp \
            mainwindow.cpp \
            toolbartab.cpp \
            repairtab.cpp \
            systemtab.cpp \
            tweakstab.cpp \
            updatezone.cpp \
            packagestab.cpp \
            about.cpp \
            tutorial.cpp \
            packagesdialog.cpp \
            rootfilesysproxymodel.cpp \
            updatescriptsdialog.cpp

HEADERS  += mainwindow.h \
            packagesdialog.h \
            rootfilesysproxymodel.h \
            updatescriptsdialog.h

FORMS    += mainwindow.ui \
            packagesdialog.ui \
            updatescriptsdialog.ui

RESOURCES += ubunsys.qrc

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
apt-fastChecking.path = /usr/share/ubunsys
apt-fastChecking.files = $$PWD/scripts/apt-fastChecking.sh
updateUbuntupackages.path = /usr/share/ubunsys
updateUbuntupackages.files = $$PWD/scripts/updateUbuntupackages.sh
updateUbuntuScripts.path = /usr/share/ubunsys
updateUbuntuScripts.files = $$PWD/scripts/updateUbuntuScripts.sh
updateUbunsys.path = /usr/share/ubunsys
updateUbunsys.files = $$PWD/scripts/updateUbunsys.sh

INSTALLS += target desktop icon apt-fastChecking updateUbuntupackages updateUbuntuScripts updateUbunsys
