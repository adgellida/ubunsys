#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>

///////////////////////UPDATE APP & SCRIPTS ZONE///////////////////////

void MainWindow::on_updateScriptsButton_clicked()
{
    //######## PREPARING ENVIRONMENT

    //######## Update ubuntuScripts

    ui->statusBar->showMessage(tr("Updating latest scripts. Please wait"));

    system("x-terminal-emulator -e bash -c '"
           "echo  "
           " && "
           "echo Trying to downloading and updating necessary files for ubunsys. Please wait... Stage 1/3"
           " && "
           " sleep 2"
           " && "
           "echo  "
           " && "
           "wget https://raw.githubusercontent.com/adgellida/ubuntuScripts/master/044.downloadLatestUbuntuscripts -O ~/.ubunsys/downloads/ubuntuScripts-master/044.downloadLatestUbuntuscripts && "
           "chmod 777 ~/.ubunsys/downloads/ubuntuScripts-master/044.downloadLatestUbuntuscripts && "
           "~/.ubunsys/downloads/ubuntuScripts-master/044.downloadLatestUbuntuscripts && "

    //######## Update ubuntupackages

           "echo Updating ubuntupackages. Please wait... Stage 2/3"
           " && "
           "echo  "
           " && "
           "~/.ubunsys/downloads/ubuntuScripts-master/019.downloadLatestUbuntupackages"
           " && "

    //######## apt-fast checking

           "echo Checking if apt-fast installed. Please wait...Stage 3/3"
           " && "
           "echo  "
           " && "
           "~/.ubunsys/downloads/ubuntuScripts-master/020.check_apt-fast_installed"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Latest scripts updated ok. Please select an action"));
}

void MainWindow::on_updateAppButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/adgellida/ubunsys/releases", QUrl::TolerantMode));
    ui->statusBar->showMessage(tr("For now launches to release page to update manually. Please wait."));
}
