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

    //######## Status

    QFile fileSudo(QDir::homePath() + "/.ubunsys/status/SudoWOPass.txt");
    //QLabel *testLabel= new QLabel;

    QString lineSudo1;
    if (fileSudo.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&fileSudo);
        while (!stream.atEnd()){

            lineSudo1.append(stream.readLine());
        }
        //ui->statusBar->showMessage(line);
    }
    fileSudo.close();

    QString lineSudo2 = "Enabled";

    if (lineSudo1 == lineSudo2){

        //ui->statusBar->showMessage(tr("Está activo"));
        ui->checkBoxSudoWOPass->setChecked(true);
    }

    else{

        //ui->statusBar->showMessage(tr("Está inactivo"));
        ui->checkBoxSudoWOPass->setChecked(false);
    }

    qDebug() << lineSudo1;
    qDebug() << lineSudo2;

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

  //######## Status

  QFile fileAsterisks(QDir::homePath() + "/.ubunsys/status/asterisks.txt");
  //QLabel *testLabel= new QLabel;

  QString lineAsterisks1;
      if (fileAsterisks.open(QIODevice::ReadOnly | QIODevice::Text)){
      QTextStream stream(&fileAsterisks);
      while (!stream.atEnd()){

          //line.append(stream.readLine()+"\n");
          lineAsterisks1.append(stream.readLine());
      }
      //ui->statusBar->showMessage(line);
  }
  fileAsterisks.close();

  QString lineAsterisks2 = "Enabled";

  if (lineAsterisks1 == lineAsterisks2){

      //ui->statusBar->showMessage(tr("Está activo"));
      ui->checkBoxAsterisks->setChecked(true);
  }

  else{

      //ui->statusBar->showMessage(tr("Está inactivo"));
      ui->checkBoxAsterisks->setChecked(false);
  }

  qDebug() << lineAsterisks1;
  qDebug() << lineAsterisks2;

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

    //######## Status

    QFile fileUA(QDir::homePath() + "/.ubunsys/status/updateAuto.txt");
    //QLabel *testLabel= new QLabel;

    QString lineUA1;
        if (fileUA.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&fileUA);
        while (!stream.atEnd()){

            //line.append(stream.readLine()+"\n");
            lineUA1.append(stream.readLine());
        }
        //ui->statusBar->showMessage(line);
    }
    fileUA.close();

    QString lineUA2 = "Enabled";

    if (lineUA1 == lineUA2){

        //ui->statusBar->showMessage(tr("Está activo"));
        ui->checkBoxUpdateAuto->setChecked(true);
    }

    else{

        //ui->statusBar->showMessage(tr("Está inactivo"));
        ui->checkBoxUpdateAuto->setChecked(false);
    }

    qDebug() << lineUA1;
    qDebug() << lineUA2;

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

    //######## Status

    QFile fileHibernation(QDir::homePath() + "/.ubunsys/status/hibernation.txt");
    //QLabel *testLabel= new QLabel;

    QString lineHibernation1;
        if (fileHibernation.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&fileHibernation);
        while (!stream.atEnd()){

            //line.append(stream.readLine()+"\n");
            lineHibernation1.append(stream.readLine());
        }
        //ui->statusBar->showMessage(line);
    }
    fileHibernation.close();

    QString lineHibernation2 = "Disabled";

    if (lineHibernation1 == lineHibernation2){

        //ui->statusBar->showMessage(tr("Está activo"));
        ui->checkBoxHibernation->setChecked(true);
    }

    else{

        //ui->statusBar->showMessage(tr("Está inactivo"));
        ui->checkBoxHibernation->setChecked(false);
    }

    qDebug() << lineHibernation1;
    qDebug() << lineHibernation2;
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

    //######## Status

    QFile fileLockScreen(QDir::homePath() + "/.ubunsys/status/LockScreen.txt");

    QString lineLockScreen1;
        if (fileLockScreen.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&fileLockScreen);
        while (!stream.atEnd()){

            lineLockScreen1.append(stream.readLine());
        }
        //ui->statusBar->showMessage(line);
    }
    fileLockScreen.close();

    QString lineLockScreen2 = "Enabled";

    if (lineLockScreen1 == lineLockScreen2){

        //ui->statusBar->showMessage(tr("Está activo"));
        ui->checkBoxLockScreen->setChecked(true);
    }

    else{

        //ui->statusBar->showMessage(tr("Está inactivo"));
        ui->checkBoxLockScreen->setChecked(false);
    }

    qDebug() << lineLockScreen1;
    qDebug() << lineLockScreen2;
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

    //######## Status

    QFile fileLoginSound(QDir::homePath() + "/.ubunsys/status/loginSound.txt");
    //QLabel *testLabel= new QLabel;

    QString lineLoginSound1;
        if (fileLoginSound.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&fileLoginSound);
        while (!stream.atEnd()){

            //line.append(stream.readLine()+"\n");
            lineLoginSound1.append(stream.readLine());
        }
        //ui->statusBar->showMessage(line);
    }
    fileLoginSound.close();

    QString lineLoginSound2 = "Enabled";

    if (lineLoginSound1 == lineLoginSound2){

        //ui->statusBar->showMessage(tr("Está activo"));
        ui->checkBoxLoginSound->setChecked(true);
    }

    else{

        //ui->statusBar->showMessage(tr("Está inactivo"));
        ui->checkBoxLoginSound->setChecked(false);
    }

    qDebug() << lineLoginSound1;
    qDebug() << lineLoginSound2;
}
