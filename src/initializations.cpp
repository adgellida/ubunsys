#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "packagesdialog.h"
#include <QMessageBox>
#include <dbmanager.h>

void MainWindow::initializeTrayIcon(){

    // Tray icon menu
    auto menu = this->createMenu();
    this->trayIcon->setContextMenu(menu);

    // App icon
    auto appIcon = QIcon(":/images/ubunsys.png");
    this->trayIcon->setIcon(appIcon);
    this->setWindowIcon(appIcon);

    // Displaying the tray icon
    this->trayIcon->show();     // Note: without explicitly calling show(), QSystemTrayIcon::activated signal will never be emitted!

    // Interaction
    connect(trayIcon, &QSystemTrayIcon::activated, this, &MainWindow::iconActivated);

    //trayIcon->showMessage("ubunsys", "I'm opening... Please wait, downloading required scripts", appIcon, 6000);

}

void MainWindow::initializeDatabase(){

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
    //#########
    db.addNameStatus("firewall", "Disabled");
    //#########
    db.addNameStatus("hideStartupItems", "Disabled");
    //#########
    db.addNameStatus("officialUpdateNotification", "Enabled");
    //#########
    db.addNameStatus("sudoWOPass", "Disabled");
    //#########
    db.addNameStatus("textEditor", "nano");
    //#########
    db.addNameStatus("asterisks", "Disabled");
    //#########
    db.addNameStatus("updateAuto", "Disabled");
    //#########
    db.addNameStatus("hibernation", "Disabled");
    //#########
    db.addNameStatus("lockScreen", "Enabled");
    //#########
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
    db.addNameStatus("updateAutoAppBegin", "Enabled");
    //#########
    db.addNameStatus("terminal", "xterm");
    }

    bool out2 = db.nameExists("terminal");
    qDebug() << "Exists?";
    qDebug() << out2;

    if (out == false)   // If table not exists, we add variables and values
    {
    db.addNameStatus("terminal", "xterm");
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
    tabw->setTabText(8, "");

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

    QLabel *lbl8 = new QLabel();
    lbl8->setStyleSheet("QLabel { background:transparent }");
    lbl8->setText("Info");
    tabbar->setTabButton(7, QTabBar::LeftSide, lbl8);

    //Configure tabs open end

    //Set main GUI position

    ui->tabWidget->setCurrentIndex(1);
    ui->tabWidget_3->setCurrentIndex(0);
}

void MainWindow::initializeConsole(){

    //this->setGeometry(333, 333, 355, 355);

    QVBoxLayout *layout = new QVBoxLayout;

    console = new QTextEdit;
    process = new QProcess;

    //console->setTextBackgroundColor("RED");

    layout->addWidget(console);

    process->setProcessChannelMode(QProcess::MergedChannels);

    console->setStyleSheet("QTextEdit { background-color : black; color : green; }");
    console->ensureCursorVisible();

    ui->widget_3->setLayout(layout);
    ui->widget_3->setGeometry(70, 600, 600, 200);

    connect(process, SIGNAL(readyRead()), this, SLOT(get_data()));
    connect(process, SIGNAL(finished(int)), this, SLOT(add_text_completed()));
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
           "test -d ~/.ubunsys/configurations || mkdir -p ~/.ubunsys/configurations && "
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
/*
    QFile file (QDir::homePath() + "/.ubunsys/updates/updateLog.log");

    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in (&file);

    ui->textBrowser->setText(in.readAll());

    system("rm -Rf ~/.ubunsys/updates/updateLog.log");
    system("touch ~/.ubunsys/updates/updateLog.log");

    ui->statusBar->showMessage(tr("Recommendation: Push Help -> Tutorial"));
*/
}
