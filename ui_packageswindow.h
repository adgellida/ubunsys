/********************************************************************************
** Form generated from reading UI file 'packageswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKAGESWINDOW_H
#define UI_PACKAGESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PackagesWindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PackagesWindow)
    {
        if (PackagesWindow->objectName().isEmpty())
            PackagesWindow->setObjectName(QStringLiteral("PackagesWindow"));
        PackagesWindow->resize(800, 600);
        menubar = new QMenuBar(PackagesWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        PackagesWindow->setMenuBar(menubar);
        centralwidget = new QWidget(PackagesWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        PackagesWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(PackagesWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        PackagesWindow->setStatusBar(statusbar);

        retranslateUi(PackagesWindow);

        QMetaObject::connectSlotsByName(PackagesWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PackagesWindow)
    {
        PackagesWindow->setWindowTitle(QApplication::translate("PackagesWindow", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PackagesWindow: public Ui_PackagesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKAGESWINDOW_H
