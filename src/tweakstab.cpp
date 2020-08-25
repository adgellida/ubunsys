#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QCoreApplication>
#include <QTextStream>
#include <QDesktopServices>
#include <dbmanager.h>

///////////////////////TWEAKS TAB///////////////////////

////////////////////////////////SOURCES

//##sources.list.d - no slider terminal

void MainWindow::on_openSourcesListDButton_clicked()
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("terminal");

    QProcess::startDetached(status + " -e \" bash -c ~/.ubunsys/downloads/ubuntuScripts-dev/023.openSourcesListD \" ");
}

//##open sources.list - no slider terminal + texteditor

void MainWindow::on_openSourcesListButton_clicked()
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("terminal");
    QString status2 = db.getStatus("textEditor");

    QProcess::startDetached(status + " -e \"sudo -i "+ status2 +" /etc/apt/sources.list \" ");
}

//##backup sources.list - no slider terminal

void MainWindow::on_backupSourcesListButton_clicked()
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("terminal");

    QProcess::startDetached(status + " -e \" bash -c ~/.ubunsys/downloads/ubuntuScripts-dev/043.backupSourcesList \" ");
    ui->statusBar->showMessage(tr("Done. sources.list restored succesful"));

    QMessageBox::information(this,tr("Notification"),tr("Backuped OK on \n\n") + QDir::homePath() + "/.ubunsys/backups/sources.list");
}

//##import sources.list - no slider terminal

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

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("terminal");

    QProcess::startDetached(status + " -e \" sudo chmod 777 ~/.ubunsys/backups/sources.list/restoreSourcesListScript.sh "
                                    "&&"
                                     " bash -c ~/.ubunsys/backups/sources.list/restoreSourcesListScript.sh "
                                    "&&"
                                     " -e \" sudo rm -Rf ~/.ubunsys/backups/sources.list/restoreSourcesListScript.sh \" ");

    QMessageBox::information(this,tr("Notification"),tr("sources.list restored succesful"));
}

//##OfficialUpdateNotification - slider

void MainWindow::on_checkBoxOfficialUpdateNotification_clicked(bool checked)
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("terminal");

    if (checked == true){

        qDebug() << checked;

        QProcess::startDetached(status + " -e \" bash -c ~/.ubunsys/downloads/ubuntuScripts-dev/054.enableOfficialUpdateNotification \" ");

        ui->statusBar->showMessage(tr("Enabled"));
    }

    if (checked == false){

        qDebug() << checked;

        QProcess::startDetached(status + " -e \" bash -c ~/.ubunsys/downloads/ubuntuScripts-dev/055.disableOfficialUpdateNotification \" ");

        ui->statusBar->showMessage(tr("Disabled"));
    }

    MainWindow::checkOfficialUpdateNotificationStatus();

}

////////////////////////////////SECURITY

//##sudo without pass all - slider

void MainWindow::on_checkBoxSudoWOPass_clicked(bool checked)
{
    if (checked == true){
        qDebug() << checked;

        ui->statusBar->showMessage(tr("Enabling sudo without pass"));

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-dev/025.enableSudoWithoutPassAll"
               " && "
               "exit"
               "; exec bash'");

    }

    else if (checked == false){
        qDebug() << checked;

              ui->statusBar->showMessage(tr("Disabling sudo without pass"));

              system("xterm -e '"
                     "~/.ubunsys/downloads/ubuntuScripts-dev/026.disableSudoWithoutPassAll"
                     " && "
                     "exit"
                     "; exec bash'");

    }

    MainWindow::checkSudoWithoutPassStatus();

}

//##enable sudo without pass specific - to verify

void MainWindow::on_enableSudoWithoutPassSpecificButton_clicked()
{
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-dev/052.enableSudoWithoutPassSpecific"
           " && "
           "exit"
           "; exec bash'");

}

//##disable sudo without pass specific - to verify

void MainWindow::on_disableSudoWithoutPassSpecificButton_clicked()
{
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-dev/053.disableSudoWithoutPassSpecific"
           " && "
           "exit"
           "; exec bash'");
}

//##sudoers.d - no slider terminal

void MainWindow::on_openSudoersDButton_clicked()
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("terminal");

    QProcess::startDetached(status + " -e \" bash -c ~/.ubunsys/downloads/ubuntuScripts-dev/051.openSudoersD \" ");
}

//##hosts - no slider terminal + texteditor

void MainWindow::on_openHostsButton_clicked()
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("terminal");
    QString status2 = db.getStatus("textEditor");

    QProcess::startDetached(status + " -e \"sudo -i "+ status2 +" /etc/hosts \" ");
}

