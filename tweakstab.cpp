#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QCoreApplication>
#include <QTextStream>

///////////////////////TWEAKS TAB///////////////////////


//##Security & Passwords

void MainWindow::on_enableSudoWithoutPassButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling sudo without pass"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/025.enableSudoWithoutPass"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_disableSudoWithoutPassButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling sudo without pass"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/026.disableSudoWithoutPass"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//##Sudoers

void MainWindow::on_openSudoersFileButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening sudoers"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/027.openSudoersFile"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_openSudoersUbunsysModButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening sudoers modification"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/041.openSudoersMod"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_backupSudoersFileButton_clicked()
{
    ui->statusBar->showMessage(tr("Backuping sudoers"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/028.backupSudoersFile"
           " && "
           "exit"
           "; exec bash'");

    QMessageBox::information(this,tr("Notification"),tr("Backuped OK on \n\n") + QDir::homePath() + "/.ubunsys/backups/sudoersFiles");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_importSudoersFileButton_clicked()
{
    QString filename=QFileDialog::getOpenFileName(
                    this,
                    tr("Import your sudoers file here"),
                    QDir::homePath() + "/.ubunsys/backups/sudoersFiles",
                    //getenv("HOME"),
                    //"All files (*.*);;Bak files(*.bak)");
                    "Bak files(*.bak)");

    //QMessageBox::information(this,tr("File Name"),filename);

    ui->statusBar->showMessage(tr("Done. sudoers file restored succesful"));

    // Create a new file

    QFile file (QDir::homePath() + "/.ubunsys/backups/sudoersFiles/restoreSudoersScript.sh");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << "#!/bin/bash\n\nsudo cp " + filename + " /etc/sudoers";

    // optional, as QFile destructor will already do it:
    file.close();

    system("xterm -e bash -c '"
           "sudo chmod 777 ~/.ubunsys/backups/sudoersFiles/restoreSudoersScript.sh"
           "&&"
           "sudo ~/.ubunsys/backups/sudoersFiles/restoreSudoersScript.sh"
           " && "
           "exit"
           "; exec bash'");

    //this would normally start the event loop, but is not needed for this
    //minimal example:
    //return app.exec();
}


//##Documents & Files

void MainWindow::on_installTemplatesButton_clicked()
{
    ui->statusBar->showMessage(tr("Installing templates"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/018.installTemplates"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Templates installed succesful. Now select another action"));
}

//##Terminal

void MainWindow::on_doVisibleAsterisksButton_clicked()
{
    ui->statusBar->showMessage(tr("Doing visible asterisks"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/021.doVisibleAsterisks"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_doInvisibleAsterisksButton_clicked()
{
    ui->statusBar->showMessage(tr("Doing invisible asterisks"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/022.doInvisibleAsterisks"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//##Repositories

void MainWindow::on_openSourcesListDButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening sources.list.d"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/023.openSourcesListD"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//##Power

void MainWindow::on_enableHibernationButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling hibernation"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/007.enableHibernation"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_disableHibernationButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling hibernation"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/024.disableHibernation"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_reduceTo5sShutdownTimeoutButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling sudo without pass"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/029.reduceTo5sShutdownTimeout"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_setToDefaults90sShutdownTimeoutButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling sudo without pass"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/030.setToDefaults90sShutdownTimeout"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_enableFirewallButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling firewall"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/033.check_ufw_installed"
           " && "
           "~/.ubunsys/downloads/ubuntuScripts-master/031.enableFirewall"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_disableFirewallButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling firewall"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/033.check_ufw_installed"
           " && "
           "~/.ubunsys/downloads/ubuntuScripts-master/032.disableFirewall"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_runGrubcustomizerButton_clicked()
{
    ui->statusBar->showMessage(tr("Installs/runs grub-customizer. Please wait"));

    system("xterm -e bash -c '"
           "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/044.grub-customizer"
           " && "
           "sudo grub-customizer"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_enableLockScreenlButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling lock screen"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/036.enableLockScreen"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_disableLockScrennButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling lock screen"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/035.disableLockScreen"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_showHiddenStartupItemsButton_clicked()
{
    ui->statusBar->showMessage(tr("Showing"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/038.showHiddenStartupItems"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_unshowHiddenStartupItemsButton_clicked()
{
    ui->statusBar->showMessage(tr("Unshowing"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/037.unshowHiddenStartupItems"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_enableLoginSoundButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling login sound"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/039.enableLoginSound"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_disableLoginSoundButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling login sound"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/040.disableLoginSound"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_aptselect_US_clicked()
{
    system("xterm -e bash -c '"
           "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/175.apt-select"
           " && "
           "apt-select --country US"
           " && "
           "echo Push enter or close this terminal window"
           " && "
           "read"
           " && "
           "exit"
           "; exec bash'");
}

void MainWindow::on_aptselect_ES_clicked()
{
    system("xterm -e bash -c '"
           "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/175.apt-select"
           " && "
           "apt-select --country ES"
           " && "
           "echo Push enter or close this terminal window"
           " && "
           "read"
           " && "
           "exit"
           "; exec bash'");
}

void MainWindow::on_openSourcesListButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening Sources.list"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/042.openSourcesList"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_backupSourcesListButton_clicked()
{
    ui->statusBar->showMessage(tr("Backuping sudoers"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/043.backupSourcesList"
           " && "
           "exit"
           "; exec bash'");

    QMessageBox::information(this,tr("Notification"),tr("Backuped OK on \n\n") + QDir::homePath() + "/.ubunsys/backups/sources.list");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_importSourcesListButton_clicked()
{
    QString filename=QFileDialog::getOpenFileName(
                    this,
                    tr("Import your sources.list file here"),
                    QDir::homePath() + "/.ubunsys/backups/sources.list",
                    //getenv("HOME"),
                    //"All files (*.*);;Bak files(*.bak)");
                    "Bak files(*.bak)");

    //QMessageBox::information(this,tr("File Name"),filename);

    ui->statusBar->showMessage(tr("Done. sources.list restored succesful"));

    // Create a new file

    QFile file (QDir::homePath() + "/.ubunsys/backups/sources.list/restoreSourcesListScript.sh");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << "#!/bin/bash\n\nsudo cp " + filename + " /etc/apt/sources.list";

    // optional, as QFile destructor will already do it:
    file.close();

    system("xterm -e bash -c '"
           "sudo chmod 777 ~/.ubunsys/backups/sources.list/restoreSourcesListScript.sh"
           "&&"
           "sudo ~/.ubunsys/backups/sources.list/restoreSourcesListScript.sh"
           " && "
           "exit"
           "; exec bash'");

    //this would normally start the event loop, but is not needed for this
    //minimal example:
    //return app.exec();
}

void MainWindow::on_openMainBackupButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing Main Backup"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/045.mainBackup"
           " && "
           "exit"
           "; exec bash'");

    QMessageBox::information(this,tr("Notification"),tr("Backuped OK on \n\n") + QDir::homePath() + "/.ubunsys/backups/main");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_openMainRestoreButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing Main Restore"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/046.mainRestore"
           " && "
           "exit"
           "; exec bash'");

    QMessageBox::information(this,tr("Notification"),tr("Restored all OK"));

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

