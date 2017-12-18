#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QCoreApplication>
#include <QTextStream>

///////////////////////TWEAKS TAB///////////////////////

////////////////////////////////SOURCES

//##sources.list.d

void MainWindow::on_openSourcesListDButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening sources.list.d"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/023.openSourcesListD"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//##sources.list

void MainWindow::on_openSourcesListButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening Sources.list"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/042.openSourcesList"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_backupSourcesListButton_clicked()
{
    ui->statusBar->showMessage(tr("Backuping sudoers"));

    system("xterm -e '"
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

    // Create a new file

    QFile file (QDir::homePath() + "/.ubunsys/backups/sources.list/restoreSourcesListScript.sh");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << "#!/bin/bash\n\nsudo cp " + filename + " /etc/apt/sources.list";

    // optional, as QFile destructor will already do it:
    file.close();

    system("xterm -e '"
           "sudo chmod 777 ~/.ubunsys/backups/sources.list/restoreSourcesListScript.sh"
           "&&"
           "sudo ~/.ubunsys/backups/sources.list/restoreSourcesListScript.sh"
           " && "
           "sudo rm -Rf ~/.ubunsys/backups/sources.list/restoreSourcesListScript.sh"
           " && "
           "exit"
           "; exec bash'");

    //this would normally start the event loop, but is not needed for this
    //minimal example:
    //return app.exec();

    ui->statusBar->showMessage(tr("Done. sources.list restored succesful"));

}

//##apt-select

void MainWindow::on_aptselect_US_clicked()
{
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntupackages-master/apps1/apt-select"
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
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntupackages-master/apps1/apt-select"
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

//##updateNotification

void MainWindow::on_checkBoxUpdateNotif_clicked(bool checked)
{
    if (checked == false){

        qDebug() << checked;

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-master/054.enableUpdateNotification"
               " && "
               "exit"
               "; exec bash'");

        ui->statusBar->showMessage(tr("Enabled"));
    }

    if (checked != false){

        qDebug() << checked;

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-master/055.disableUpdateNotification"
               " && "
               "exit"
               "; exec bash'");

        ui->statusBar->showMessage(tr("Disabled"));
    }

    //######## Status

    QFile fileUpdateNotif(QDir::homePath() + "/.ubunsys/status/updateNotif.txt");
    //QLabel *testLabel= new QLabel;

    QString lineUpdateNotif1;
    if (fileUpdateNotif.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&fileUpdateNotif);
        while (!stream.atEnd()){

            //line.append(stream.readLine()+"\n");
            lineUpdateNotif1.append(stream.readLine());
        }
        //ui->statusBar->showMessage(line);
    }
    fileUpdateNotif.close();

    QString lineUpdateNotif2 = "Disabled";

    if (lineUpdateNotif1 == lineUpdateNotif2){

        //ui->statusBar->showMessage(tr("Está activo"));
        ui->checkBoxUpdateNotif->setChecked(true);
    }

    else{

        //ui->statusBar->showMessage(tr("Está inactivo"));
        ui->checkBoxUpdateNotif->setChecked(false);
    }

qDebug() << lineUpdateNotif1;
qDebug() << lineUpdateNotif2;

}

////////////////////////////////SECURITY

//##sudo without pass all

void MainWindow::on_enableSudoWithoutPassAllButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling sudo without pass"));

    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "Warning", "Are you completely sure?",
                                    QMessageBox::Yes|QMessageBox::No);
      if (reply == QMessageBox::Yes) {
        qDebug() << "Yes was clicked";
        //QApplication::quit();

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-master/025.enableSudoWithoutPassAll"
               " && "
               "exit"
               "; exec bash'");


        ui->statusBar->showMessage(tr("Done. Now select another action"));

      } else {
        qDebug() << "Yes was *not* clicked";
        ui->statusBar->showMessage(tr("Execution canceled"));
      }
}

void MainWindow::on_disableSudoWithoutPassAllButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling sudo without pass"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/026.disableSudoWithoutPassAll"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//##sudo without pass specific

void MainWindow::on_enableSudoWithoutPassSpecificButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling sudo without pass specific"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/052.enableSudoWithoutPassSpecific"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_disableSudoWithoutPassSpecificButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling sudo without pass specific"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/053.disableSudoWithoutPassSpecific"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//##sudoers.d

void MainWindow::on_openSudoersDButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening sudoers.d"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/051.openSudoersD"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//##hosts

