#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////FIXES TAB///////////////////////
//http://www.upubuntu.com/2013/05/how-to-fix-broken-packages-using.html

void MainWindow::on_integrityCheckButton_clicked()
{
//  Reboots and checks integrity system

    process->start("sh", QStringList() << "-c" << "shutdown -Fr now");
}

void MainWindow::on_repairNetworkButton_clicked()
{
    process->start("sh", QStringList() << "-c" << "sudo service network-manager restart");
}

void MainWindow::on_repairGPGKeys_clicked()
{
    process->start("sh", QStringList() << "-c" << "~/.ubunsys/downloads/ubuntupackages-master/apps1/y-ppa-manager && sudo launchpad-getkeys && sudo apt-fast -y update");
}

void MainWindow::on_unlock_var_lib_dpkg_lock_clicked()
{
    process->start("sh", QStringList() << "-c" << "sudo ~/.ubunsys/downloads/ubuntuScripts-dev/058.dpkgLock");
}

void MainWindow::on_fixBrokenPackagesButton_1_clicked()
{
    on_updateAndUpgradeButton_clicked();
}

void MainWindow::on_fixBrokenPackagesButton_2_clicked()
{
    process->start("sh", QStringList() << "-c" << "sudo apt-fast -y --fix-broken install");
}

void MainWindow::on_fixBrokenPackagesButton_3_clicked()
{
    process->start("sh", QStringList() << "-c" << "sudo rm /var/lib/apt/lists/* -vf && sudo apt-fast -y update");
}

void MainWindow::on_fixBrokenPackagesButton_4_clicked()
{
    process->start("sh", QStringList() << "-c" << "sudo apt-fast -f install && sudo apt-fast -y autoremove && sudo apt-fast -y autoclean && sudo apt-fast -y clean");
}

void MainWindow::on_fixBrokenPackagesButton_5_clicked()
{
    process->start("sh", QStringList() << "-c" << "sudo dpkg --configure -a && sudo apt-fast -y update");
}

void MainWindow::on_fixBrokenPackagesButton_6_clicked()
{
    process->start("sh", QStringList() << "-c" << "echo Open Ubuntu Software Center and if prompted to repair broken packages, click simply the repair button");
}

void MainWindow::on_backupReposButton_clicked()
{
    process->start("sh", QStringList() << "-c" << "~/.ubunsys/downloads/ubuntuScripts-dev/077.backupReposUnsupportedReleases");
}

void MainWindow::on_reenableReposButton_clicked()
{
    process->start("sh", QStringList() << "-c" << "~/.ubunsys/downloads/ubuntuScripts-dev/078.re-enableReposUnsupportedReleases");
}

void MainWindow::on_restoreReposButton_clicked()
{
    process->start("sh", QStringList() << "-c" << "~/.ubunsys/downloads/ubuntuScripts-dev/079.restoreReposUnsupportedReleases");
}
