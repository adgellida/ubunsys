#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "packagesdialog.h"

///////////////////////INSTALL TAB///////////////////////

void MainWindow::on_runScriptsManager_clicked()
{
    PackagesDialog packagesDialog2;
    packagesDialog2.setModal(true);
    packagesDialog2.exec();
}
