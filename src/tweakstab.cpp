#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////TWEAKS TAB///////////////////////


//##Security & Passwords

void MainWindow::on_enableSudoWithoutPassButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling sudo without pass."));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/025.enableSudoWithoutPass"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

void MainWindow::on_disableSudoWithoutPassButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling sudo without pass."));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/026.disableSudoWithoutPass"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

void MainWindow::on_openSudoersFileButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening sudoers."));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/027.openSudoersFile"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

void MainWindow::on_backupSudoersFileButton_clicked()
{
    ui->statusBar->showMessage(tr("Backuping sudoers."));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/028.backupSudoersFile"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

//##Documents & Files

void MainWindow::on_installTemplatesButton_clicked()
{
    ui->statusBar->showMessage(tr("Installing templates."));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/018.installTemplates"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Templates installed succesful. Now select another action."));
}

//##Terminal

void MainWindow::on_doVisibleAsterisksButton_clicked()
{
    ui->statusBar->showMessage(tr("Doing visible asterisks."));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/021.doVisibleAsterisks"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

void MainWindow::on_doInvisibleAsterisksButton_clicked()
{
    ui->statusBar->showMessage(tr("Doing invisible asterisks."));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/022.doInvisibleAsterisks"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

//##Repositories

void MainWindow::on_openSourcesListDButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening sources.list.d."));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/023.openSourcesListD"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

//##Power

void MainWindow::on_enableHibernationButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling hibernation."));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/007.enableHibernation"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

void MainWindow::on_disableHibernationButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling hibernation."));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/024.disableHibernation"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action."));
}
