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
    QPushButton *checkButton;
    QStatusBar *statusBar;
    QTextBrowser *textBrowser;
    QPushButton *closeUpdateDialogButton;

    void setupUi(QDialog *UpdateScriptsDialog)
    {
        if (UpdateScriptsDialog->objectName().isEmpty())
            UpdateScriptsDialog->setObjectName(QStringLiteral("UpdateScriptsDialog"));
        UpdateScriptsDialog->resize(521, 216);
        progressBar = new QProgressBar(UpdateScriptsDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(160, 20, 201, 23));
        progressBar->setValue(0);
        checkButton = new QPushButton(UpdateScriptsDialog);
        checkButton->setObjectName(QStringLiteral("checkButton"));
        checkButton->setGeometry(QRect(160, 60, 80, 22));
        statusBar = new QStatusBar(UpdateScriptsDialog);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(true);
        statusBar->setGeometry(QRect(0, 190, 511, 21));
        textBrowser = new QTextBrowser(UpdateScriptsDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 90, 501, 101));
        closeUpdateDialogButton = new QPushButton(UpdateScriptsDialog);
        closeUpdateDialogButton->setObjectName(QStringLiteral("closeUpdateDialogButton"));
        closeUpdateDialogButton->setGeometry(QRect(280, 60, 80, 22));

        retranslateUi(UpdateScriptsDialog);

        QMetaObject::connectSlotsByName(UpdateScriptsDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateScriptsDialog)
    {
        UpdateScriptsDialog->setWindowTitle(QApplication::translate("UpdateScriptsDialog", "Manual check if scripts update is required...", 0));
        checkButton->setText(QApplication::translate("UpdateScriptsDialog", "Check", 0));
        closeUpdateDialogButton->setText(QApplication::translate("UpdateScriptsDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class UpdateScriptsDialog: public Ui_UpdateScriptsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATESCRIPTSDIALOG_H
