/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionPaste;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionSave_as;
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPreferences;
    QAction *actionTutorial;
    QAction *actionEnglish;
    QAction *actionSpanish;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QTabWidget *tabWidget_2;
    QWidget *tab_11;
    QPushButton *runScriptsManager;
    QLabel *label_36;
    QWidget *tab_3;
    QTabWidget *tabWidget_3;
    QWidget *tab_6;
    QLabel *label_7;
    QPushButton *openSourcesListDButton;
    QPushButton *openSudoersFileButton;
    QPushButton *backupSudoersFileButton;
    QPushButton *importSudoersFileButton;
    QLabel *label_13;
    QPushButton *aptselect_US;
    QPushButton *aptselect_ES;
    QPushButton *importSourcesListButton;
    QPushButton *openSourcesListButton;
    QPushButton *backupSourcesListButton;
    QLabel *label_37;
    QPushButton *openMainRestoreButton;
    QPushButton *openMainBackupButton;
    QTextBrowser *textBrowser;
    QLabel *label_41;
    QWidget *tab_7;
    QPushButton *installTemplatesButton;
    QLabel *label_5;
    QLabel *label_11;
    QPushButton *setToDefaults90sShutdownTimeoutButton;
    QPushButton *reduceTo5sShutdownTimeoutButton;
    QLabel *label_33;
    QPushButton *disableLockScrennButton;
    QPushButton *enableLockScreenButton;
    QPushButton *showHiddenStartupItemsButton;
    QPushButton *unshowHiddenStartupItemsButton;
    QLabel *label_34;
    QLabel *label_35;
    QPushButton *enableLoginSoundButton;
    QPushButton *disableLoginSoundButton;
    QPushButton *enableFirewallButton;
    QLabel *label_12;
    QPushButton *disableFirewallButton;
    QLabel *label_32;
    QPushButton *runGrubcustomizerButton;
    QWidget *tab_16;
    QPushButton *doInvisibleAsterisksButton;
    QLabel *label_6;
    QPushButton *doVisibleAsterisksButton;
    QLabel *label_8;
    QPushButton *disableHibernationButton;
    QPushButton *enableHibernationButton;
    QWidget *tab_5;
    QPushButton *enableSudoWithoutPassAllButton;
    QPushButton *disableSudoWithoutPassAllButton;
    QLabel *label_10;
    QPushButton *disableSudoWithoutPassSpecificButton;
    QPushButton *enableSudoWithoutPassSpecificButton;
    QPushButton *openSudoersDButton;
    QWidget *tab;
    QTabWidget *tabWidget_4;
    QWidget *tab_8;
    QLabel *label_16;
    QPushButton *upgradeReposButton;
    QLabel *label_15;
    QPushButton *updateReposButton;
    QLabel *label_31;
    QLabel *label_14;
    QPushButton *basicPackagesInstallButton;
    QLabel *label_25;
    QPushButton *updateAndUpgradeButton;
    QPushButton *cleanButton;
    QWidget *tab_9;
    QLabel *label_60;
    QPushButton *cleanKernelsButton;
    QPushButton *dist_upgradeButton;
    QLabel *label_17;
    QLabel *label_59;
    QPushButton *upgradeLatestStableButton;
    QLabel *label_26;
    QPushButton *installMainlineKernel;
    QWidget *tab_10;
    QLabel *label_61;
    QPushButton *upgradeLatestDevButton;
    QWidget *tab_2;
    QTabWidget *tabWidget_5;
    QWidget *tab_13;
    QLabel *label_28;
    QLabel *label_2;
    QPushButton *integrityCheckButton;
    QLabel *label_18;
    QPushButton *repairNetworkButton;
    QLabel *label_30;
    QLabel *label_29;
    QPushButton *repairGPGKeys;
    QLabel *label_27;
    QLabel *label_9;
    QLabel *label_39;
    QLabel *label_40;
    QWidget *tab_14;
    QLabel *label_3;
    QLabel *label_22;
    QLabel *label_20;
    QPushButton *fixBrokenPackagesButton_1;
    QLabel *label_21;
    QPushButton *fixBrokenPackagesButton_2;
    QLabel *label_19;
    QPushButton *fixBrokenPackagesButton_3;
    QPushButton *fixBrokenPackagesButton_4;
    QLabel *label_24;
    QPushButton *fixBrokenPackagesButton_5;
    QPushButton *fixBrokenPackagesButton_6;
    QLabel *label_23;
    QLabel *label;
    QPushButton *updateAppButton;
    QPushButton *manualUpdateDialogButton;
    QPushButton *seeReleasesButton;
    QMenuBar *menuBar;
    QMenu *menuNuevo;
    QMenu *menuEdici_n;
    QMenu *menuAyuda;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(719, 521);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/ubunsys.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionPaste->setCheckable(false);
        actionPaste->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionSave_as->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon2);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionNew->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon3);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon4);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave->setEnabled(false);
        actionSave->setIcon(icon2);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionCopy->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCut->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon6);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionPreferences->setEnabled(false);
        actionTutorial = new QAction(MainWindow);
        actionTutorial->setObjectName(QStringLiteral("actionTutorial"));
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
        actionSpanish = new QAction(MainWindow);
        actionSpanish->setObjectName(QStringLiteral("actionSpanish"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 10, 701, 461));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget_2 = new QTabWidget(tab_4);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 691, 441));
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        runScriptsManager = new QPushButton(tab_11);
        runScriptsManager->setObjectName(QStringLiteral("runScriptsManager"));
        runScriptsManager->setGeometry(QRect(10, 30, 221, 36));
        runScriptsManager->setIconSize(QSize(30, 30));
        runScriptsManager->setCheckable(false);
        label_36 = new QLabel(tab_11);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(10, 10, 221, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_36->setFont(font);
        tabWidget_2->addTab(tab_11, QString());
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_3 = new QTabWidget(tab_3);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 691, 441));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        tabWidget_3->setFont(font1);
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_7 = new QLabel(tab_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 10, 141, 16));
        label_7->setFont(font);
        openSourcesListDButton = new QPushButton(tab_6);
        openSourcesListDButton->setObjectName(QStringLiteral("openSourcesListDButton"));
        openSourcesListDButton->setGeometry(QRect(10, 30, 221, 36));
        openSourcesListDButton->setIconSize(QSize(30, 30));
        openSourcesListDButton->setCheckable(false);
        openSudoersFileButton = new QPushButton(tab_6);
        openSudoersFileButton->setObjectName(QStringLiteral("openSudoersFileButton"));
        openSudoersFileButton->setGeometry(QRect(450, 30, 221, 36));
        openSudoersFileButton->setIconSize(QSize(30, 30));
        openSudoersFileButton->setCheckable(false);
        backupSudoersFileButton = new QPushButton(tab_6);
        backupSudoersFileButton->setObjectName(QStringLiteral("backupSudoersFileButton"));
        backupSudoersFileButton->setGeometry(QRect(450, 70, 221, 36));
        backupSudoersFileButton->setIconSize(QSize(30, 30));
        backupSudoersFileButton->setCheckable(false);
        importSudoersFileButton = new QPushButton(tab_6);
        importSudoersFileButton->setObjectName(QStringLiteral("importSudoersFileButton"));
        importSudoersFileButton->setGeometry(QRect(450, 110, 221, 36));
        importSudoersFileButton->setIconSize(QSize(30, 30));
        importSudoersFileButton->setCheckable(false);
        label_13 = new QLabel(tab_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(450, 10, 61, 16));
        label_13->setFont(font);
        aptselect_US = new QPushButton(tab_6);
        aptselect_US->setObjectName(QStringLiteral("aptselect_US"));
        aptselect_US->setGeometry(QRect(10, 70, 101, 36));
        aptselect_US->setIconSize(QSize(30, 30));
        aptselect_US->setCheckable(false);
        aptselect_ES = new QPushButton(tab_6);
        aptselect_ES->setObjectName(QStringLiteral("aptselect_ES"));
        aptselect_ES->setGeometry(QRect(130, 70, 101, 36));
        aptselect_ES->setIconSize(QSize(30, 30));
        aptselect_ES->setCheckable(false);
        importSourcesListButton = new QPushButton(tab_6);
        importSourcesListButton->setObjectName(QStringLiteral("importSourcesListButton"));
        importSourcesListButton->setGeometry(QRect(10, 190, 221, 36));
        importSourcesListButton->setIconSize(QSize(30, 30));
        importSourcesListButton->setCheckable(false);
        openSourcesListButton = new QPushButton(tab_6);
        openSourcesListButton->setObjectName(QStringLiteral("openSourcesListButton"));
        openSourcesListButton->setGeometry(QRect(10, 110, 221, 36));
        openSourcesListButton->setIconSize(QSize(30, 30));
        openSourcesListButton->setCheckable(false);
        backupSourcesListButton = new QPushButton(tab_6);
        backupSourcesListButton->setObjectName(QStringLiteral("backupSourcesListButton"));
        backupSourcesListButton->setGeometry(QRect(10, 150, 221, 36));
        backupSourcesListButton->setIconSize(QSize(30, 30));
        backupSourcesListButton->setCheckable(false);
        label_37 = new QLabel(tab_6);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(450, 160, 221, 16));
        label_37->setFont(font);
        openMainRestoreButton = new QPushButton(tab_6);
        openMainRestoreButton->setObjectName(QStringLiteral("openMainRestoreButton"));
        openMainRestoreButton->setGeometry(QRect(450, 220, 221, 36));
        openMainRestoreButton->setIconSize(QSize(30, 30));
        openMainRestoreButton->setCheckable(false);
        openMainBackupButton = new QPushButton(tab_6);
        openMainBackupButton->setObjectName(QStringLiteral("openMainBackupButton"));
        openMainBackupButton->setGeometry(QRect(450, 180, 221, 36));
        openMainBackupButton->setIconSize(QSize(30, 30));
        openMainBackupButton->setCheckable(false);
        textBrowser = new QTextBrowser(tab_6);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(170, 290, 501, 101));
        label_41 = new QLabel(tab_6);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(170, 270, 501, 16));
        label_41->setFont(font);
        tabWidget_3->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        installTemplatesButton = new QPushButton(tab_7);
        installTemplatesButton->setObjectName(QStringLiteral("installTemplatesButton"));
        installTemplatesButton->setGeometry(QRect(10, 30, 221, 36));
        installTemplatesButton->setIconSize(QSize(30, 30));
        installTemplatesButton->setCheckable(false);
        label_5 = new QLabel(tab_7);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 211, 16));
        label_5->setFont(font);
        label_11 = new QLabel(tab_7);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 70, 381, 41));
        label_11->setFont(font);
        setToDefaults90sShutdownTimeoutButton = new QPushButton(tab_7);
        setToDefaults90sShutdownTimeoutButton->setObjectName(QStringLiteral("setToDefaults90sShutdownTimeoutButton"));
        setToDefaults90sShutdownTimeoutButton->setEnabled(false);
        setToDefaults90sShutdownTimeoutButton->setGeometry(QRect(10, 150, 221, 36));
        setToDefaults90sShutdownTimeoutButton->setIconSize(QSize(30, 30));
        setToDefaults90sShutdownTimeoutButton->setCheckable(false);
        reduceTo5sShutdownTimeoutButton = new QPushButton(tab_7);
        reduceTo5sShutdownTimeoutButton->setObjectName(QStringLiteral("reduceTo5sShutdownTimeoutButton"));
        reduceTo5sShutdownTimeoutButton->setEnabled(false);
        reduceTo5sShutdownTimeoutButton->setGeometry(QRect(10, 110, 221, 36));
        reduceTo5sShutdownTimeoutButton->setIconSize(QSize(30, 30));
        reduceTo5sShutdownTimeoutButton->setCheckable(false);
        label_33 = new QLabel(tab_7);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(10, 200, 211, 16));
        label_33->setFont(font);
        disableLockScrennButton = new QPushButton(tab_7);
        disableLockScrennButton->setObjectName(QStringLiteral("disableLockScrennButton"));
        disableLockScrennButton->setGeometry(QRect(10, 260, 221, 36));
        disableLockScrennButton->setIconSize(QSize(30, 30));
        disableLockScrennButton->setCheckable(false);
        enableLockScreenButton = new QPushButton(tab_7);
        enableLockScreenButton->setObjectName(QStringLiteral("enableLockScreenButton"));
        enableLockScreenButton->setGeometry(QRect(10, 220, 221, 36));
        enableLockScreenButton->setIconSize(QSize(30, 30));
        enableLockScreenButton->setCheckable(false);
        showHiddenStartupItemsButton = new QPushButton(tab_7);
        showHiddenStartupItemsButton->setObjectName(QStringLiteral("showHiddenStartupItemsButton"));
        showHiddenStartupItemsButton->setGeometry(QRect(450, 30, 221, 36));
        showHiddenStartupItemsButton->setIconSize(QSize(30, 30));
        showHiddenStartupItemsButton->setCheckable(false);
        unshowHiddenStartupItemsButton = new QPushButton(tab_7);
        unshowHiddenStartupItemsButton->setObjectName(QStringLiteral("unshowHiddenStartupItemsButton"));
        unshowHiddenStartupItemsButton->setGeometry(QRect(450, 70, 221, 36));
        unshowHiddenStartupItemsButton->setIconSize(QSize(30, 30));
        unshowHiddenStartupItemsButton->setCheckable(false);
        label_34 = new QLabel(tab_7);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(450, 10, 231, 16));
        label_34->setFont(font);
        label_35 = new QLabel(tab_7);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(450, 120, 231, 16));
        label_35->setFont(font);
        enableLoginSoundButton = new QPushButton(tab_7);
        enableLoginSoundButton->setObjectName(QStringLiteral("enableLoginSoundButton"));
        enableLoginSoundButton->setGeometry(QRect(450, 140, 221, 36));
        enableLoginSoundButton->setIconSize(QSize(30, 30));
        enableLoginSoundButton->setCheckable(false);
        disableLoginSoundButton = new QPushButton(tab_7);
        disableLoginSoundButton->setObjectName(QStringLiteral("disableLoginSoundButton"));
        disableLoginSoundButton->setGeometry(QRect(450, 180, 221, 36));
        disableLoginSoundButton->setIconSize(QSize(30, 30));
        disableLoginSoundButton->setCheckable(false);
        enableFirewallButton = new QPushButton(tab_7);
        enableFirewallButton->setObjectName(QStringLiteral("enableFirewallButton"));
        enableFirewallButton->setGeometry(QRect(450, 240, 221, 36));
        enableFirewallButton->setIconSize(QSize(30, 30));
        enableFirewallButton->setCheckable(false);
        label_12 = new QLabel(tab_7);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(450, 220, 141, 16));
        label_12->setFont(font);
        disableFirewallButton = new QPushButton(tab_7);
        disableFirewallButton->setObjectName(QStringLiteral("disableFirewallButton"));
        disableFirewallButton->setGeometry(QRect(450, 280, 221, 36));
        disableFirewallButton->setIconSize(QSize(30, 30));
        disableFirewallButton->setCheckable(false);
        label_32 = new QLabel(tab_7);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(10, 310, 141, 16));
        label_32->setFont(font);
        runGrubcustomizerButton = new QPushButton(tab_7);
        runGrubcustomizerButton->setObjectName(QStringLiteral("runGrubcustomizerButton"));
        runGrubcustomizerButton->setGeometry(QRect(10, 330, 221, 36));
        runGrubcustomizerButton->setIconSize(QSize(30, 30));
        runGrubcustomizerButton->setCheckable(false);
        tabWidget_3->addTab(tab_7, QString());
        tab_16 = new QWidget();
        tab_16->setObjectName(QStringLiteral("tab_16"));
        doInvisibleAsterisksButton = new QPushButton(tab_16);
        doInvisibleAsterisksButton->setObjectName(QStringLiteral("doInvisibleAsterisksButton"));
        doInvisibleAsterisksButton->setGeometry(QRect(10, 70, 221, 36));
        doInvisibleAsterisksButton->setIconSize(QSize(30, 30));
        doInvisibleAsterisksButton->setCheckable(false);
        label_6 = new QLabel(tab_16);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 211, 16));
        label_6->setFont(font);
        doVisibleAsterisksButton = new QPushButton(tab_16);
        doVisibleAsterisksButton->setObjectName(QStringLiteral("doVisibleAsterisksButton"));
        doVisibleAsterisksButton->setGeometry(QRect(10, 30, 221, 36));
        doVisibleAsterisksButton->setIconSize(QSize(30, 30));
        doVisibleAsterisksButton->setCheckable(false);
        label_8 = new QLabel(tab_16);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 110, 141, 16));
        label_8->setFont(font);
        disableHibernationButton = new QPushButton(tab_16);
        disableHibernationButton->setObjectName(QStringLiteral("disableHibernationButton"));
        disableHibernationButton->setGeometry(QRect(10, 170, 221, 36));
        disableHibernationButton->setIconSize(QSize(30, 30));
        disableHibernationButton->setCheckable(false);
        enableHibernationButton = new QPushButton(tab_16);
        enableHibernationButton->setObjectName(QStringLiteral("enableHibernationButton"));
        enableHibernationButton->setGeometry(QRect(10, 130, 221, 36));
        enableHibernationButton->setIconSize(QSize(30, 30));
        enableHibernationButton->setCheckable(false);
        tabWidget_3->addTab(tab_16, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        enableSudoWithoutPassAllButton = new QPushButton(tab_5);
        enableSudoWithoutPassAllButton->setObjectName(QStringLiteral("enableSudoWithoutPassAllButton"));
        enableSudoWithoutPassAllButton->setGeometry(QRect(10, 30, 251, 36));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(239, 41, 41, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 147, 147, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(247, 94, 94, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 20, 20, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 27, 27, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(247, 148, 148, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        enableSudoWithoutPassAllButton->setPalette(palette);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        font2.setStyleStrategy(QFont::PreferDefault);
        enableSudoWithoutPassAllButton->setFont(font2);
        enableSudoWithoutPassAllButton->setIconSize(QSize(30, 30));
        enableSudoWithoutPassAllButton->setCheckable(false);
        disableSudoWithoutPassAllButton = new QPushButton(tab_5);
        disableSudoWithoutPassAllButton->setObjectName(QStringLiteral("disableSudoWithoutPassAllButton"));
        disableSudoWithoutPassAllButton->setGeometry(QRect(10, 70, 251, 36));
        disableSudoWithoutPassAllButton->setIconSize(QSize(30, 30));
        disableSudoWithoutPassAllButton->setCheckable(false);
        label_10 = new QLabel(tab_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 10, 221, 16));
        label_10->setFont(font);
        disableSudoWithoutPassSpecificButton = new QPushButton(tab_5);
        disableSudoWithoutPassSpecificButton->setObjectName(QStringLiteral("disableSudoWithoutPassSpecificButton"));
        disableSudoWithoutPassSpecificButton->setEnabled(true);
        disableSudoWithoutPassSpecificButton->setGeometry(QRect(10, 170, 251, 36));
        disableSudoWithoutPassSpecificButton->setIconSize(QSize(30, 30));
        disableSudoWithoutPassSpecificButton->setCheckable(false);
        enableSudoWithoutPassSpecificButton = new QPushButton(tab_5);
        enableSudoWithoutPassSpecificButton->setObjectName(QStringLiteral("enableSudoWithoutPassSpecificButton"));
        enableSudoWithoutPassSpecificButton->setEnabled(true);
        enableSudoWithoutPassSpecificButton->setGeometry(QRect(10, 130, 251, 36));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        font3.setStyleStrategy(QFont::PreferDefault);
        enableSudoWithoutPassSpecificButton->setFont(font3);
        enableSudoWithoutPassSpecificButton->setIconSize(QSize(30, 30));
        enableSudoWithoutPassSpecificButton->setCheckable(false);
        openSudoersDButton = new QPushButton(tab_5);
        openSudoersDButton->setObjectName(QStringLiteral("openSudoersDButton"));
        openSudoersDButton->setGeometry(QRect(10, 230, 221, 36));
        openSudoersDButton->setIconSize(QSize(30, 30));
        openSudoersDButton->setCheckable(false);
        tabWidget_3->addTab(tab_5, QString());
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_4 = new QTabWidget(tab);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(0, 0, 701, 431));
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        label_16 = new QLabel(tab_8);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(60, 220, 161, 21));
        label_16->setFont(font1);
        upgradeReposButton = new QPushButton(tab_8);
        upgradeReposButton->setObjectName(QStringLiteral("upgradeReposButton"));
        upgradeReposButton->setEnabled(true);
        upgradeReposButton->setGeometry(QRect(10, 110, 41, 36));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        upgradeReposButton->setIcon(icon7);
        upgradeReposButton->setIconSize(QSize(30, 30));
        upgradeReposButton->setCheckable(false);
        label_15 = new QLabel(tab_8);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(60, 20, 331, 20));
        label_15->setFont(font1);
        updateReposButton = new QPushButton(tab_8);
        updateReposButton->setObjectName(QStringLiteral("updateReposButton"));
        updateReposButton->setEnabled(true);
        updateReposButton->setGeometry(QRect(10, 60, 41, 36));
        updateReposButton->setIcon(icon7);
        updateReposButton->setIconSize(QSize(30, 30));
        updateReposButton->setCheckable(false);
        label_31 = new QLabel(tab_8);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(60, 120, 221, 21));
        label_31->setFont(font1);
        label_14 = new QLabel(tab_8);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(60, 70, 251, 21));
        label_14->setFont(font1);
        basicPackagesInstallButton = new QPushButton(tab_8);
        basicPackagesInstallButton->setObjectName(QStringLiteral("basicPackagesInstallButton"));
        basicPackagesInstallButton->setGeometry(QRect(10, 160, 41, 40));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/install.png"), QSize(), QIcon::Normal, QIcon::Off);
        basicPackagesInstallButton->setIcon(icon8);
        basicPackagesInstallButton->setIconSize(QSize(30, 30));
        basicPackagesInstallButton->setCheckable(false);
        label_25 = new QLabel(tab_8);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(60, 170, 351, 21));
        label_25->setFont(font1);
        updateAndUpgradeButton = new QPushButton(tab_8);
        updateAndUpgradeButton->setObjectName(QStringLiteral("updateAndUpgradeButton"));
        updateAndUpgradeButton->setGeometry(QRect(10, 10, 41, 36));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/upgrade.png"), QSize(), QIcon::Normal, QIcon::Off);
        updateAndUpgradeButton->setIcon(icon9);
        updateAndUpgradeButton->setIconSize(QSize(30, 30));
        updateAndUpgradeButton->setCheckable(false);
        cleanButton = new QPushButton(tab_8);
        cleanButton->setObjectName(QStringLiteral("cleanButton"));
        cleanButton->setGeometry(QRect(10, 210, 41, 36));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/images/escoba.png"), QSize(), QIcon::Normal, QIcon::Off);
        cleanButton->setIcon(icon10);
        cleanButton->setIconSize(QSize(30, 30));
        cleanButton->setCheckable(false);
        tabWidget_4->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_60 = new QLabel(tab_9);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(60, 120, 331, 21));
        label_60->setFont(font1);
        cleanKernelsButton = new QPushButton(tab_9);
        cleanKernelsButton->setObjectName(QStringLiteral("cleanKernelsButton"));
        cleanKernelsButton->setGeometry(QRect(10, 60, 41, 36));
        cleanKernelsButton->setIcon(icon10);
        cleanKernelsButton->setIconSize(QSize(30, 30));
        cleanKernelsButton->setCheckable(false);
        dist_upgradeButton = new QPushButton(tab_9);
        dist_upgradeButton->setObjectName(QStringLiteral("dist_upgradeButton"));
        dist_upgradeButton->setGeometry(QRect(10, 10, 41, 36));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/images/flecha_arriba.png"), QSize(), QIcon::Normal, QIcon::Off);
        dist_upgradeButton->setIcon(icon11);
        dist_upgradeButton->setIconSize(QSize(30, 30));
        dist_upgradeButton->setCheckable(false);
        label_17 = new QLabel(tab_9);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(60, 20, 231, 21));
        label_17->setFont(font1);
        label_59 = new QLabel(tab_9);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(60, 70, 231, 21));
        label_59->setFont(font1);
        upgradeLatestStableButton = new QPushButton(tab_9);
        upgradeLatestStableButton->setObjectName(QStringLiteral("upgradeLatestStableButton"));
        upgradeLatestStableButton->setGeometry(QRect(10, 110, 41, 36));
        upgradeLatestStableButton->setIcon(icon9);
        upgradeLatestStableButton->setIconSize(QSize(30, 30));
        upgradeLatestStableButton->setCheckable(false);
        label_26 = new QLabel(tab_9);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(350, 20, 231, 21));
        label_26->setFont(font1);
        installMainlineKernel = new QPushButton(tab_9);
        installMainlineKernel->setObjectName(QStringLiteral("installMainlineKernel"));
        installMainlineKernel->setGeometry(QRect(300, 10, 41, 36));
        installMainlineKernel->setIcon(icon11);
        installMainlineKernel->setIconSize(QSize(30, 30));
        installMainlineKernel->setCheckable(false);
        tabWidget_4->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        label_61 = new QLabel(tab_10);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setGeometry(QRect(60, 20, 311, 21));
        label_61->setFont(font1);
        upgradeLatestDevButton = new QPushButton(tab_10);
        upgradeLatestDevButton->setObjectName(QStringLiteral("upgradeLatestDevButton"));
        upgradeLatestDevButton->setGeometry(QRect(10, 10, 41, 36));
        upgradeLatestDevButton->setIcon(icon11);
        upgradeLatestDevButton->setIconSize(QSize(30, 30));
        upgradeLatestDevButton->setCheckable(false);
        tabWidget_4->addTab(tab_10, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_5 = new QTabWidget(tab_2);
        tabWidget_5->setObjectName(QStringLiteral("tabWidget_5"));
        tabWidget_5->setGeometry(QRect(0, 0, 691, 441));
        tab_13 = new QWidget();
        tab_13->setObjectName(QStringLiteral("tab_13"));
        label_28 = new QLabel(tab_13);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(60, 210, 171, 21));
        label_28->setFont(font1);
        label_2 = new QLabel(tab_13);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 331, 16));
        label_2->setFont(font);
        integrityCheckButton = new QPushButton(tab_13);
        integrityCheckButton->setObjectName(QStringLiteral("integrityCheckButton"));
        integrityCheckButton->setGeometry(QRect(10, 40, 40, 36));
        integrityCheckButton->setMaximumSize(QSize(40, 40));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/images/repair.png"), QSize(), QIcon::Normal, QIcon::Off);
        integrityCheckButton->setIcon(icon12);
        integrityCheckButton->setIconSize(QSize(30, 30));
        integrityCheckButton->setCheckable(false);
        label_18 = new QLabel(tab_13);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(60, 60, 141, 16));
        label_18->setFont(font1);
        repairNetworkButton = new QPushButton(tab_13);
        repairNetworkButton->setObjectName(QStringLiteral("repairNetworkButton"));
        repairNetworkButton->setGeometry(QRect(10, 120, 40, 36));
        repairNetworkButton->setMaximumSize(QSize(40, 40));
        repairNetworkButton->setIcon(icon12);
        repairNetworkButton->setIconSize(QSize(30, 30));
        repairNetworkButton->setCheckable(false);
        label_30 = new QLabel(tab_13);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(60, 40, 251, 16));
        label_30->setFont(font);
        label_29 = new QLabel(tab_13);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 180, 321, 16));
        label_29->setFont(font);
        repairGPGKeys = new QPushButton(tab_13);
        repairGPGKeys->setObjectName(QStringLiteral("repairGPGKeys"));
        repairGPGKeys->setGeometry(QRect(10, 200, 40, 36));
        repairGPGKeys->setMaximumSize(QSize(40, 40));
        repairGPGKeys->setIcon(icon12);
        repairGPGKeys->setIconSize(QSize(30, 30));
        repairGPGKeys->setCheckable(false);
        label_27 = new QLabel(tab_13);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(60, 130, 271, 16));
        label_27->setFont(font1);
        label_9 = new QLabel(tab_13);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 100, 111, 16));
        label_9->setFont(font);
        label_39 = new QLabel(tab_13);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(10, 270, 691, 61));
        label_39->setFont(font1);
        label_40 = new QLabel(tab_13);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(10, 250, 171, 16));
        label_40->setFont(font);
        tabWidget_5->addTab(tab_13, QString());
        tab_14 = new QWidget();
        tab_14->setObjectName(QStringLiteral("tab_14"));
        label_3 = new QLabel(tab_14);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 541, 16));
        label_3->setFont(font);
        label_22 = new QLabel(tab_14);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(60, 160, 491, 41));
        label_22->setFont(font1);
        label_20 = new QLabel(tab_14);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(60, 90, 251, 21));
        label_20->setFont(font1);
        fixBrokenPackagesButton_1 = new QPushButton(tab_14);
        fixBrokenPackagesButton_1->setObjectName(QStringLiteral("fixBrokenPackagesButton_1"));
        fixBrokenPackagesButton_1->setGeometry(QRect(10, 40, 40, 36));
        fixBrokenPackagesButton_1->setMaximumSize(QSize(40, 40));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/images/red-number-1.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        fixBrokenPackagesButton_1->setIcon(icon13);
        fixBrokenPackagesButton_1->setIconSize(QSize(30, 30));
        fixBrokenPackagesButton_1->setCheckable(false);
        label_21 = new QLabel(tab_14);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(60, 130, 321, 21));
        label_21->setFont(font1);
        fixBrokenPackagesButton_2 = new QPushButton(tab_14);
        fixBrokenPackagesButton_2->setObjectName(QStringLiteral("fixBrokenPackagesButton_2"));
        fixBrokenPackagesButton_2->setGeometry(QRect(10, 80, 40, 36));
        fixBrokenPackagesButton_2->setMaximumSize(QSize(40, 40));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/images/red-number-2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        fixBrokenPackagesButton_2->setIcon(icon14);
        fixBrokenPackagesButton_2->setIconSize(QSize(30, 30));
        fixBrokenPackagesButton_2->setCheckable(false);
        label_19 = new QLabel(tab_14);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(60, 50, 281, 16));
        label_19->setFont(font1);
        fixBrokenPackagesButton_3 = new QPushButton(tab_14);
        fixBrokenPackagesButton_3->setObjectName(QStringLiteral("fixBrokenPackagesButton_3"));
        fixBrokenPackagesButton_3->setGeometry(QRect(10, 120, 40, 36));
        fixBrokenPackagesButton_3->setMaximumSize(QSize(40, 40));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/images/red-number-3.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        fixBrokenPackagesButton_3->setIcon(icon15);
        fixBrokenPackagesButton_3->setIconSize(QSize(30, 30));
        fixBrokenPackagesButton_3->setCheckable(false);
        fixBrokenPackagesButton_4 = new QPushButton(tab_14);
        fixBrokenPackagesButton_4->setObjectName(QStringLiteral("fixBrokenPackagesButton_4"));
        fixBrokenPackagesButton_4->setGeometry(QRect(10, 160, 40, 36));
        fixBrokenPackagesButton_4->setMaximumSize(QSize(40, 40));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/images/red-number-4.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        fixBrokenPackagesButton_4->setIcon(icon16);
        fixBrokenPackagesButton_4->setIconSize(QSize(30, 30));
        fixBrokenPackagesButton_4->setCheckable(false);
        label_24 = new QLabel(tab_14);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(60, 240, 441, 40));
        label_24->setFont(font1);
        fixBrokenPackagesButton_5 = new QPushButton(tab_14);
        fixBrokenPackagesButton_5->setObjectName(QStringLiteral("fixBrokenPackagesButton_5"));
        fixBrokenPackagesButton_5->setGeometry(QRect(10, 200, 40, 36));
        fixBrokenPackagesButton_5->setMaximumSize(QSize(40, 40));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/images/red-number-5.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        fixBrokenPackagesButton_5->setIcon(icon17);
        fixBrokenPackagesButton_5->setIconSize(QSize(30, 30));
        fixBrokenPackagesButton_5->setCheckable(false);
        fixBrokenPackagesButton_6 = new QPushButton(tab_14);
        fixBrokenPackagesButton_6->setObjectName(QStringLiteral("fixBrokenPackagesButton_6"));
        fixBrokenPackagesButton_6->setGeometry(QRect(10, 240, 40, 36));
        fixBrokenPackagesButton_6->setMaximumSize(QSize(40, 40));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/images/red-number-6.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        fixBrokenPackagesButton_6->setIcon(icon18);
        fixBrokenPackagesButton_6->setIconSize(QSize(30, 30));
        fixBrokenPackagesButton_6->setCheckable(false);
        label_23 = new QLabel(tab_14);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(60, 210, 281, 21));
        label_23->setFont(font1);
        tabWidget_5->addTab(tab_14, QString());
        tabWidget->addTab(tab_2, QString());
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(620, 10, 90, 20));
        updateAppButton = new QPushButton(centralWidget);
        updateAppButton->setObjectName(QStringLiteral("updateAppButton"));
        updateAppButton->setGeometry(QRect(470, 10, 40, 23));
        updateAppButton->setIcon(icon11);
        manualUpdateDialogButton = new QPushButton(centralWidget);
        manualUpdateDialogButton->setObjectName(QStringLiteral("manualUpdateDialogButton"));
        manualUpdateDialogButton->setGeometry(QRect(520, 10, 40, 23));
        manualUpdateDialogButton->setIcon(icon9);
        seeReleasesButton = new QPushButton(centralWidget);
        seeReleasesButton->setObjectName(QStringLiteral("seeReleasesButton"));
        seeReleasesButton->setGeometry(QRect(420, 10, 40, 23));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/images/orange-up-24.png"), QSize(), QIcon::Normal, QIcon::Off);
        seeReleasesButton->setIcon(icon19);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 719, 22));
        menuNuevo = new QMenu(menuBar);
        menuNuevo->setObjectName(QStringLiteral("menuNuevo"));
        menuEdici_n = new QMenu(menuBar);
        menuEdici_n->setObjectName(QStringLiteral("menuEdici_n"));
        menuAyuda = new QMenu(menuBar);
        menuAyuda->setObjectName(QStringLiteral("menuAyuda"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuNuevo->menuAction());
        menuBar->addAction(menuEdici_n->menuAction());
        menuBar->addAction(menuAyuda->menuAction());
        menuNuevo->addSeparator();
        menuNuevo->addSeparator();
        menuNuevo->addAction(actionExit);
        menuEdici_n->addAction(actionPreferences);
        menuAyuda->addAction(actionTutorial);
        menuAyuda->addAction(actionAbout);
        menuAyuda->addAction(actionAbout_Qt);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(0);
        tabWidget_5->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ubunsys", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", 0));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as...", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0));
        actionCut->setIconText(QApplication::translate("MainWindow", "Cortar", 0));
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferences", 0));
        actionTutorial->setText(QApplication::translate("MainWindow", "Tutorial", 0));
        actionEnglish->setText(QApplication::translate("MainWindow", "English", 0));
        actionSpanish->setText(QApplication::translate("MainWindow", "Spanish", 0));
#ifndef QT_NO_WHATSTHIS
        runScriptsManager->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        runScriptsManager->setText(QApplication::translate("MainWindow", "Scripts manager", 0));
        runScriptsManager->setShortcut(QString());
        label_36->setText(QApplication::translate("MainWindow", "Managers", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QApplication::translate("MainWindow", "Packages 1/1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Packages", 0));
        label_7->setText(QApplication::translate("MainWindow", "Repositories", 0));
#ifndef QT_NO_WHATSTHIS
        openSourcesListDButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openSourcesListDButton->setText(QApplication::translate("MainWindow", "Open sources.list.d", 0));
        openSourcesListDButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        openSudoersFileButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openSudoersFileButton->setText(QApplication::translate("MainWindow", "Open default sudoers file", 0));
        openSudoersFileButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        backupSudoersFileButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        backupSudoersFileButton->setText(QApplication::translate("MainWindow", "Backup sudoers file", 0));
        backupSudoersFileButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        importSudoersFileButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        importSudoersFileButton->setText(QApplication::translate("MainWindow", "Import sudoers file", 0));
        importSudoersFileButton->setShortcut(QString());
        label_13->setText(QApplication::translate("MainWindow", "Sudoers", 0));
#ifndef QT_NO_WHATSTHIS
        aptselect_US->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        aptselect_US->setText(QApplication::translate("MainWindow", "apt-select US", 0));
        aptselect_US->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        aptselect_ES->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        aptselect_ES->setText(QApplication::translate("MainWindow", "apt-select ES", 0));
        aptselect_ES->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        importSourcesListButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        importSourcesListButton->setText(QApplication::translate("MainWindow", "Import sources.list", 0));
        importSourcesListButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        openSourcesListButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openSourcesListButton->setText(QApplication::translate("MainWindow", "Open sources.list", 0));
        openSourcesListButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        backupSourcesListButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        backupSourcesListButton->setText(QApplication::translate("MainWindow", "Backup sources.list", 0));
        backupSourcesListButton->setShortcut(QString());
        label_37->setText(QApplication::translate("MainWindow", "Main backup & restore", 0));
#ifndef QT_NO_WHATSTHIS
        openMainRestoreButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openMainRestoreButton->setText(QApplication::translate("MainWindow", "Main restore", 0));
        openMainRestoreButton->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        openMainBackupButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Files on Main backup:</p><p>sources.list</p><p>sudoers</p><p>templates</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        openMainBackupButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Each time you push, sources.list, sudoers and templates are copied on a folder, then you can restore them. This is ok if you want to return after crash.</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        openMainBackupButton->setText(QApplication::translate("MainWindow", "Main backup", 0));
        openMainBackupButton->setShortcut(QString());
        label_41->setText(QApplication::translate("MainWindow", "Log update scripts", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Tweaks 1/4", 0));
#ifndef QT_NO_WHATSTHIS
        installTemplatesButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        installTemplatesButton->setText(QApplication::translate("MainWindow", "Install Templates", 0));
        installTemplatesButton->setShortcut(QString());
        label_5->setText(QApplication::translate("MainWindow", "Documents & Files ", 0));
        label_11->setText(QApplication::translate("MainWindow", "Reduce timeout when shutdown\n"
"(experimental)", 0));
#ifndef QT_NO_WHATSTHIS
        setToDefaults90sShutdownTimeoutButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        setToDefaults90sShutdownTimeoutButton->setText(QApplication::translate("MainWindow", "Set to defaults 90s", 0));
        setToDefaults90sShutdownTimeoutButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        reduceTo5sShutdownTimeoutButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        reduceTo5sShutdownTimeoutButton->setText(QApplication::translate("MainWindow", "Reduce to 5s", 0));
        reduceTo5sShutdownTimeoutButton->setShortcut(QString());
        label_33->setText(QApplication::translate("MainWindow", "Lock screen", 0));
#ifndef QT_NO_WHATSTHIS
        disableLockScrennButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        disableLockScrennButton->setText(QApplication::translate("MainWindow", "Disable Lock screen", 0));
        disableLockScrennButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        enableLockScreenButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        enableLockScreenButton->setText(QApplication::translate("MainWindow", "Enable Lock screen", 0));
        enableLockScreenButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        showHiddenStartupItemsButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        showHiddenStartupItemsButton->setText(QApplication::translate("MainWindow", "Show", 0));
        showHiddenStartupItemsButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        unshowHiddenStartupItemsButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        unshowHiddenStartupItemsButton->setText(QApplication::translate("MainWindow", "Unshow", 0));
        unshowHiddenStartupItemsButton->setShortcut(QString());
        label_34->setText(QApplication::translate("MainWindow", "Hidden Startup Items", 0));
        label_35->setText(QApplication::translate("MainWindow", "Login sound", 0));
#ifndef QT_NO_WHATSTHIS
        enableLoginSoundButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        enableLoginSoundButton->setText(QApplication::translate("MainWindow", "Enable", 0));
        enableLoginSoundButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        disableLoginSoundButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        disableLoginSoundButton->setText(QApplication::translate("MainWindow", "Disable", 0));
        disableLoginSoundButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        enableFirewallButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        enableFirewallButton->setText(QApplication::translate("MainWindow", "Enable firewall", 0));
        enableFirewallButton->setShortcut(QString());
        label_12->setText(QApplication::translate("MainWindow", "Security", 0));
#ifndef QT_NO_WHATSTHIS
        disableFirewallButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        disableFirewallButton->setText(QApplication::translate("MainWindow", "Disable firewall", 0));
        disableFirewallButton->setShortcut(QString());
        label_32->setText(QApplication::translate("MainWindow", "Dual boot", 0));
#ifndef QT_NO_WHATSTHIS
        runGrubcustomizerButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>Launches grub-customizer</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        runGrubcustomizerButton->setText(QApplication::translate("MainWindow", "Configure", 0));
        runGrubcustomizerButton->setShortcut(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_7), QApplication::translate("MainWindow", "Tweaks 2/4", 0));
#ifndef QT_NO_WHATSTHIS
        doInvisibleAsterisksButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        doInvisibleAsterisksButton->setText(QApplication::translate("MainWindow", "Do invisible asterisks\n"
"Set to default", 0));
        doInvisibleAsterisksButton->setShortcut(QString());
        label_6->setText(QApplication::translate("MainWindow", "Terminal passwords", 0));
#ifndef QT_NO_WHATSTHIS
        doVisibleAsterisksButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        doVisibleAsterisksButton->setText(QApplication::translate("MainWindow", "Do visible asterisks", 0));
        doVisibleAsterisksButton->setShortcut(QString());
        label_8->setText(QApplication::translate("MainWindow", "Power", 0));
#ifndef QT_NO_WHATSTHIS
        disableHibernationButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        disableHibernationButton->setText(QApplication::translate("MainWindow", "Disable hibernation", 0));
        disableHibernationButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        enableHibernationButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        enableHibernationButton->setText(QApplication::translate("MainWindow", "Enable hibernation", 0));
        enableHibernationButton->setShortcut(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_16), QApplication::translate("MainWindow", "Tweaks 3/4", 0));
#ifndef QT_NO_TOOLTIP
        enableSudoWithoutPassAllButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:400;\">Dangerous!! Push only if you know what are you doing and disable this asap. Recommended only if you are using this app to not put all the time the pass.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        enableSudoWithoutPassAllButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        enableSudoWithoutPassAllButton->setText(QApplication::translate("MainWindow", "Enable sudo without pass all", 0));
        enableSudoWithoutPassAllButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        disableSudoWithoutPassAllButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        disableSudoWithoutPassAllButton->setText(QApplication::translate("MainWindow", "Disable sudo without pass all", 0));
        disableSudoWithoutPassAllButton->setShortcut(QString());
        label_10->setText(QApplication::translate("MainWindow", "Security & Passwords", 0));
#ifndef QT_NO_WHATSTHIS
        disableSudoWithoutPassSpecificButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        disableSudoWithoutPassSpecificButton->setText(QApplication::translate("MainWindow", "Disable sudo without pass specific", 0));
        disableSudoWithoutPassSpecificButton->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        enableSudoWithoutPassSpecificButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:400;\">Dangerous!! Push only if you know what are you doing and disable this asap. Recommended only if you are using this app to not put all the time the pass.</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        enableSudoWithoutPassSpecificButton->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        enableSudoWithoutPassSpecificButton->setText(QApplication::translate("MainWindow", "Enable sudo without pass specific", 0));
        enableSudoWithoutPassSpecificButton->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        openSudoersDButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        openSudoersDButton->setText(QApplication::translate("MainWindow", "Open sudoers.d", 0));
        openSudoersDButton->setShortcut(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("MainWindow", "Tweaks 4/4", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Tweaks", 0));
        label_16->setText(QApplication::translate("MainWindow", "Clean system", 0));
#ifndef QT_NO_TOOLTIP
        upgradeReposButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>apt-fast -y upgrade</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        upgradeReposButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        upgradeReposButton->setText(QString());
        upgradeReposButton->setShortcut(QString());
        label_15->setText(QApplication::translate("MainWindow", "Default update & upgrade packages", 0));
#ifndef QT_NO_TOOLTIP
        updateReposButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>apt-fast -y update</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        updateReposButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        updateReposButton->setText(QString());
        updateReposButton->setShortcut(QString());
        label_31->setText(QApplication::translate("MainWindow", "Upgrade repos", 0));
        label_14->setText(QApplication::translate("MainWindow", "Update repos", 0));
#ifndef QT_NO_TOOLTIP
        basicPackagesInstallButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>installpackages1-minimal of ubuntupackages on git for normal users</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        basicPackagesInstallButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        basicPackagesInstallButton->setText(QString());
        basicPackagesInstallButton->setShortcut(QString());
        label_25->setText(QApplication::translate("MainWindow", "Exec normal user installation script", 0));
#ifndef QT_NO_TOOLTIP
        updateAndUpgradeButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>apt-fast -y update</p><p>apt-fast -y upgrade</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        updateAndUpgradeButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        updateAndUpgradeButton->setText(QString());
        updateAndUpgradeButton->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        cleanButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>apt-fast -f install</p><p>apt-fast -y autoremove</p><p>apt-fast -y autoclean</p><p>apt-fast -y clean</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cleanButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        cleanButton->setText(QString());
        cleanButton->setShortcut(QString());
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_8), QApplication::translate("MainWindow", "Normal user", 0));
        label_60->setText(QApplication::translate("MainWindow", "Upgrade to latest stable", 0));
#ifndef QT_NO_TOOLTIP
        cleanKernelsButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Recover space from unused kernels</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cleanKernelsButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        cleanKernelsButton->setText(QString());
        cleanKernelsButton->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        dist_upgradeButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>apt-fast -y update</p><p>apt-fast -y dist-upgrade</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        dist_upgradeButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        dist_upgradeButton->setText(QString());
        dist_upgradeButton->setShortcut(QString());
        label_17->setText(QApplication::translate("MainWindow", "Smart packages update", 0));
        label_59->setText(QApplication::translate("MainWindow", "Clean ancient kernels", 0));
#ifndef QT_NO_TOOLTIP
        upgradeLatestStableButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>do-release-upgrade</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        upgradeLatestStableButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        upgradeLatestStableButton->setText(QString());
        upgradeLatestStableButton->setShortcut(QString());
        label_26->setText(QApplication::translate("MainWindow", "Install mainline kernel", 0));
#ifndef QT_NO_TOOLTIP
        installMainlineKernel->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Install latest kernel with ukuu</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        installMainlineKernel->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        installMainlineKernel->setText(QString());
        installMainlineKernel->setShortcut(QString());
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_9), QApplication::translate("MainWindow", "Advanced user", 0));
        label_61->setText(QApplication::translate("MainWindow", "Upgrade to latest dev", 0));
