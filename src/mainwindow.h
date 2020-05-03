#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <QString>
#include <QFile>
#include <QtCore>
#include <QDebug>
#include <QSettings>
#include <packagesdialog.h>//////////
#include <preferencesdialog.h>//////////
#include <QSystemTrayIcon>
#include <QMenu>
#include <QVBoxLayout>
#include <QTextEdit>

namespace Ui {
class MainWindow;
}

class QSystemTrayIcon;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //######## CONSOLE
    QVBoxLayout *layout;
    QTextEdit *console;
    //########
    void initializeTrayIcon();
    void createFoldersFiles();
    void initializeDatabase();
    void showMessageAtInit();
    void initializeGUI();
    void initializeConsole();
    void checkUbunsysUpdate();
    void checkUserInSudoers();
    void showUpdateOutput();        //######## DISABLED

    //######## CHECK METHODS
    void checkAllStatus();
    void checkFirewallStatus();
    void checkHiddenStartupItemsStatus();
    void checkOfficialUpdateNotificationStatus();
    void checkSudoWithoutPassStatus();
    void checkAsterisksStatus();
    void checkUpdateAutoStatus();
    void checkHibernationStatus();
    void checkLockScreenStatus();
    void checkLoginSoundStatus();
    void checkaptfastInstalled();

public slots:

    //######## CONSOLE
    void add_text_completed();
    //########

    //void closePackagesDialog();///////////////
    void closePreferencesDialog();///////////////

    void iconActivated(QSystemTrayIcon::ActivationReason);///icon
    void trayIconClicked(QSystemTrayIcon::ActivationReason);///icon

private slots:

    //######## CONSOLE
    void get_data();
    //########

    void on_runScriptsManager_released();////////////
    void on_actionPreferences_triggered();////////////

    void on_actionNew_triggered();
    void on_actionOpen_triggered();
    void on_actionSave_triggered();
    void on_actionSave_as_triggered();
    void on_actionAbout_triggered();
    void on_actionTutorial_triggered();
    void on_updateAndUpgradeButton_clicked();
    void on_dist_upgradeButton_clicked();
    void on_cleanKernelsButton_clicked();
    void on_integrityCheckButton_clicked();
    void on_basicPackagesInstallButton_clicked();
    void on_cleanButton_clicked();
    void on_fixBrokenPackagesButton_1_clicked();
    void on_fixBrokenPackagesButton_2_clicked();
    void on_fixBrokenPackagesButton_3_clicked();
    void on_fixBrokenPackagesButton_4_clicked();
    void on_fixBrokenPackagesButton_5_clicked();
    void on_fixBrokenPackagesButton_6_clicked();
    void on_repairNetworkButton_clicked();
    void on_repairGPGKeys_clicked();
    void on_upgradeLatestStableButton_clicked();
    void on_upgradeLatestDevButton_clicked();
    void on_installTemplatesButton_clicked();
    void on_openSourcesListDButton_clicked();
    void on_enableSudoWithoutPassSpecificButton_clicked();
    void on_disableSudoWithoutPassSpecificButton_clicked();
    void on_openSudoersFileButton_clicked();
    void on_backupSudoersFileButton_clicked();

    //void on_actionAbout_clicked();
    //void on_updateScriptsButton_clicked();
    //void on_runUpdateDialog_clicked();

    void on_importSudoersFileButton_clicked();
    void on_installMainlineKernels_clicked();
    void on_runGrubcustomizerButton_clicked();
    void on_openSourcesListButton_clicked();
    void on_backupSourcesListButton_clicked();
    void on_importSourcesListButton_clicked();
    void on_openMainBackupButton_clicked();
    void on_openMainRestoreButton_clicked();
    void on_openSudoersDButton_clicked();
    void on_openRCLocalButton_clicked();
    void on_resetDconf_clicked();
    void on_unlock_var_lib_dpkg_lock_clicked();
    void on_openHostsButton_clicked();
    void on_actionSeeReleases_triggered();
    void on_actionUpdateApp_triggered();
    void on_actionDefaultUpdateUpgradePackages_triggered();
    void on_actionDefaultUpdateUpgradeSmartPackages_triggered();
    void on_actionTwitter_triggered();
    void on_openCronButton_clicked();
    void on_eraseCronButton_clicked();
    void on_checkBox_firewall_clicked(bool checked);
    void on_checkBoxOfficialUpdateNotification_clicked(bool checked);
    void on_checkBoxSudoWOPass_clicked(bool checked);
    void on_checkBoxAsterisks_clicked(bool checked);
    void on_checkBoxHibernation_clicked(bool checked);
    void on_checkBoxLockScreen_clicked(bool checked);
    void on_checkBoxHiddenStartupItems_clicked(bool checked);
    void on_checkBoxLoginSound_clicked(bool checked);
    void on_backupReposButton_clicked();
    void on_reenableReposButton_clicked();
    void on_restoreReposButton_clicked();
    void on_checkFirewallStatus_clicked();
    void on_goMouseRateCheckerButton_clicked();
    void on_editGrubButton_clicked();
    void on_updateGrubButton_clicked();
    void on_installInfinalityFontsButton_clicked();
    void on_uninstallInfinalityFontsButton_clicked();
    void on_comboBoxUpdate_currentIndexChanged(const QString &arg1);
    void on_runSyncTime_clicked();
    void on_listUpgradablePackagesButton_clicked();
    void on_listLatestInstalledPackagesButton_clicked();
    void on_actionCleanTerminal_triggered();
    void on_actionCleanSystem_triggered();
    void on_openBashRCButton_clicked();
    void closeEvent(QCloseEvent *event);

    void on_configAutologinButton_clicked();

private:
    Ui::MainWindow *ui;
    PackagesDialog *PackagesDialogUi;/////////////
    PreferencesDialog *PreferencesDialogUi;/////////////

//icon begin
    QSystemTrayIcon *trayIcon;
    QMenu* trayIconMenu;
    QMenu* createMenu();
//icon end

    //######## CONSOLE
    QProcess *process;
    //########

};

#endif // MAINWINDOW_H
