#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>

///////////////////////UPDATE APP & SCRIPTS ZONE///////////////////////

void MainWindow::on_updateScriptsButton_clicked()
{
    //######## PREPARING ENVIRONMENT

    //######## Update ubuntuScripts

    ui->statusBar->showMessage(tr("Updating latest scripts. Please wait"));

    system("xterm -e bash -c '"
           "echo Updating latest scripts. Please wait... Stage 1/3"
           " && "
           "echo  "
           " && "
           //"sudo rm -Rf ~/.ubunsys"
           "sudo rm -Rf ~/.ubunsys/downloads"
           " && "
           "mkdir -p ~/.ubunsys/downloads"
           " && "
           "wget https://github.com/adgellida/ubuntuScripts/archive/master.zip -O ~/.ubunsys/downloads/master.zip"
           " && "
           "unzip ~/.ubunsys/downloads/master.zip -d ~/.ubunsys/downloads"
           " && "
           "sudo chmod 777 -R ~/.ubunsys/downloads/ubuntuScripts-master"
           " && "
           "rm ~/.ubunsys/downloads/master.zip"
           " && "
    //     "exit"
    //     "; exec bash'");

    //ui->statusBar->showMessage(tr("Downloaded latest scripts"));

    //ui->statusBar->showMessage(tr("Download latest ubuntupackages script"));

    //######## Update ubuntupackages

    //system("xterm -e bash -c '"
           "echo Updating ubuntupackages. Please wait... Stage 2/3"
           " && "
           "echo  "
           " && "
           "sudo ~/.ubunsys/downloads/ubuntuScripts-master/019.downloadLatestUbuntupackages"
           " && "
    //     "exit"
    //     "; exec bash'");

    //######## apt-fast checking

    // ui->statusBar->showMessage(tr("Checking if apt-fast is installed and we install it if necessary."));

    //system("xterm -e bash -c '"
           "echo Checking if apt-fast installed. Please wait...Stage 3/3"
           " && "
           "echo  "
           " && "
           "sudo ~/.ubunsys/downloads/ubuntuScripts-master/020.check_apt-fast_installed"
           " && "
           "exit"
           "; exec bash'");

    //ui->statusBar->showMessage(tr("apt-fast is installed"));

    //ui->statusBar->showMessage(tr("Installing packages"));

    //qDebug() << "test13";

    ui->statusBar->showMessage(tr("Latest scripts updated ok. Please select an action"));
}

void MainWindow::on_updateAppButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/adgellida/ubunsys/releases", QUrl::TolerantMode));
    ui->statusBar->showMessage(tr("For now launches to release page to update manually. Please wait."));
}