#ifndef QT_NO_TOOLTIP
        upgradeLatestDevButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>do-release-upgrade -d</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        upgradeLatestDevButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        upgradeLatestDevButton->setText(QString());
        upgradeLatestDevButton->setShortcut(QString());
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_10), QApplication::translate("MainWindow", "Developer", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "System", 0));
        label_28->setText(QApplication::translate("MainWindow", "sudo launchpad-getkeys", 0));
        label_2->setText(QApplication::translate("MainWindow", "Check system integrity", 0));
#ifndef QT_NO_WHATSTHIS
        integrityCheckButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        integrityCheckButton->setText(QString());
        integrityCheckButton->setShortcut(QString());
        label_18->setText(QApplication::translate("MainWindow", "shutdown -Fr now", 0));
#ifndef QT_NO_WHATSTHIS
        repairNetworkButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        repairNetworkButton->setText(QString());
        repairNetworkButton->setShortcut(QString());
        label_30->setText(QApplication::translate("MainWindow", "Be careful, your system will reboot", 0));
        label_29->setText(QApplication::translate("MainWindow", "Repair missing GPG keys", 0));
#ifndef QT_NO_WHATSTHIS
        repairGPGKeys->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        repairGPGKeys->setText(QString());
        repairGPGKeys->setShortcut(QString());
        label_27->setText(QApplication::translate("MainWindow", "sudo service network-manager restart", 0));
        label_9->setText(QApplication::translate("MainWindow", "Repair network", 0));
        label_39->setText(QApplication::translate("MainWindow", "If you lost \"sudo\" function try with \"pkexec\" to fix crashes.\n"
"Also you can enter in secure mode, exec \"mount -o remount,rw / \"\n"
"and restore that you want with elevated permissions.", 0));
        label_40->setText(QApplication::translate("MainWindow", "Repair tips", 0));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_13), QApplication::translate("MainWindow", "Repair  1/2", 0));
        label_3->setText(QApplication::translate("MainWindow", "Fix broken packages (click on each step and check if is solved)", 0));
        label_22->setText(QApplication::translate("MainWindow", "apt-fast -f install && apt-fast -y autoremove && apt-fast -y autoclean &&\n"
"apt-fast -y clean", 0));
        label_20->setText(QApplication::translate("MainWindow", "apt-fast -y --fix-broken install", 0));
