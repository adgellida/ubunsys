#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "packagesdialog.h"
#include "updatescriptsdialog.h"
#include <QMessageBox>
#include <dbmanager.h>

void MainWindow::checkAllStatus()
{
    //First update ubuntuscripts and ubuntupackages always, no checks
    system("/usr/share/ubunsys/scripts/updateUbuntuScripts.sh");
    system("/usr/share/ubunsys/scripts/updateUbuntupackages.sh");

    MainWindow::checkaptfastInstalled();

    MainWindow::checkUbunsysUpdate();

    //1.########
    //MainWindow::checkFirewallStatus();
    //2.########
    MainWindow::checkHiddenStartupItemsStatus();
    //3.########
    MainWindow::checkOfficialUpdateNotificationStatus();
    //4.########
    MainWindow::checkSudoWithoutPassStatus();
    //5.########
    //MainWindow::checkTextEditor();
    //6.########
    MainWindow::checkAsterisksStatus();
    //7.########
    MainWindow::checkUpdateAutoStatus();
    //8.########
    MainWindow::checkHibernationStatus();
    //9.########
    MainWindow::checkLockScreenStatus();
    //10.########
    MainWindow::checkLoginSoundStatus();
}

//1.########
void MainWindow::checkFirewallStatus()
{
    //1.######## firewall
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

//2.########

void MainWindow::on_checkFirewallStatus_clicked()
{
    //2.######## HideStartupItems
    //######## Status

    MainWindow::checkFirewallStatus();
}

//2.########
void MainWindow::checkHiddenStartupItemsStatus()
{
    //2.######## HideStartupItems
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

//3.########
void MainWindow::checkOfficialUpdateNotificationStatus()
{
    //3.######## updateNotif
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

//4.########
void MainWindow::checkSudoWithoutPassStatus()
{
    //4.######## sudoWithoutPass
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

//5.########

void MainWindow::checkTextEditor()
{
    //5.######## textEditor
    //######## Status
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString actualTextEditorSelected = db.getStatus("textEditor");

    QFile file (QDir::homePath() + "/.ubunsys/configurations/actualTextEditor.cfg");
    if ( file.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file );
        stream << actualTextEditorSelected << endl;
    }

    system("~/.ubunsys/downloads/ubuntuScripts-dev/textEditorChange && "
           "exit");

}

//6.########

void MainWindow::checkAsterisksStatus()
{
    //6.######## asterisks
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

//7.########

void MainWindow::checkUpdateAutoStatus()
{
    //7.######## updateAuto
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

//8.########

void MainWindow::checkHibernationStatus()
{
    //8.######## hibernation
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

//9.########

void MainWindow::checkLockScreenStatus()
{
    //9.######## lockScreen
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

//10.########

void MainWindow::checkLoginSoundStatus()
{
    //10.######## loginSound
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

//14.########

void MainWindow::checkaptfastInstalled(){

    //14.######## checkApt-fastInstallation
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

    if (status == "false"){

        // do nothing
    }

    else if (status == "true"){

        QMessageBox msgBox;
        msgBox.setWindowTitle("ubunsys app update present");
        msgBox.setText("There's an update, would you like to install it?");
        msgBox.setStandardButtons(QMessageBox::Yes);
        msgBox.addButton(QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::No);
        if(msgBox.exec() == QMessageBox::Yes){
            on_actionUpdateApp_triggered();     //launch update ubunsys app
        }
        else {
          // do nothing
        }
    }
}