//##sudoers - special

void MainWindow::on_openSudoersFileButton_clicked()
{
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-dev/027.openSudoersFile"
           " && "
           "echo Close this window!"
           "; exec bash'");
}

void MainWindow::on_backupSudoersFileButton_clicked()
{
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-dev/028.backupSudoersFile"
           " && "
           "exit"
           "; exec bash'");

    QMessageBox::information(this,tr("Notification"),tr("Backuped OK on \n\n") + QDir::homePath() + "/.ubunsys/backups/sudoersFiles");
}

//import Sudoers - to verify

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

//##firewall - slider

void MainWindow::on_checkBox_firewall_clicked(bool checked)
{
    if (checked != false){
        qDebug() << checked;

        ui->statusBar->showMessage(tr("Enabling firewall"));

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-dev/033.check_ufw_installed"
               " && "
               "~/.ubunsys/downloads/ubuntuScripts-dev/031.enableFirewall"
               " && "
               "exit"
               "; exec bash'");
    }

    else if (checked == false){
        qDebug() << checked;

              ui->statusBar->showMessage(tr("Disabling firewall"));

              system("xterm -e '"
                     "~/.ubunsys/downloads/ubuntuScripts-dev/033.check_ufw_installed"
                     " && "
                     "~/.ubunsys/downloads/ubuntuScripts-dev/032.disableFirewall"
                     " && "
                     "exit"
                     "; exec bash'");

    }

    MainWindow::checkFirewallStatus();
}

void MainWindow::on_configAutologinButton_clicked()
{
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-dev/configAutologin"
           " && "
           "exit"
           "; exec bash'");
}

////////////////////////////////POWER



////////////////////////////////EXTRAS

void MainWindow::on_goMouseRateCheckerButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://zowie.benq.com/en/support/mouse-rate-checker.html", QUrl::TolerantMode));
    ui->statusBar->showMessage(tr("Go to mouse rate checker. Please wait."));
}

//##Templates - no slider terminal

void MainWindow::on_installTemplatesButton_clicked()
{
    ui->statusBar->showMessage(tr("Installing templates"));

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("terminal");

    QProcess::startDetached(status + " -e \" bash -c ~/.ubunsys/downloads/ubuntuScripts-dev/018.installTemplates \" ");

    ui->statusBar->showMessage(tr("Templates installed succesful. Now select another action"));
}

//##Main Backup - to verify

void MainWindow::on_openMainBackupButton_clicked()
{
    ui->statusBar->showMessage(tr("Executing Main Backup"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-dev/045.mainBackup"
           " && "
           "exit"
           "; exec bash'");

    QMessageBox::information(this,tr("Notification"),tr("Backuped OK on \n\n") + QDir::homePath() + "/.ubunsys/backups/lots");


    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "Question", "Open folder where located?",
                                    QMessageBox::Yes|QMessageBox::No);
      if (reply == QMessageBox::Yes) {


          system("xterm -e '"
                 "~/.ubunsys/downloads/ubuntuScripts-dev/074.openLots"
                 " && "
                 "echo Close this window!"
                 "; exec bash'");

      }
}

//##Main Restore - to verify

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
           "~/.ubunsys/downloads/ubuntuScripts-dev/046.mainRestore"
           " && "
           "exit"
           "; exec bash'");

    QMessageBox::information(this,tr("Notification"),tr("Restored all OK"));
    }

}

//##rc.local - no slider terminal + texteditor

void MainWindow::on_openRCLocalButton_clicked()
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("terminal");
    QString status2 = db.getStatus("textEditor");

    QProcess::startDetached(status + " -e \"sudo -i "+ status2 +" /etc/rc.local \" ");
}

//##HiddenStartupItems - slider

void MainWindow::on_checkBoxHiddenStartupItems_clicked(bool checked)
{
    if (checked != false){
        qDebug() << checked;
        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-dev/038.showHiddenStartupItems"
               " && "
               "exit"
               "; exec bash'");
    }

    else if (checked == false){
        qDebug() << checked;
        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-dev/037.unshowHiddenStartupItems"
               " && "
               "exit"
               "; exec bash'");
    }

    MainWindow::checkHiddenStartupItemsStatus();

}

//##dualBoot - no slider terminal

void MainWindow::on_runGrubcustomizerButton_clicked()
{
    process->start("sh", QStringList() << "-c" << "~/.ubunsys/downloads/ubuntupackages-master/apps1/grub-customizer && sudo grub-customizer");
}