#ifndef QT_NO_WHATSTHIS
        fixBrokenPackagesButton_1->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        fixBrokenPackagesButton_1->setText(QString());
        fixBrokenPackagesButton_1->setShortcut(QString());
        label_21->setText(QApplication::translate("MainWindow", "rm /var/lib/apt/lists/* -vf && apt-fast -y update", 0));
#ifndef QT_NO_WHATSTHIS
        fixBrokenPackagesButton_2->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        fixBrokenPackagesButton_2->setText(QString());
        fixBrokenPackagesButton_2->setShortcut(QString());
        label_19->setText(QApplication::translate("MainWindow", "apt-fast -y update && apt-fast -y upgrade", 0));
#ifndef QT_NO_WHATSTHIS
        fixBrokenPackagesButton_3->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        fixBrokenPackagesButton_3->setText(QString());
        fixBrokenPackagesButton_3->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        fixBrokenPackagesButton_4->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        fixBrokenPackagesButton_4->setText(QString());
        fixBrokenPackagesButton_4->setShortcut(QString());
        label_24->setText(QApplication::translate("MainWindow", "Open Ubuntu Software Center\n"
" & click repair if proceed", 0));
#ifndef QT_NO_WHATSTHIS
        fixBrokenPackagesButton_5->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        fixBrokenPackagesButton_5->setText(QString());
        fixBrokenPackagesButton_5->setShortcut(QString());
#ifndef QT_NO_WHATSTHIS
        fixBrokenPackagesButton_6->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        fixBrokenPackagesButton_6->setText(QString());
        fixBrokenPackagesButton_6->setShortcut(QString());
        label_23->setText(QApplication::translate("MainWindow", "dpkg --configure -a && apt-fast -y update", 0));
        tabWidget_5->setTabText(tabWidget_5->indexOf(tab_14), QApplication::translate("MainWindow", "Repair 2/2", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Repair", 0));
        label->setText(QApplication::translate("MainWindow", "v2017.08.07", 0));
#ifndef QT_NO_TOOLTIP
        updateAppButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Update program</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        updateAppButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        manualUpdateDialogButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Update scripts manually</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        manualUpdateDialogButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        seeReleasesButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>See releases</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        seeReleasesButton->setText(QString());
        menuNuevo->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdici_n->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuAyuda->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
