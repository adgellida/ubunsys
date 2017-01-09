#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////TWEAKS TAB///////////////////////

/// DEVELOPING HERE...

void MainWindow::on_installTemplatesButton_clicked()
{
    ui->statusBar->showMessage(tr("Updating repos. Then close the terminal window."));

    system("mkdir ~/.ubunsys");
    system("mkdir ~/.ubunsys/downloads");

    system("wget https://dl.opendesktop.org/api/files/download/id/1465382478/129681-templates.tar.gz -O ~/.ubunsys/downloads/129681-templates.tar.gz");

//    system("pkexec chmod 777 ~/.ubunsys/downloads/installpackages1");
    system("chmod +x ~/.ubunsys/downloads/installpackages1");

    system("xterm -e bash -c '"
           "sudo ~/.ubunsys/downloads/installpackages1"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Repos updated succesful. Now select another action."));
}
