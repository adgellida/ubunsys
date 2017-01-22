#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////SYSTEM TAB///////////////////////

//    Normal user

void MainWindow::on_updateReposButton_clicked()
{
    ui->statusBar->showMessage(tr("Updating repos. Then close the terminal window."));

    system("xterm -e bash -c '"
           "sudo apt-get -y update"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Repos updated succesful. Now select another action."));
}

void MainWindow::on_upgradeButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing default update system. Then close the terminal window."));

    system("xterm -e bash -c '"
           "sudo apt-get -y update"
           " && "
           "sudo apt-get -y upgrade"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Default update system did it successful. Now select another action."));
}

void MainWindow::on_upgradeReposButton_clicked()
{
    ui->statusBar->showMessage(tr("Upgrading repos. Then close the terminal window."));

    system("xterm -e bash -c '"
           "sudo apt-get -y upgrade"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Repos upgraded succesful. Now select another action."));
}

void MainWindow::on_basicPackagesInstallButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing normal user installation script. Then close the terminal window."));

    system("mkdir ~/.ubunsys");
    system("mkdir ~/.ubunsys/downloads");

    system("wget https://raw.githubusercontent.com/adgellida/ubuntupackages/master/installpackages1 -O ~/.ubunsys/downloads/installpackages1");

//    system("pkexec chmod 777 ~/.ubunsys/downloads/installpackages1");
    system("chmod +x ~/.ubunsys/downloads/installpackages1");

    system("xterm -e bash -c '"
           "sudo ~/.ubunsys/downloads/installpackages1"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Script executed succesful. Now select another action."));
}

void MainWindow::on_cleanButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing system clean. Then close the terminal window."));

    system("xterm -e bash -c '"
           "sudo apt-get -f install"
           " && "
           "sudo apt-get -y autoremove"
           " && "
           "sudo apt-get -y autoclean"
           " && "
           "sudo apt-get -y clean"
           "; exec bash'");

    ui->statusBar->showMessage(tr("System clean did it succesful. Now select another action."));
}

//    Advanced user

void MainWindow::on_dist_upgradeButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing smart system upgrade. Then close the terminal window."));

    system("xterm -e bash -c '"
           "apt-get -y update"
           " && "
           "apt-get dist-upgrade"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Smart system upgrade did it succesful. Now select another action."));
}

void MainWindow::on_upgradeKernelButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing mainline kernel update. Then close the terminal window."));

    system("mkdir ~/.ubunsys");
    system("mkdir ~/.ubunsys/downloads");

    system("wget https://raw.githubusercontent.com/adgellida/ubuntuScripts/master/kernel%20scripts/install%20latest%20kernel%20updates/medigeek-kmp-downloader -O ~/.ubunsys/downloads/medigeek-kmp-downloader");

//    system("pkexec chmod 777 ~/.ubunsys/downloads/medigeek-kmp-downloader");
    system("chmod +x ~/.ubunsys/downloads/medigeek-kmp-downloader");

    system("xterm -e bash -c '"
           "sudo ~/.ubunsys/downloads/medigeek-kmp-downloader"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Script executed succesful. Now select another action."));
}

void MainWindow::on_cleanKernelsButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing kernels clean. Then close the terminal window."));

    system("xterm -e bash -c '"
           "sudo apt-get -y install byobu"
           " && "
           "sudo purge-old-kernels"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Kernels clean did it succesful. Now select another action."));
}

void MainWindow::on_upgradeLatestStableButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing upgrade to Latest Stable Version. Then close the terminal window."));

    system("xterm -e bash -c '"
           "sudo sudo do-release-upgrade"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Upgrade to Latest Stable Version did it succesful. Now select another action."));
}


//    Developer

void MainWindow::on_upgradeLatestDevButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing upgrade to Latest Dev Version. Then close the terminal window."));

    system("xterm -e bash -c '"
           "sudo sudo do-release-upgrade -d"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Upgrade to Latest Dev Version did it succesful. Now select another action."));
}
