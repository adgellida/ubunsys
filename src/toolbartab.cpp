#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////TOOLBAR TAB///////////////////////

void MainWindow::on_actionNew_triggered()
{
    ui->statusBar->showMessage(tr("New"));
}

void MainWindow::on_actionOpen_triggered()
{
    ui->statusBar->showMessage(tr("Open"));
}

void MainWindow::on_actionSave_triggered()
{
    ui->statusBar->showMessage(tr("Save"));
}

void MainWindow::on_actionSave_as_triggered()
{
    ui->statusBar->showMessage(tr("Save_as"));
}

/*

void MainWindow::on_actionAbout_triggered()
{
    ui->statusBar->showMessage(tr("About"));
}

*/