//##Sync Time - no slider terminal

void MainWindow::on_runSyncTime_clicked()
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("terminal");

    QProcess::startDetached(status + " -e \" bash -c ~/.ubunsys/downloads/ubuntuScripts-dev/changeLinuxtoWindowsTime \" ");
}


//##edit grub - no slider terminal + texteditor

void MainWindow::on_editGrubButton_clicked()
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("terminal");
    QString status2 = db.getStatus("textEditor");

    QProcess::startDetached(status + " -e \"sudo -i "+ status2 +" /etc/default/grub \" ");
}

//##update grub - no slider terminal

void MainWindow::on_updateGrubButton_clicked()
{
    process->start("sh", QStringList() << "-c" << "~/.ubunsys/downloads/ubuntuScripts-dev/081.updateGrub");

}

//##resetDconf - reserved

void MainWindow::on_resetDconf_clicked()
{
    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "Warning", "Are you completely sure?",
                                    QMessageBox::Yes|QMessageBox::No);
      if (reply == QMessageBox::Yes) {
        qDebug() << "Yes was clicked";
        //QApplication::quit();

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-dev/057.resetDconf"
               " && "
               "echo Close this window!"
               "; exec bash'");
      } else {
        qDebug() << "Yes was *not* clicked";
      }

}

//##asterisks - slider

void MainWindow::on_checkBoxAsterisks_clicked(bool checked)
{
    if (checked == true){
        qDebug() << checked;
        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-dev/021.doVisibleAsterisks"
               " && "
               "exit"
               "; exec bash'");
    }

    else if (checked == false){
        qDebug() << checked;
        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-dev/022.doInvisibleAsterisks"
               " && "
               "exit"
               "; exec bash'");
    }

    MainWindow::checkAsterisksStatus();

}

//##hibernation - slider

void MainWindow::on_checkBoxHibernation_clicked(bool checked)
{
    if (checked == true){
        qDebug() << checked;
        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-dev/007.enableHibernation"
               " && "
               "exit"
               "; exec bash'");
    }

    else if (checked == false){
        qDebug() << checked;
          system("xterm -e '"
                 "~/.ubunsys/downloads/ubuntuScripts-dev/024.disableHibernation"
                 " && "
                 "exit"
                 "; exec bash'");
    }

     MainWindow::checkHibernationStatus();
}

//##lock screen - slider

void MainWindow::on_checkBoxLockScreen_clicked(bool checked)
{
    if (checked == true){
        qDebug() << checked;
        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-dev/036.enableLockScreen"
               " && "
               "exit"
               "; exec bash'");
    }

    else if (checked == false){
        qDebug() << checked;
          system("xterm -e '"
                 "~/.ubunsys/downloads/ubuntuScripts-dev/035.disableLockScreen"
                 " && "
                 "exit"
                 "; exec bash'");
    }

    MainWindow::checkLockScreenStatus();
}

//##login sound - slider

void MainWindow::on_checkBoxLoginSound_clicked(bool checked)
{
    if (checked == true){
        qDebug() << checked;

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-dev/039.enableLoginSound"
               " && "
               "exit"
               "; exec bash'");
    }

    else if (checked == false){
        qDebug() << checked;

          system("xterm -e '"
                 "~/.ubunsys/downloads/ubuntuScripts-dev/040.disableLoginSound"
                 " && "
                 "exit"
                 "; exec bash'");
    }

    MainWindow::checkLoginSoundStatus();
}

//##fonts

void MainWindow::on_installInfinalityFontsButton_clicked()
{
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntupackages-master/apps1/infinality-fonts"
           " && "
           "exit"
           "; exec bash'");
}

void MainWindow::on_uninstallInfinalityFontsButton_clicked()
{
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-dev/082.uninstallInfinalityFonts"
           " && "
           "exit"
           "; exec bash'");
}

void MainWindow::on_InfinalityFontsGeneralStylesButton_clicked()
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("terminal");

    QProcess::startDetached(status + " -e \"sudo bash /etc/fonts/infinality/infctl.sh setstyle \" ");
}

void MainWindow::on_InfinalityFontsInfinalityStylesButton_clicked()
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("terminal");
    QString status2 = db.getStatus("textEditor");

    QProcess::startDetached(status + " -e \"sudo -H "+ status2 +" /etc/profile.d/infinality-settings.sh\" ");
}


void MainWindow::on_generalInfoButton_clicked()
{
    system("xterm -e '"
           "sudo apt install -y neofetch"
           " && "
           " clear "
           " && "
           "neofetch -n"
           "; exec bash'");
}
