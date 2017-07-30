#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>

///////////////////////UPDATE APP & SCRIPTS ZONE///////////////////////

void MainWindow::on_updateScriptsButton_clicked()
{
    on_runUpdateDialog_clicked();
}
void MainWindow::on_updateAppButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/adgellida/ubunsys/releases", QUrl::TolerantMode));
    ui->statusBar->showMessage(tr("For now launches to release page to update manually. Please wait."));
}
