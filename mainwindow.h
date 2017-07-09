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
//#include <Updater>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:



private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionAbout_triggered();

    void on_actionTutorial_triggered();

    void on_updateReposButton_clicked();

    void on_updateAndUpgradeButton_clicked();

    void on_upgradeReposButton_clicked();

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

    void on_unselectAllButton_clicked();

    void on_selectAllButton_clicked();

    void on_installSelectedPackagesButton_clicked();

    void on_uninstallSelectedPackagesButton_clicked();

    void on_loadSelectionButton_clicked();

    void on_saveSelectionButton_clicked();

    //void on_actionAbout_clicked();

    void on_upgradeLatestStableButton_clicked();

    void on_upgradeLatestDevButton_clicked();

    void on_installTemplatesButton_clicked();

    void on_doVisibleAsterisksButton_clicked();

    void on_doInvisibleAsterisksButton_clicked();

    void on_openSourcesListDButton_clicked();

    void on_enableHibernationButton_clicked();

    void on_disableHibernationButton_clicked();

    void on_enableSudoWithoutPassButton_clicked();

    void on_disableSudoWithoutPassButton_clicked();

    void on_openSudoersFileButton_clicked();

    void on_backupSudoersFileButton_clicked();

    void on_reduceTo5sShutdownTimeoutButton_clicked();

    void on_setToDefaults90sShutdownTimeoutButton_clicked();

    void on_enableFirewallButton_clicked();

    void on_disableFirewallButton_clicked();

    void on_updateScriptsButton_clicked();

    void on_updateAppButton_clicked();

    void on_importSudoersFileButton_clicked();

    void on_installMainlineKernel_clicked();

    void on_runGrubcustomizerButton_clicked();

    void on_enableLockScreenlButton_clicked();

    void on_disableLockScrennButton_clicked();

    void on_showHiddenStartupItemsButton_clicked();

    void on_unshowHiddenStartupItemsButton_clicked();

    void on_enableLoginSoundButton_clicked();

    void on_disableLoginSoundButton_clicked();

    void on_openSudoersUbunsysModButton_clicked();

    void on_aptselect_US_clicked();

    void on_aptselect_ES_clicked();

    void on_openSourcesListButton_clicked();

    void on_backupSourcesListButton_clicked();

    void on_importSourcesListButton_clicked();

    void on_openMainBackupButton_clicked();

    void on_openMainRestoreButton_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
