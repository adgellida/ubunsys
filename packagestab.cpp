#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "packagesdialog.h"
#include "updatescriptsdialog.h"

///////////////////////PACKAGES TAB///////////////////////

void MainWindow::on_runScriptsManager_clicked()
{
    PackagesDialog packagesDialog;
    packagesDialog.setModal(true);
    packagesDialog.exec();
}

void MainWindow::on_runUpdateDialog_clicked()
{
    UpdateScriptsDialog updateScriptsDialog;
    updateScriptsDialog.setModal(true);
    updateScriptsDialog.exec();
}
