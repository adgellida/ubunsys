#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "updatescriptsdialog.cpp"
#include "updatescriptsdialog.h"
#include "preferencesdialog.cpp"
#include "preferencesdialog.h"
#include <QDesktopServices>
#include <dbmanager.h>
#include <QSystemTrayIcon>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    mSystemTrayIcon = new QSystemTrayIcon(this);

    //mSystemTrayIcon->setIcon(QIcon(":/images/ubunsys.ico"));

    mSystemTrayIcon = new QSystemTrayIcon(QIcon(":/images/ubunsys.png"));

    //mSystemTrayIcon = new QSystemTrayIcon(QIcon(":/images/ubunsys.png"));

    mSystemTrayIcon->setVisible(true);


    connect(ui->actionAbout_Qt, SIGNAL(triggered()),
    qApp, SLOT(aboutQt()));

    //Creating folder configurations

    system("test -d ~/.ubunsys || mkdir -p ~/.ubunsys && "
           "test -d ~/.ubunsys/configurations || mkdir -p ~/.ubunsys/configurations && "
           "exit");

    //######## initializeDatabase

    MainWindow::initializeDatabase();

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

    //######## showMessageAtInit

    MainWindow::showMessageAtInit();

    //######## checkAllStatus

    MainWindow::checkAllStatus();

    //######## showUpdateOutput

    MainWindow::showUpdateOutput();
}

MainWindow::~MainWindow()
{
    delete UpdateScriptsDialogUi;////////////////
    delete PackagesDialogUi;////////////////
    delete PreferencesDialogUi;////////////////
    delete ui;
}

//#############FUNCTION DECLARATIONS

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
           "~/.ubunsys/downloads/ubuntuScripts-dev/063.openCron"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_eraseCronButton_clicked()
{
    ui->statusBar->showMessage(tr("Erasing cron jobs"));

    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-dev/064.eraseCron"
           " && "
           "echo Close this window!"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void MainWindow::on_showMessagePushButton_clicked()
{
    mSystemTrayIcon->showMessage(tr("Mensaje"),
        tr("Mostrando un mensaje"));
    //mSystemTrayIcon = new QSystemTrayIcon(QIcon(":/images/128-128-76912453c14fc15ed016df244ce34b54.png"));

}
