#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////TWEAKS TAB///////////////////////

void MainWindow::on_installTemplatesButton_clicked()
{
    ui->statusBar->showMessage(tr("Installing templates. Then close the terminal window."));

    system("xterm -e bash -c '"
           "sudo ~/.ubunsys/downloads/installpackages1"
           "; exec bash'");



    system("xterm -e bash -c '"
           "wget https://github.com/adgellida/ubuntuScripts/blob/master/018.installTemplates -O ~/.ubunsys/downloads/018.installTemplates"
           " && "
           "sudo ~/.ubunsys/downloads/018.installTemplates"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Templates installed succesful. Now select another action."));
}
