#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////UPDATE APP & SCRIPTS ZONE///////////////////////

void MainWindow::on_updateScriptsButton_clicked()
{
    //######## PREPARING ENVIRONMENT

    //######## Update ubuntuScripts

    ui->statusBar->showMessage(tr("Updating latest scripts. Please wait"));

    system("xterm -e bash -c '"
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
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Downloaded latest scripts"));

    ui->statusBar->showMessage(tr("Download latest ubuntupackages script"));

    //######## Update ubuntupackages

    system("xterm -e bash -c '"
           "sudo ~/.ubunsys/downloads/ubuntuScripts-master/019.downloadLatestUbuntupackages"
           " && "
           "exit"
           "; exec bash'");

    //######## apt-fast checking

    ui->statusBar->showMessage(tr("Checking if apt-fast is installed and we install it if necessary"));

    system("xterm -e bash -c '"
           "echo Please wait"
           " && "
           "echo  "
           " && "
           "echo Checking if apt-fast installed to download more quick"
           " && "
           "sudo ~/.ubunsys/downloads/ubuntuScripts-master/020.check_apt-fast_installed"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("apt-fast is installed"));

    ui->statusBar->showMessage(tr("Installing packages"));

    //qDebug() << "test13";

    ui->statusBar->showMessage(tr("Latest scripts updated ok. Please select an action"));
}

void MainWindow::on_updateAppButton_clicked()
{
    ui->statusBar->showMessage(tr("Function not implemented yet. May be an update is present"));
}
