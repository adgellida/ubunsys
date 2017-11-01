#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
#include <QMessageBox>

///////////////////////UPDATE APP & SCRIPTS ZONE///////////////////////

//void MainWindow::on_updateScriptsButton_clicked()
//{
//    on_runUpdateDialog_clicked();
//}

void MainWindow::on_updateAppButton_clicked()
{
    ui->statusBar->showMessage(tr("Put sudo pass to try to update ubunsys through PPA"));
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntupackages-master/apps1/ubunsys"
           " && "
           "exit"
           "; exec bash'");

    QMessageBox::information(this,tr("ubunsys app update"),tr("Now you have to close & reopen app \n") + tr("and check if update is ok."));

    ui->statusBar->showMessage(tr("Reopen app when terminal closes to check if ubunsys was updated to latest version."));
}

void MainWindow::on_seeReleasesButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/adgellida/ubunsys/releases", QUrl::TolerantMode));
    ui->statusBar->showMessage(tr("Launches release page to update manually. Please wait."));
}
