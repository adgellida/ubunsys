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
           "echo Trying to downloading and updating necessary files for ubunsys. Please wait... Stage 1/3"
           " && "
           "echo  "
           " && "
           "test -d ~/.ubunsys || mkdir -p ~/.ubunsys && test -d ~/.ubunsys/downloads || mkdir -p ~/.ubunsys/downloads && test -d ~/.ubunsys/downloads/ubuntuScripts-master || mkdir -p ~/.ubunsys/downloads/ubuntuScripts-master && wget https://raw.githubusercontent.com/adgellida/ubuntuScripts/master/044.downloadLatestUbuntuscripts -O ~/.ubunsys/downloads/ubuntuScripts-master/044.downloadLatestUbuntuscripts && chmod 777 ~/.ubunsys/downloads/ubuntuScripts-master/044.downloadLatestUbuntuscripts && ~/.ubunsys/downloads/ubuntuScripts-master/044.downloadLatestUbuntuscripts && echo ubuntuscripts downloaded ok. 1/3 ok || echo Error downloading ubuntuscripts. Holding your scripts. 1/3 fail && sleep 2"

           //"test -f ~/.ubunsys || mkdir -p ~/.ubunsys && test -f ~/.ubunsys/downloads || mkdir -p ~/.ubunsys/downloads && wget https://github.com/adgellida/ubuntuScripts/archive/master.zip -O ~/.ubunsys/master.zip && rm -Rf ~/.ubunsys/downloads/ubuntuScripts-master && unzip ~/.ubunsys/master.zip -d ~/.ubunsys/downloads && chmod 777 -R ~/.ubunsys/downloads/ubuntuScripts-master && rm ~/.ubunsys/master.zip && echo \nubuntuscripts download ok\n. || echo \nError downloading ubuntuscripts\n. Holding your scripts. && sleep 2"
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
           "~/.ubunsys/downloads/ubuntuScripts-master/019.downloadLatestUbuntupackages"
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
           "~/.ubunsys/downloads/ubuntuScripts-master/020.check_apt-fast_installed"
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
