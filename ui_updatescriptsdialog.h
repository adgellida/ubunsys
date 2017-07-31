/********************************************************************************
** Form generated from reading UI file 'updatescriptsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
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
        UpdateScriptsDialog->resize(494, 216);
        progressBar = new QProgressBar(UpdateScriptsDialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(140, 30, 201, 23));
        progressBar->setValue(0);
        pushButton = new QPushButton(UpdateScriptsDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 70, 80, 22));
        statusBar = new QStatusBar(UpdateScriptsDialog);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(true);
        statusBar->setGeometry(QRect(0, 190, 491, 21));
        textBrowser = new QTextBrowser(UpdateScriptsDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 110, 471, 71));

        retranslateUi(UpdateScriptsDialog);

        QMetaObject::connectSlotsByName(UpdateScriptsDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateScriptsDialog)
    {
        UpdateScriptsDialog->setWindowTitle(QApplication::translate("UpdateScriptsDialog", "Manual check if scripts update is required...", Q_NULLPTR));
        pushButton->setText(QApplication::translate("UpdateScriptsDialog", "Check", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UpdateScriptsDialog: public Ui_UpdateScriptsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATESCRIPTSDIALOG_H
