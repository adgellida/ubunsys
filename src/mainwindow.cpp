#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "updatescriptsdialog.cpp"
#include "updatescriptsdialog.h"
#include "preferencesdialog.cpp"
#include "preferencesdialog.h"
#include <QDesktopServices>
#include <dbmanager.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionAbout_Qt, SIGNAL(triggered()),
    qApp, SLOT(aboutQt()));

    //######## initializeGUI

    MainWindow::initializeGUI();

    //######## createFoldersFiles

    MainWindow::createFoldersFiles();

    //Create extra open on future dialogs begin

    UpdateScriptsDialogUi = new UpdateScriptsDialog ();//////////////
    connect(UpdateScriptsDialogUi, SIGNAL(CloseClicked()), this , SLOT(closeUpdateDialog()));////////////////

    PackagesDialogUi = new PackagesDialog ();//////////////
    //connect(PackagesDialogUi, SIGNAL(CloseClicked()), this , SLOT(closePackagesDialog()));////////////////

    PreferencesDialogUi = new PreferencesDialog ();//////////////
    connect(PreferencesDialogUi, SIGNAL(CloseClicked()), this , SLOT(closePreferencesDialog()));////////////////

    //Create extra open on future dialogs end

    //######## checkAllStatus

    MainWindow::checkAllStatus();

    //######## showUpdateOutput

    MainWindow::showUpdateOutput();

    //######## showMessageAtInit

    MainWindow::showMessageAtInit();

}

MainWindow::~MainWindow()
{
    delete UpdateScriptsDialogUi;////////////////
    delete PackagesDialogUi;////////////////
    delete PreferencesDialogUi;////////////////
    delete ui;
}

//#############FUNCTION DECLARATIONS

void MainWindow::showMessageAtInit()
{

    QMessageBox msgBox;
    msgBox.setWindowTitle("Warning");
    msgBox.setText("This version is alpha release.\nContains a lot of bugs.\nParticipate reporting them and demanding new functionalities.\nThanks.");
    msgBox.exec();
    system("/usr/share/ubunsys/scripts/installApt-fast.sh");

}
void MainWindow::checkAllStatus()
{
    system("/usr/share/ubunsys/scripts/checkUpdateUbuntuScripts.sh");
    system("/usr/share/ubunsys/scripts/checkUpdateUbuntupackages.sh");
    MainWindow::checkaptfastInstalled();
    MainWindow::checkUbunsys();

    //1.########
    //MainWindow::checkFirewallStatus();
    //2.########
    MainWindow::checkHiddenStartupItemsStatus();
    //3.########
    MainWindow::checkupdateNotifStatus();
    //4.########
    MainWindow::checkSudoWithoutPassStatus();
    //5.########
    MainWindow::checkTextEditor();
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

void MainWindow::createFoldersFiles()
{
    system("test -d ~/.ubunsys || mkdir -p ~/.ubunsys && "
           "test -d ~/.ubunsys/scripts || mkdir -p ~/.ubunsys/downloads && "
           "test -d ~/.ubunsys/downloads || mkdir -p ~/.ubunsys/downloads && "
           "test -d ~/.ubunsys/files || mkdir -p ~/.ubunsys/files && "
           "test -d ~/.ubunsys/backups/scriptsFiles || mkdir -p ~/.ubunsys/backups/scriptsFiles && "
           "test -d ~/.ubunsys/backups/sudoersFiles || mkdir -p ~/.ubunsys/backups/sudoersFiles && "
           "rm -Rf ~/.ubunsys/updates/updateLog.log && "
           "touch ~/.ubunsys/updates/updateLog.log && "
           "exit");
}

void MainWindow::showUpdateOutput()
{
    QFile file (QDir::homePath() + "/.ubunsys/updates/updateLog.log");

    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in (&file);

    ui->textBrowser->setText(in.readAll());

    system("rm -Rf ~/.ubunsys/updates/updateLog.log");
    system("touch ~/.ubunsys/updates/updateLog.log");

    ui->statusBar->showMessage(tr("Recommendation: Push Help -> Tutorial"));
}

void MainWindow::on_actionManualUpdateDialog_triggered()//////////////////////
{
    qDebug() << "dialogOpenned";
    UpdateScriptsDialogUi->show();
    ui->textBrowser->setText(tr("Continue on the opened dialog..."));
}

void MainWindow::on_runScriptsManager_released()//////////////////////
{
    qDebug() << "dialogOpenned";
    PackagesDialogUi->show();
    ui->textBrowser->setText(tr("Continue on the opened dialog..."));
    ui->statusBar->showMessage(tr("Continue on the opened dialog..."));
}

void MainWindow::closeUpdateDialog()
{
    //Show update output

    QFile file (QDir::homePath() + "/.ubunsys/updates/updateLog.log");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in (&file);

    ui->textBrowser->setText(in.readAll());

    //QFile::remove(QDir::homePath() + "/.ubunsys/updates/updateLog.log");
    system("rm -Rf ~/.ubunsys/updates/updateLog.log");
    system("touch ~/.ubunsys/updates/updateLog.log");

    qDebug() << "Close pushed";

    UpdateScriptsDialogUi->close();
}

void MainWindow::on_upgradeLatestKernel_1_clicked()
{
    ui->statusBar->showMessage(tr("Upgrading to latest kernel from PPA for Canonical Kernel Team"));

    system("xterm -e '"
           "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/canonical-kernel-team-ppa"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Upgraded"));
}

void MainWindow::on_upgradeLatestKernel_2_clicked()
{
    ui->statusBar->showMessage(tr("Upgrading to latest kernel from PPA for Canonical Kernel Team - Bootstrap"));

    system("xterm -e '"
           "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/bootstrap-kernels"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Upgraded"));
}

void MainWindow::on_purgeMainlineKernels_clicked()
{
    system("xterm -e '"
           "sudo apt-fast -y install ppa-purge"
           " && "
           "sudo ppa-purge -y ppa:canonical-kernel-team/ppa"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Purged"));
}

void MainWindow::on_purgeMainlineKernels_2_clicked()
{
    system("xterm -e '"
           "sudo apt-fast -y install ppa-purge"
           " && "
           "sudo ppa-purge -y ppa:canonical-kernel-team/bootstrap"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Purged"));
}

//PREFERENCES

void MainWindow::on_actionPreferences_triggered()//////////////////////
{
    qDebug() << "Preferences pushed";
    PreferencesDialogUi->show();
    ui->textBrowser->setText(tr("Opened preferences dialog..."));
}

void MainWindow::closePreferencesDialog()//////////////////////
{

    qDebug() << "Close pushed";

    PreferencesDialogUi->close();
}

void MainWindow::on_actionSeeReleases_triggered()
{
    QDesktopServices::openUrl(QUrl("https://github.com/adgellida/ubunsys/releases", QUrl::TolerantMode));
    ui->statusBar->showMessage(tr("Launches release page to update manually. Please wait."));
}

void MainWindow::on_actionUpdateApp_triggered()
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("appUpdatePresent");

    if (status == "false"){

        QMessageBox::information(this,tr("Notification"),tr("You are running the latest version, no update needed. Remember that every time you open the app an update notification is shown if it exists."));

    }

    else if (status == "true"){

        ui->statusBar->showMessage(tr("Put sudo pass to try to update ubunsys through PPA"));

        system("xterm -e '"
                "~/.ubunsys/downloads/ubuntupackages-master/apps1/ubunsys"
                " && "
                "exit"
                "; exec bash'");

        QMessageBox::information(this,tr("ubunsys app update"),tr("Now you have to close & reopen app \n") + tr("and check if update is ok."));

        ui->statusBar->showMessage(tr("Reopen app when terminal closes to check if ubunsys was updated to latest version."));
    }
}

void MainWindow::on_actionDefaultUpdateUpgradePackages_triggered()
{
    on_updateAndUpgradeButton_clicked();
}

void MainWindow::on_actionDefaultUpdateUpgradeSmartPackages_triggered()
{
    on_dist_upgradeButton_clicked();
}

void MainWindow::on_actionTwitter_triggered()
{
    QDesktopServices::openUrl(QUrl("https://www.twitter.com/ubunsys_app", QUrl::TolerantMode));
    ui->statusBar->showMessage(tr("Go to ubunsys twitter. Please wait."));
}

void MainWindow::on_openCronButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening cron jobs"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/063.openCron"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_eraseCronButton_clicked()
{
    ui->statusBar->showMessage(tr("Erasing cron jobs"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/064.eraseCron"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::checkUbunsys(){

    system("/usr/share/ubunsys/scripts/checkUbunsys.sh");

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

void MainWindow::initializeGUI(){

    //Configure tabs open begin

    QTabWidget *tabw = ui->tabWidget;
    tabw->setTabText(0, "");
    tabw->setTabText(1, "");
    tabw->setTabText(2, "");
    tabw->setTabText(3, "");
    tabw->setTabText(4, "");
    tabw->setTabText(5, "");
    tabw->setTabText(6, "");
    tabw->setTabText(7, "");

    QTabBar *tabbar = tabw->tabBar();

    QLabel *lbl1 = new QLabel();
    lbl1->setStyleSheet("QLabel { background:transparent }");
    lbl1->setText("Packages");
    tabbar->setTabButton(0, QTabBar::LeftSide, lbl1);

    QLabel *lbl2 = new QLabel();
    lbl2->setStyleSheet("QLabel { background:transparent }");
    lbl2->setText("Sources");
    tabbar->setTabButton(1, QTabBar::LeftSide, lbl2);

    QLabel *lbl3 = new QLabel();
    lbl3->setStyleSheet("QLabel { background:transparent }");
    lbl3->setText("Updates");
    tabbar->setTabButton(2, QTabBar::LeftSide, lbl3);

    QLabel *lbl4 = new QLabel();
    lbl4->setStyleSheet("QLabel { background:transparent }");
    lbl4->setText("Fixes");
    tabbar->setTabButton(3, QTabBar::LeftSide, lbl4);

    QLabel *lbl5 = new QLabel();
    lbl5->setStyleSheet("QLabel { background:transparent }");
    lbl5->setText("Security");
    tabbar->setTabButton(4, QTabBar::LeftSide, lbl5);

    QLabel *lbl6 = new QLabel();
    lbl6->setStyleSheet("QLabel { background:transparent }");
    lbl6->setText("Power");
    tabbar->setTabButton(5, QTabBar::LeftSide, lbl6);

    QLabel *lbl7 = new QLabel();
    lbl7->setStyleSheet("QLabel { background:transparent }");
    lbl7->setText("Extras");
    tabbar->setTabButton(6, QTabBar::LeftSide, lbl7);

    //Configure tabs open end

    //Set main GUI position

    ui->tabWidget->setCurrentIndex(1);
    ui->tabWidget_3->setCurrentIndex(0);
}


//1.########
void MainWindow::checkFirewallStatus()
{
    //1.######## firewall
    //######## Status

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/067.checkFirewallStatus"
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
void MainWindow::checkHiddenStartupItemsStatus()
{
    //2.######## HideStartupItems
    //######## Status

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);
    QString status = db.getStatus("HideStartupItems");

    if (status == "Enabled"){

        ui->checkBoxHiddenStartupItems->setChecked(true);
    }

    else if (status == "Disabled"){

        ui->checkBoxHiddenStartupItems->setChecked(false);
    }

}

//3.########
void MainWindow::checkupdateNotifStatus()
{
    //3.######## updateNotif
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

    system("~/.ubunsys/downloads/ubuntuScripts-master/textEditorChange && "
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
    system("/usr/share/ubunsys/scripts/checkApt-fastInstallation.sh");

    //Checks if apt-fast is installed and show message if proceed
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("apt-fastInstalled");

    if (status == "true"){

    system("echo apt-fast was already installed. No installation required. 3/4 ok. >> ~/.ubunsys/updates/updateLog.log");

    }

    else if (status == "false"){

        QMessageBox msgBox;
        msgBox.setWindowTitle("Warning");
        msgBox.setText("We need extra dependencies:\napt-fast, we go to install it");
        msgBox.exec();
        system("/usr/share/ubunsys/scripts/installApt-fast.sh");
    }

}

void MainWindow::on_checkFirewallStatus_clicked()
{
    MainWindow::checkFirewallStatus();
}
