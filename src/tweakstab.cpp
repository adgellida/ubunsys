#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QCoreApplication>
#include <QTextStream>
#include <QDesktopServices>

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

    MainWindow::checkupdateNotifStatus();

}

////////////////////////////////SECURITY

//##sudo without pass all

void MainWindow::on_checkBoxSudoWOPass_clicked(bool checked)
{
    if (checked != false){
        qDebug() << checked;

        ui->statusBar->showMessage(tr("Enabling sudo without pass"));

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-master/025.enableSudoWithoutPassAll"
               " && "
               "exit"
               "; exec bash'");

        ui->statusBar->showMessage(tr("Done. Now select another action"));

    }

    else if (checked == false){
        qDebug() << checked;

              ui->statusBar->showMessage(tr("Disabling sudo without pass"));

              system("xterm -e '"
                     "~/.ubunsys/downloads/ubuntuScripts-master/026.disableSudoWithoutPassAll"
                     " && "
                     "exit"
                     "; exec bash'");

              ui->statusBar->showMessage(tr("Done. Now select another action"));
    }

    MainWindow::checkSudoWithoutPassStatus();

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

    MainWindow::checkFirewallStatus();
}


////////////////////////////////POWER



////////////////////////////////EXTRAS

void MainWindow::on_goMouseRateCheckerButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://zowie.benq.com/en/support/mouse-rate-checker.html", QUrl::TolerantMode));
    ui->statusBar->showMessage(tr("Go to mouse rate checker. Please wait."));
}

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
    ui->statusBar->showMessage(tr("Enabling"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/029.reduceTo5sShutdownTimeout"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_setToDefaults90sShutdownTimeoutButton_clicked()
{
    ui->statusBar->showMessage(tr("Disabling"));

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

    QMessageBox::information(this,tr("Notification"),tr("Backuped OK on \n\n") + QDir::homePath() + "/.ubunsys/backups/lots");


    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "Question", "Open folder where located?",
                                    QMessageBox::Yes|QMessageBox::No);
      if (reply == QMessageBox::Yes) {


          system("xterm -e '"
                 "~/.ubunsys/downloads/ubuntuScripts-master/074.openLots"
                 " && "
                 "echo Close this window!"
                 "; exec bash'");

      }

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

    if (!filename.isNull()){
       qDebug() << "No es cero";


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

    MainWindow::checkHiddenStartupItemsStatus();

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

//##edit grub

void MainWindow::on_editGrubButton_clicked()
{
    ui->statusBar->showMessage(tr("Edit grub"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/080.editGrub"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

//##update grub

void MainWindow::on_updateGrubButton_clicked()
{
    ui->statusBar->showMessage(tr("Update grub"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/081.updateGrub"
           " && "
           "echo Close this window!"
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

//##asterisks

void MainWindow::on_checkBoxAsterisks_clicked(bool checked)
{
    if (checked != false){
        qDebug() << checked;

        ui->statusBar->showMessage(tr("Doing visible asterisks"));

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-master/021.doVisibleAsterisks"
               " && "
               "exit"
               "; exec bash'");

        ui->statusBar->showMessage(tr("Done. Now select another action"));

    }

    else if (checked == false){
        qDebug() << checked;

        ui->statusBar->showMessage(tr("Doing invisible asterisks"));

          system("xterm -e '"
                 "~/.ubunsys/downloads/ubuntuScripts-master/022.doInvisibleAsterisks"
                 " && "
                 "exit"
                 "; exec bash'");

          ui->statusBar->showMessage(tr("Done. Now select another action"));
    }

  MainWindow::checkAsterisksStatus();

  }

//##updateAuto

void MainWindow::on_checkBoxUpdateAuto_clicked(bool checked)
{
    if (checked != false){
        qDebug() << checked;

        ui->statusBar->showMessage(tr("Adding update auto"));

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-master/065.add_to_root_crontab"
               " && "
               "exit"
               "; exec bash'");

        ui->statusBar->showMessage(tr("Done. Now select another action"));

    }

    else if (checked == false){
        qDebug() << checked;

          ui->statusBar->showMessage(tr("Erasing update auto"));

          system("xterm -e '"
                 "~/.ubunsys/downloads/ubuntuScripts-master/066.remove_to_root_crontab"
                 " && "
                 "exit"
                 "; exec bash'");

          ui->statusBar->showMessage(tr("Done. Now select another action"));
    }

    MainWindow::checkUpdateAutoStatus();

}

//##hibernation

void MainWindow::on_checkBoxHibernation_clicked(bool checked)
{
    if (checked != false){
        qDebug() << checked;

        ui->statusBar->showMessage(tr("Hibernation enabled"));

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-master/007.enableHibernation"
               " && "
               "exit"
               "; exec bash'");

        ui->statusBar->showMessage(tr("Done. Now select another action"));

    }

    else if (checked == false){
        qDebug() << checked;

          ui->statusBar->showMessage(tr("Hibernation disabled"));

          system("xterm -e '"
                 "~/.ubunsys/downloads/ubuntuScripts-master/024.disableHibernation"
                 " && "
                 "exit"
                 "; exec bash'");

          ui->statusBar->showMessage(tr("Done. Now select another action"));
    }

     MainWindow::checkHibernationStatus();
}

//##lock screen

void MainWindow::on_checkBoxLockScreen_clicked(bool checked)
{
    if (checked != false){
        qDebug() << checked;

        ui->statusBar->showMessage(tr("Lock screen Enabled"));

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-master/035.disableLockScreen"
               " && "
               "exit"
               "; exec bash'");

        ui->statusBar->showMessage(tr("Done. Now select another action"));

    }

    else if (checked == false){
        qDebug() << checked;

          ui->statusBar->showMessage(tr("Lock screen Disabled"));

          system("xterm -e '"
                 "~/.ubunsys/downloads/ubuntuScripts-master/036.enableLockScreen"
                 " && "
                 "exit"
                 "; exec bash'");

          ui->statusBar->showMessage(tr("Done. Now select another action"));
    }

    MainWindow::checkLockScreenStatus();
}

//##login sound

void MainWindow::on_checkBoxLoginSound_clicked(bool checked)
{
    if (checked != false){
        qDebug() << checked;

        ui->statusBar->showMessage(tr("Login Sound Enabled"));

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-master/039.enableLoginSound"
               " && "
               "exit"
               "; exec bash'");

        ui->statusBar->showMessage(tr("Done. Now select another action"));

    }

    else if (checked == false){
        qDebug() << checked;

          ui->statusBar->showMessage(tr("Login Sound Disabled"));

          system("xterm -e '"
                       "~/.ubunsys/downloads/ubuntuScripts-master/040.disableLoginSound"
                 " && "
                 "exit"
                 "; exec bash'");

          ui->statusBar->showMessage(tr("Done. Now select another action"));
    }

    MainWindow::checkLoginSoundStatus();
}
