#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "packagesdialog.h"
#include <QMessageBox>
#include <dbmanager.h>
#include <QDesktopServices>

void MainWindow::checkAllStatus()
{
    //First update ubuntuscripts and ubuntupackages always, no checks
    system("/usr/share/ubunsys/scripts/updateUbuntuScripts.sh");
    system("/usr/share/ubunsys/scripts/updateUbuntupackages.sh");

    MainWindow::checkaptfastInstalled();
    MainWindow::checkUbunsysUpdate();
    //MainWindow::checkFirewallStatus();
    MainWindow::checkHiddenStartupItemsStatus();
    MainWindow::checkOfficialUpdateNotificationStatus();
    MainWindow::checkSudoWithoutPassStatus();
    MainWindow::checkAsterisksStatus();
    MainWindow::checkUpdateAutoStatus();
    MainWindow::checkHibernationStatus();
    MainWindow::checkLockScreenStatus();
    MainWindow::checkLoginSoundStatus();
}

//########
void MainWindow::checkFirewallStatus()
{
    //######## firewall
    //######## Status

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-dev/067.checkFirewallStatus"
           " && "
           "echo Close this window!"
           "; exec bash'");

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);
    QString status = db.getStatus("firewall");

    if (status == "Enabled"){

        ui->checkBox_firewall->setChecked(true);
    }

    else if (status == "Disabled"){

        ui->checkBox_firewall->setChecked(false);
    }

    ui->checkBox_firewall->setEnabled(true);
}

//########

void MainWindow::on_checkFirewallStatus_clicked()
{
    //######## HideStartupItems
    //######## Status

    MainWindow::checkFirewallStatus();
}

//########
void MainWindow::checkHiddenStartupItemsStatus()
{
    //######## HideStartupItems
    //######## Status

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);
    QString status = db.getStatus("hideStartupItems");

    if (status == "Enabled"){

        ui->checkBoxHiddenStartupItems->setChecked(true);
    }

    else if (status == "Disabled"){

        ui->checkBoxHiddenStartupItems->setChecked(false);
    }

}

//########
void MainWindow::checkOfficialUpdateNotificationStatus()
{
    //########updateNotif
    //######## Status

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);
    QString status = db.getStatus("officialUpdateNotification");

    if (status == "Enabled"){

        ui->checkBoxOfficialUpdateNotification->setChecked(true);
    }

    else if (status == "Disabled"){

        ui->checkBoxOfficialUpdateNotification->setChecked(false);
    }

}

//########
void MainWindow::checkSudoWithoutPassStatus()
{
    //######## sudoWithoutPass
    //######## Status

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);
    QString status = db.getStatus("sudoWOPass");

    if (status == "Enabled"){

        ui->checkBoxSudoWOPass->setChecked(true);
    }

    else if (status == "Disabled"){

        ui->checkBoxSudoWOPass->setChecked(false);
    }

}

//########

void MainWindow::checkAsterisksStatus()
{
    //######## asterisks
    //######## Status

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);
    QString status = db.getStatus("asterisks");

    if (status == "Enabled"){

        ui->checkBoxAsterisks->setChecked(true);
    }

    else if (status == "Disabled"){

        ui->checkBoxAsterisks->setChecked(false);
    }
}

//########

void MainWindow::checkUpdateAutoStatus()
{
    //######## updateAuto
    //######## Status

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);
    QString status = db.getStatus("updateAuto");

    if (status == "Disabled"){

        ui->comboBoxUpdate->setCurrentText("Disabled");
    }

    else if (status == "Each hour"){

        ui->comboBoxUpdate->setCurrentText("Each hour");
    }

    else if (status == "At boot"){

        ui->comboBoxUpdate->setCurrentText("At boot");
    }

}

//########

