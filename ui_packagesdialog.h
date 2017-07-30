/********************************************************************************
** Form generated from reading UI file 'packagesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKAGESDIALOG_H
#define UI_PACKAGESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PackagesDialog
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *runSavedScriptListButton;
    QPushButton *selectOfficialReposButton;
    QPushButton *exportListButton;
    QPushButton *selectUnofficialReposButton;
    QPushButton *runScriptButton;
    QTreeView *treeView;
    QPushButton *openInTextEditorButton;
    QLineEdit *txtFilter;
    QLabel *label;
    QPushButton *clearSelectionButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QDialog *PackagesDialog)
    {
        if (PackagesDialog->objectName().isEmpty())
            PackagesDialog->setObjectName(QStringLiteral("PackagesDialog"));
        PackagesDialog->resize(448, 672);
        centralWidget = new QWidget(PackagesDialog);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 441, 651));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        runSavedScriptListButton = new QPushButton(centralWidget);
        runSavedScriptListButton->setObjectName(QStringLiteral("runSavedScriptListButton"));

        gridLayout->addWidget(runSavedScriptListButton, 4, 0, 1, 1);

        selectOfficialReposButton = new QPushButton(centralWidget);
        selectOfficialReposButton->setObjectName(QStringLiteral("selectOfficialReposButton"));

        gridLayout->addWidget(selectOfficialReposButton, 3, 0, 1, 1);

        exportListButton = new QPushButton(centralWidget);
        exportListButton->setObjectName(QStringLiteral("exportListButton"));

        gridLayout->addWidget(exportListButton, 4, 1, 1, 1);

        selectUnofficialReposButton = new QPushButton(centralWidget);
        selectUnofficialReposButton->setObjectName(QStringLiteral("selectUnofficialReposButton"));

        gridLayout->addWidget(selectUnofficialReposButton, 3, 1, 1, 1);

        runScriptButton = new QPushButton(centralWidget);
        runScriptButton->setObjectName(QStringLiteral("runScriptButton"));

        gridLayout->addWidget(runScriptButton, 2, 0, 1, 1);

        treeView = new QTreeView(centralWidget);
        treeView->setObjectName(QStringLiteral("treeView"));

        gridLayout->addWidget(treeView, 0, 0, 1, 2);

        openInTextEditorButton = new QPushButton(centralWidget);
        openInTextEditorButton->setObjectName(QStringLiteral("openInTextEditorButton"));

        gridLayout->addWidget(openInTextEditorButton, 2, 1, 1, 1);

        txtFilter = new QLineEdit(centralWidget);
        txtFilter->setObjectName(QStringLiteral("txtFilter"));
        txtFilter->setEnabled(false);

        gridLayout->addWidget(txtFilter, 1, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);
        label->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        clearSelectionButton = new QPushButton(centralWidget);
        clearSelectionButton->setObjectName(QStringLiteral("clearSelectionButton"));

        gridLayout->addWidget(clearSelectionButton, 5, 1, 1, 1);

        menuBar = new QMenuBar(PackagesDialog);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(false);
        menuBar->setGeometry(QRect(0, 0, 441, 19));
        mainToolBar = new QToolBar(PackagesDialog);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setGeometry(QRect(0, 0, 8, 17));
        statusBar = new QStatusBar(PackagesDialog);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(true);
        statusBar->setGeometry(QRect(0, 650, 451, 21));

        retranslateUi(PackagesDialog);

        QMetaObject::connectSlotsByName(PackagesDialog);
    } // setupUi

    void retranslateUi(QDialog *PackagesDialog)
    {
        PackagesDialog->setWindowTitle(QApplication::translate("PackagesDialog", "Scripts Manager", Q_NULLPTR));
        PackagesDialog->setProperty("PackagesDialog", QVariant(QApplication::translate("PackagesDialog", "Dialog", Q_NULLPTR)));
        runSavedScriptListButton->setText(QApplication::translate("PackagesDialog", "Run saved script list", Q_NULLPTR));
        selectOfficialReposButton->setText(QApplication::translate("PackagesDialog", "Select only Official repos", Q_NULLPTR));
        exportListButton->setText(QApplication::translate("PackagesDialog", "Export list", Q_NULLPTR));
        selectUnofficialReposButton->setText(QApplication::translate("PackagesDialog", "Select only Unofficial repos", Q_NULLPTR));
        runScriptButton->setText(QApplication::translate("PackagesDialog", "Run script", Q_NULLPTR));
        openInTextEditorButton->setText(QApplication::translate("PackagesDialog", "Open in text editor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        txtFilter->setToolTip(QApplication::translate("PackagesDialog", "<html><head/><body><p>Search filter not implemented yet</p><p>Wait for future releases...</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("PackagesDialog", "<html><head/><body><p align=\"right\">Filter:</p></body></html>", Q_NULLPTR));
        clearSelectionButton->setText(QApplication::translate("PackagesDialog", "Clear selection", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PackagesDialog: public Ui_PackagesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKAGESDIALOG_H