void MainWindow::on_openHostsButton_clicked()
{
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/060.openHosts"
           " && "
           "echo Close this window!"
           "; exec bash'");
}

//##sudoers

void MainWindow::on_openSudoersFileButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening sudoers"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/027.openSudoersFile"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_backupSudoersFileButton_clicked()
{
    ui->statusBar->showMessage(tr("Backuping sudoers"));

    system("xterm -e '"
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

    system("xterm -e '"
           "sudo chmod 777 ~/.ubunsys/backups/sudoersFiles/restoreSudoersScript.sh"
           "&&"
           "sudo ~/.ubunsys/backups/sudoersFiles/restoreSudoersScript.sh"
           " && "
           "sudo rm -Rf ~/.ubunsys/backups/sudoersFiles/restoreSudoersScript.sh"
           " && "
           "exit"
           "; exec bash'");

    //this would normally start the event loop, but is not needed for this
    //minimal example:
    //return app.exec();
}

//##asterisks

void MainWindow::on_doVisibleAsterisksButton_clicked()
{
    ui->statusBar->showMessage(tr("Doing visible asterisks"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/021.doVisibleAsterisks"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_doInvisibleAsterisksButton_clicked()
{
    ui->statusBar->showMessage(tr("Doing invisible asterisks"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/022.doInvisibleAsterisks"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//##firewall

void MainWindow::on_checkBox_firewall_clicked(bool checked)
{
    if (checked != false){
        qDebug() << checked;

        ui->statusBar->showMessage(tr("Enabling firewall"));

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-master/033.check_ufw_installed"
               " && "
               "~/.ubunsys/downloads/ubuntuScripts-master/031.enableFirewall"
               " && "
               "exit"
               "; exec bash'");

        ui->statusBar->showMessage(tr("Done. Now select another action"));

    }

    else if (checked == false){
        qDebug() << checked;

              ui->statusBar->showMessage(tr("Disabling firewall"));

              system("xterm -e '"
                     "~/.ubunsys/downloads/ubuntuScripts-master/033.check_ufw_installed"
                     " && "
                     "~/.ubunsys/downloads/ubuntuScripts-master/032.disableFirewall"
                     " && "
                     "exit"
                     "; exec bash'");

              ui->statusBar->showMessage(tr("Done. Now select another action"));         

    }

    //######## Status

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/067.checkFirewallStatus"
           " && "
           "echo Close this window!"
           "; exec bash'");

    QFile fileFirewall(QDir::homePath() + "/.ubunsys/status/firewall.txt");
    //QLabel *testLabel= new QLabel;

    QString lineFirewall1;
    if (fileFirewall.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&fileFirewall);
        while (!stream.atEnd()){

            //line.append(stream.readLine()+"\n");
            lineFirewall1.append(stream.readLine());
        }
        //ui->statusBar->showMessage(line);
    }
    fileFirewall.close();

    QString lineFirewall2 = "Status: active";

    if (lineFirewall1 == lineFirewall2){

        //ui->statusBar->showMessage(tr("Está activo"));
        ui->checkBox_firewall->setChecked(true);
    }

    else{

        //ui->statusBar->showMessage(tr("Está inactivo"));
        ui->checkBox_firewall->setChecked(false);
    }

    qDebug() << lineFirewall1;
    qDebug() << lineFirewall2;
}


////////////////////////////////POWER

//##hibernation

void MainWindow::on_enableHibernationButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling hibernation"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/007.enableHibernation"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_disableHibernationButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling hibernation"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/024.disableHibernation"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//##LockScreen

void MainWindow::on_enableLockScreenButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling lock screen"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/036.enableLockScreen"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_disableLockScreenButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling lock screen"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/035.disableLockScreen"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

////////////////////////////////EXTRAS

//##Templates

void MainWindow::on_installTemplatesButton_clicked()
{
    ui->statusBar->showMessage(tr("Installing templates"));

    system("bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/018.installTemplates"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Templates installed succesful. Now select another action"));
}

//##reduceTo5sShutdownTimeout

void MainWindow::on_reduceTo5sShutdownTimeoutButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling sudo without pass"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/029.reduceTo5sShutdownTimeout"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_setToDefaults90sShutdownTimeoutButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling sudo without pass"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/030.setToDefaults90sShutdownTimeout"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//##MainBackup

void MainWindow::on_openMainBackupButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing Main Backup"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/045.mainBackup"
           " && "
           "exit"
           "; exec bash'");

    QMessageBox::information(this,tr("Notification"),tr("Backuped OK on \n\n") + QDir::homePath() + "/.ubunsys/backups/main");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_openMainRestoreButton_clicked()
{
    QString filename=QFileDialog::getOpenFileName(
                    this,
                    tr("Import your main backup file here"),
                    QDir::homePath() + "/.ubunsys/backups/lots",
                    //getenv("HOME"),
                    //"All files (*.*);;Bak files(*.bak)");
                    "ZIP files(*.zip)");

    //QMessageBox::information(this,tr("File Name"),filename);

    ui->statusBar->showMessage(tr("Done. Main backup restored succesful"));

    // Create a new file

    QFile file (QDir::homePath() + "/.ubunsys/backups/lots/restoremainBackup.sh");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << "#!/bin/bash\n\nsudo unzip -d ~/.ubunsys/backups/ " + filename;

    // optional, as QFile destructor will already do it:
    file.close();

    system("xterm -e '"
           "sudo chmod 777 ~/.ubunsys/backups/lots/restoremainBackup.sh"
           "&&"
           "sudo ~/.ubunsys/backups/lots/restoremainBackup.sh"
           " && "
           "sudo rm -Rf ~/.ubunsys/backups/lots/restoremainBackup.sh"
           " && "
           "exit"
           "; exec bash'");


//    ui->statusBar->showMessage(tr("Executing Main Restore"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/046.mainRestore"
           " && "
           "exit"
           "; exec bash'");

    QMessageBox::information(this,tr("Notification"),tr("Restored all OK"));

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//##rc.local

void MainWindow::on_openRCLocalButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening rc.local"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/056.openRCLocal"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//##HiddenStartupItems

void MainWindow::on_checkBoxHiddenStartupItems_clicked(bool checked)
{
    if (checked != false){
        qDebug() << checked;

    ui->statusBar->showMessage(tr("Showing"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/038.showHiddenStartupItems"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));

    }

    else if (checked == false){
        qDebug() << checked;

    ui->statusBar->showMessage(tr("Unshowing"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/037.unshowHiddenStartupItems"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));

    }

    //######## Status

    QFile fileHidden(QDir::homePath() + "/.ubunsys/status/HiddenStartupItems.txt");
    //QLabel *testLabel= new QLabel;

    QString lineHidden1;
    if (fileHidden.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&fileHidden);
        while (!stream.atEnd()){

            //line.append(stream.readLine()+"\n");
            lineHidden1.append(stream.readLine());
        }
        //ui->statusBar->showMessage(line);
    }
    fileHidden.close();

    QString lineHidden2 = "Show";

    if (lineHidden1 == lineHidden2){

        //ui->statusBar->showMessage(tr("Está activo"));
        ui->checkBoxHiddenStartupItems->setChecked(true);
    }

    else{

        //ui->statusBar->showMessage(tr("Está inactivo"));
        ui->checkBoxHiddenStartupItems->setChecked(false);
    }

qDebug() << lineHidden1;
qDebug() << lineHidden2;

}

//##Login Sound

void MainWindow::on_enableLoginSoundButton_clicked()
{
    ui->statusBar->showMessage(tr("Enabling login sound"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/039.enableLoginSound"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_disableLoginSoundButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling login sound"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/040.disableLoginSound"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//##dualBoot

void MainWindow::on_runGrubcustomizerButton_clicked()
{
    ui->statusBar->showMessage(tr("Installs/runs grub-customizer. Please wait"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntupackages-master/apps1/grub-customizer"
           " && "
           "sudo grub-customizer"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}
//##resetDconf

void MainWindow::on_resetDconf_clicked()
{
    ui->statusBar->showMessage(tr("Resetting dconf config"));

    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "Warning", "Are you completely sure?",
                                    QMessageBox::Yes|QMessageBox::No);
      if (reply == QMessageBox::Yes) {
        qDebug() << "Yes was clicked";
        //QApplication::quit();

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-master/057.resetDconf"
               " && "
               "echo Close this window!"
               "; exec bash'");


        ui->statusBar->showMessage(tr("Done. Now select another action"));

      } else {
        qDebug() << "Yes was *not* clicked";
        ui->statusBar->showMessage(tr("Execution canceled"));
      }

}