void MainWindow::checkHibernationStatus()
{
    //######## hibernation
    //######## Status

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);
    QString status = db.getStatus("hibernation");

    if (status == "Enabled"){

        ui->checkBoxHibernation->setChecked(true);
    }

    else if (status == "Disabled"){

        ui->checkBoxHibernation->setChecked(false);
    }
}

//########

void MainWindow::checkLockScreenStatus()
{
    //######## lockScreen
    //######## Status

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);
    QString status = db.getStatus("lockScreen");

    if (status == "Enabled"){

        ui->checkBoxLockScreen->setChecked(true);
    }

    else if (status == "Disabled"){

        ui->checkBoxLockScreen->setChecked(false);
    }

}

//########

void MainWindow::checkLoginSoundStatus()
{
    //######## loginSound
    //######## Status

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);
    QString status = db.getStatus("loginSound");

    if (status == "Enabled"){

        ui->checkBoxLoginSound->setChecked(true);
    }

    else if (status == "Disabled"){

        ui->checkBoxLoginSound->setChecked(false);
    }

}

//########

void MainWindow::checkaptfastInstalled(){

    //######## checkApt-fastInstallation
    //######## Status
    system("/usr/share/ubunsys/scripts/apt-fastChecking.sh");

    //Checks if apt-fast is installed and show message if proceed
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("apt-fastInstalled");

    if (status == "true"){

    //system("echo apt-fast was already installed. No installation required. 1/4 ok. >> ~/.ubunsys/updates/updateLog.log");

    }

    else if (status == "false"){

        QMessageBox msgBox;
        msgBox.setWindowTitle("Warning");
        msgBox.setText("We need extra dependencies:\napt-fast, we go to install it");
        msgBox.exec();

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntupackages-master/apps1/apt-fast"
               " && "
               "echo Close this window!"
               "; exec bash'");
    }

}

void MainWindow::checkUbunsysUpdate(){

    system("/usr/share/ubunsys/scripts/updateUbunsys.sh");

    //Checks if ubunsys has an update and show message if proceed
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("appUpdatePresent");
    QString status2 = db.getStatus("ubunsysGithubVersion");


    if (status == "false"){

        // do nothing
    }

    else if (status == "true"){

        QMessageBox msgBox;
        msgBox.setWindowTitle("ubunsys app update present");
        msgBox.setText("There's an update v" + status2 + ", would you like to install it?");
        msgBox.setStandardButtons(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::No);
        if(msgBox.exec() == QMessageBox::Yes){
            //on_actionUpdateApp_triggered();     //launch update ubunsys app
            QDesktopServices::openUrl(QUrl("https://www.pling.com/p/1179908", QUrl::TolerantMode));
            ui->statusBar->showMessage(tr("Launches release page to update manually. Please wait."));
        }
        else {
          // do nothing
        }
    }
}

void MainWindow::checkUserInSudoers(){

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("sudoWOPass");

    if (status == "Enabled"){

        QMessageBox::information(this,tr("ubunsys needs privileges"),tr("Your user is in sudoers group.\nubunsys now will work correctly"));

    }

    else if (status == "Disabled"){

        QMessageBox msgBox;
        msgBox.setWindowTitle("ubunsys needs privileges");
        msgBox.setText("ubunsys needs your user in the sudoers group.\nDo you allow it?");
        msgBox.setStandardButtons(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);

        if (msgBox.exec() == QMessageBox::Yes){

            MainWindow::on_checkBoxSudoWOPass_clicked(true);

            static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
            DbManager db(path);

            QString status2 = db.getStatus("sudoWOPass");

            if (status2 == "Enabled"){

                QMessageBox::information(this,tr("ubunsys needs privileges"),tr("Your user is in sudoers group.\nubunsys now will work correctly"));
            }

            else{

                QMessageBox::information(this,tr("ubunsys needs privileges"),tr("ubunsys wont' work correctly"));

            }

        }else {

            QMessageBox::information(this,tr("ubunsys needs privileges"),tr("ubunsys wont' work correctly"));
        }

    }

}
