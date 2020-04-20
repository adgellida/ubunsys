#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "preferencesdialog.cpp"
#include "preferencesdialog.h"
#include <QDesktopServices>
#include <dbmanager.h>
#include <QSystemTrayIcon>
#include <QLayout>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
  , trayIcon(new QSystemTrayIcon(this))

{
    ui->setupUi(this);

    //ui->centralWidget->setVisible(false);

    //######## INITIALIZATIONS
    MainWindow::initializeTrayIcon();
    MainWindow::createFoldersFiles();
    MainWindow::initializeDatabase();
    MainWindow::initializeGUI();
    MainWindow::initializeConsole();
    MainWindow::showMessageAtInit();
    MainWindow::checkUserInSudoers();
    MainWindow::checkAllStatus();
    //MainWindow::showUpdateOutput();

    //Create extra open on future dialogs begin
    connect(ui->actionAbout_Qt, SIGNAL(triggered()),
    qApp, SLOT(aboutQt()));

    PackagesDialogUi = new PackagesDialog ();//////////////
    //connect(PackagesDialogUi, SIGNAL(CloseClicked()), this , SLOT(closePackagesDialog()));////////////////

    PreferencesDialogUi = new PreferencesDialog ();//////////////
    connect(PreferencesDialogUi, SIGNAL(CloseClicked()), this , SLOT(closePreferencesDialog()));////////////////  
}

///icon
QMenu* MainWindow::createMenu()
{
    // App can exit via Quit menu

    //auto update = new QAction(tr("&Update system"), this);
    //connect(update, SIGNAL(triggered()), this, SLOT(MainWindow::on_updateAndUpgradeButton_clicked()));

    auto quitAction = new QAction("&Quit", this);
    connect(quitAction, &QAction::triggered, qApp, &QCoreApplication::quit);

    auto menu = new QMenu(this);

    //menu->addAction(update);
    //menu->addSeparator();
    menu->addAction(quitAction);

    return menu;
}

///icon

void MainWindow::iconActivated(QSystemTrayIcon::ActivationReason reason_)
{
  switch (reason_) {
  case QSystemTrayIcon::Trigger:
    trayIcon->showMessage("Hello", "You clicked me!");
    break;
  default:
    ;
  }
}


void MainWindow::trayIconClicked(QSystemTrayIcon::ActivationReason reason)
{
    if(reason == QSystemTrayIcon::Trigger)
        this->show();
}


MainWindow::~MainWindow()
{
    delete PackagesDialogUi;////////////////
    delete PreferencesDialogUi;////////////////
    delete ui;
}

//#############FUNCTION DECLARATIONS

void MainWindow::on_runScriptsManager_released()//////////////////////
{
    qDebug() << "dialogOpenned";
    PackagesDialogUi->show();
    ui->statusBar->showMessage(tr("Continue on the opened dialog..."));
}

//PREFERENCES

void MainWindow::on_actionPreferences_triggered()//////////////////////
{
    qDebug() << "Preferences pushed";
    PreferencesDialogUi->show();
    //ui->textBrowser->setText(tr("Opened preferences dialog..."));
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
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-dev/063.openCron"
           " && "
           "echo Close this window!"
           "; exec bash'");
}

void MainWindow::on_eraseCronButton_clicked()
{
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-dev/064.eraseCron"
           " && "
           "echo Close this window!"
           "; exec bash'");
}

void MainWindow::on_actionCleanTerminal_triggered()
{
    console->clear();
}

void MainWindow::on_actionCleanSystem_triggered()
{
    MainWindow::on_cleanButton_clicked();
}

void MainWindow::on_openBashRCButton_clicked()
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("terminal");
    QString status2 = db.getStatus("textEditor");

    QProcess::startDetached(status + " -e \"sudo -i "+ status2 +" ~/.bashrc \" ");
}

//##CONSOLE

void MainWindow::get_data()
{
    this->console->moveCursor(QTextCursor::End);
    this->console->insertPlainText(process->readAll());
    this->console->moveCursor(QTextCursor::End);
    // this->console->setPlainText(process->readAllStandardError());
}

void MainWindow::add_text_completed()
{
    this->console->insertPlainText("\n\n===PROCESS FINISHED===\n\n");
}

//##

void MainWindow::closeEvent(QCloseEvent *event)
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    QString status = db.getStatus("sudoWOPass");

    if (status == "Enabled"){

        MainWindow::on_checkBoxSudoWOPass_clicked(false);
        QMessageBox::information(this,tr("sudoers group"),tr("For more security ubunsys has removed your user from sudoers group"));
    }

    QWidget::closeEvent(event);
}
