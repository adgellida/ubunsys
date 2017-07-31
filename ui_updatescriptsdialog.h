/********************************************************************************
** Form generated from reading UI file 'updatescriptsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATESCRIPTSDIALOG_H
#define UI_UPDATESCRIPTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_UpdateScriptsDialog
{
public:
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QStatusBar *statusBar;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *UpdateScriptsDialog)
    {
        if (UpdateScriptsDialog->objectName().isEmpty())
            UpdateScriptsDialog->setObjectName(QStringLiteral("UpdateScriptsDialog"));
        UpdateScriptsDialog->resize(474, 220);
        progressBar = new QProgressBar(UpdateScriptsDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(130, 30, 201, 23));
        progressBar->setValue(0);
        pushButton = new QPushButton(UpdateScriptsDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 70, 80, 22));
        statusBar = new QStatusBar(UpdateScriptsDialog);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(true);
        statusBar->setGeometry(QRect(0, 200, 471, 21));
        textBrowser = new QTextBrowser(UpdateScriptsDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 110, 451, 71));

        retranslateUi(UpdateScriptsDialog);

        QMetaObject::connectSlotsByName(UpdateScriptsDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateScriptsDialog)
    {
        UpdateScriptsDialog->setWindowTitle(QApplication::translate("UpdateScriptsDialog", "Manual check if scripts update is required...", 0));
        pushButton->setText(QApplication::translate("UpdateScriptsDialog", "Check", 0));
    } // retranslateUi

};

namespace Ui {
    class UpdateScriptsDialog: public Ui_UpdateScriptsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATESCRIPTSDIALOG_H
