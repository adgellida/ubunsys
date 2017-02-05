#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////TWEAKS TAB///////////////////////

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

void MainWindow::on_openSourcesListDButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening sources.list.d."));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/023.openSourcesListD"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action."));
}

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

