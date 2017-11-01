#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////SYSTEM TAB///////////////////////

//    Normal user

void MainWindow::on_updateAndUpgradeButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing default update & upgrade system. Then close the terminal window"));

    QProcess::startDetached("xterm -e \"sudo apt-fast -y update && sudo apt-fast -y upgrade && echo Close window if ok; exec bash\"");

    /*
    system("xterm -e '"
           "sudo apt-fast -y update"
           " && "
           "sudo apt-fast -y upgrade"
           "; exec bash'");
    */

    ui->statusBar->showMessage(tr("Default update & upgrade system did it successful. Now select another action"));
}

void MainWindow::on_updateReposButton_clicked()
{
    ui->statusBar->showMessage(tr("Updating repos. Then close the terminal window"));

    QProcess::startDetached("xterm -e \"sudo apt-fast -y update; exec bash\"");
/*
    system("xterm -e '"
           "sudo apt-fast -y update"
           "; exec bash'");
*/
    ui->statusBar->showMessage(tr("Repos updated succesful. Now select another action"));
}

void MainWindow::on_upgradeReposButton_clicked()
{
    ui->statusBar->showMessage(tr("Upgrading repos. Then close the terminal window"));

    QProcess::startDetached("xterm -e \"sudo apt-fast -y upgrade; exec bash\"");
/*
    system("xterm -e '"
           "sudo apt-fast -y upgrade"
           "; exec bash'");
*/
    ui->statusBar->showMessage(tr("Repos upgraded succesful. Now select another action"));
}

void MainWindow::on_basicPackagesInstallButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing normal user installation script. Then close the terminal window"));

    QProcess::startDetached("xterm -e \"cd ~/.ubunsys/downloads/ubuntupackages-master && sudo ~/.ubunsys/downloads/ubuntupackages-master/installpackages1-minimal; exec bash\"");
/*
    system("xterm -e '"
           "cd ~/.ubunsys/downloads/ubuntupackages-master"
           " && "
           "sudo ~/.ubunsys/downloads/ubuntupackages-master/installpackages1-minimal"
           "; exec bash'");
*/
    ui->statusBar->showMessage(tr("Script executed succesful. Now select another action"));
}

void MainWindow::on_cleanButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing system clean. Then close the terminal window"));

    QProcess::startDetached("xterm -e \"sudo apt-get -f install && sudo apt-get -y autoremove && sudo apt-get -y autoclean && sudo apt-get -y clean; exec bash\"");
/*
    system("xterm -e '"
           "sudo apt-get -f install"
           " && "
           "sudo apt-get -y autoremove"
           " && "
           "sudo apt-get -y autoclean"
           " && "
           "sudo apt-get -y clean"
           "; exec bash'");
*/
    ui->statusBar->showMessage(tr("System clean did it succesful. Now select another action"));
}

//    Advanced user

void MainWindow::on_dist_upgradeButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing smart system upgrade. Then close the terminal window"));

    QProcess::startDetached("xterm -e \"sudo apt-fast -y update && sudo apt-fast -y dist-upgrade; exec bash\"");
/*
    system("xterm -e '"
           "sudo apt-fast -y update"
           " && "
           "sudo apt-fast -y dist-upgrade"
           "; exec bash'");
*/
    ui->statusBar->showMessage(tr("Smart system upgrade did it succesful. Now select another action"));
}

void MainWindow::on_cleanKernelsButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing kernels clean. Then close the terminal window"));

    QProcess::startDetached("xterm -e \"sudo apt-get -y install byobu && sudo purge-old-kernels; exec bash\"");
/*
    system("xterm -e '"
           "sudo apt-get -y install byobu"
           " && "
           "sudo purge-old-kernels"
           "; exec bash'");
*/
    ui->statusBar->showMessage(tr("Kernels clean did it succesful. Now select another action"));
}

void MainWindow::on_upgradeLatestStableButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing upgrade to Latest Stable Version. Then close the terminal window"));

    QProcess::startDetached("xterm -e \"sudo do-release-upgrade; exec bash\"");

/*
    system("xterm -e '"
           "sudo do-release-upgrade"
           "; exec bash'");
*/

    ui->statusBar->showMessage(tr("Upgrade to Latest Stable Version did it succesful. Now select another action"));
}

void MainWindow::on_installMainlineKernels_clicked()
{
    ui->statusBar->showMessage(tr("Checking if ukuu is installed and we install it if necessary"));

    QProcess::startDetached("xterm -e \"sudo ~/.ubunsys/downloads/ubuntuScripts-master/034.check_ukuu_installed && ukuu-gtk; exec bash\"");
/*
    system("xterm -e '"
           "sudo ~/.ubunsys/downloads/ubuntuScripts-master/034.check_ukuu_installed"
           " && "
           "exit"
           "; exec bash'");
*/
    //ui->statusBar->showMessage(tr("Running ukuu..."));

    //QProcess::startDetached("ukuu-gtk");

    //system("ukuu-gtk &&");

    ui->statusBar->showMessage(tr("ukuu opened. Select another action."));
}

//    Developer

void MainWindow::on_upgradeLatestDevButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing upgrade to Latest Dev Version. Then close the terminal window"));

    QProcess::startDetached("xterm -e \"sudo do-release-upgrade -d; exec bash\"");
/*
    system("xterm -e '"
           "sudo do-release-upgrade -d"
           "; exec bash'");
*/
    ui->statusBar->showMessage(tr("Upgrade to Latest Dev Version did it succesful. Now select another action"));
}
