#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "packagesdialog.h"
#include "updatescriptsdialog.h"
#include <QMessageBox>
#include <dbmanager.h>

void MainWindow::initializeDatabase()
{

//Database initialization begin
static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
DbManager db(path);

if (db.isOpen())
{
    bool out = db.nameExists("dataPresent");
    qDebug() << "Exists?";
    qDebug() << out;

    if (out == false)   // If table not exists, we add variables and values
    {

    //initializing values of database begin
    db.createTable();   // Creates a table if it doens't exist. Otherwise, it will use existing table.
    //db.removeAllNames();
    //#########
    db.addNameStatus("dataPresent", "Enabled");
    //#########
    db.addNameStatus("messageAtInit", "Enabled");
    //1.#########
    db.addNameStatus("firewall", "Disabled");
    //2.#########
    db.addNameStatus("hideStartupItems", "Disabled");
    //3.#########
    db.addNameStatus("officialUpdateNotification", "Enabled");
    //4.#########
    db.addNameStatus("sudoWOPass", "Disabled");
    //5.#########
    db.addNameStatus("textEditor", "nano");
    //6.#########
    db.addNameStatus("asterisks", "Disabled");
    //7.#########
    db.addNameStatus("updateAuto", "Disabled");
    //8.#########
    db.addNameStatus("hibernation", "Disabled");
    //9.#########
    db.addNameStatus("lockScreen", "Enabled");
    //10.########
    db.addNameStatus("loginSound", "Enabled");
    //########
    db.addNameStatus("language", "English");
    //########
    db.addNameStatus("theme", "Default");
    //########
    db.addNameStatus("apt-fastInstalled", "false");
    //########
    db.addNameStatus("appUpdatePresent", "false");
    //########
    db.addNameStatus("ubunsysGithubVersion", "NULL");
    //########
    db.addNameStatus("ubunsysInstalledVersion", "NULL");
    //########
    //db.addNameStatus("ubuntupackages_remote_commit_version", "NULL");
    //########
    //db.addNameStatus("ubuntupackages_previous_commit_version", "NULL");
    //########
    //db.addNameStatus("ubuntuScripts_remote_commit_version", "NULL");
    //########
    //db.addNameStatus("ubuntuScripts_previous_commit_version", "NULL");
    }
}
else
{
    qDebug() << "Database is not open!";
}

//Database initialization end
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

void MainWindow::showMessageAtInit()
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);
    QString status = db.getStatus("messageAtInit");

    if (status == "Enabled"){

        QMessageBox msgBox;
        msgBox.setWindowTitle("Warning");
        msgBox.setText("This version is alpha release.\nContains a lot of bugs.\nParticipate reporting them and demanding new functionalities.\nThanks.");
        msgBox.exec();

        db.updateStatus("messageAtInit","Disabled");
    }

    //system("/usr/share/ubunsys/scripts/installApt-fast.sh");
}

void MainWindow::createFoldersFiles()
{
    system("test -d ~/.ubunsys || mkdir -p ~/.ubunsys && "
           "test -d ~/.ubunsys/scripts || mkdir -p ~/.ubunsys/scripts && "
           "test -d ~/.ubunsys/downloads || mkdir -p ~/.ubunsys/downloads && "
           "test -d ~/.ubunsys/files || mkdir -p ~/.ubunsys/files && "
           "test -d ~/.ubunsys/backups/scriptsFiles || mkdir -p ~/.ubunsys/backups/scriptsFiles && "
           "test -d ~/.ubunsys/backups/sudoersFiles || mkdir -p ~/.ubunsys/backups/sudoersFiles && "
           "test -d ~/.ubunsys/updates || mkdir -p ~/.ubunsys/updates && "
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
