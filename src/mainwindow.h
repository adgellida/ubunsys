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

    void on_updateReposButton_clicked();

    void on_upgradeButton_clicked();

    void on_upgradeReposButton_clicked();

    void on_dist_upgradeButton_clicked();

    void on_upgradeKernelButton_clicked();

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


private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
