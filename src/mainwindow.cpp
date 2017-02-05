#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->label->hide();

    connect(ui->actionAbout_Qt, SIGNAL(triggered()),
    qApp, SLOT(aboutQt()));

    //######## PREPARING ENVIRONMENT

    //######## Update ubuntuScripts

    ui->statusBar->showMessage(tr("Updating latest scripts. Please wait"));

    system("xterm -e bash -c '"
           "sudo rm -Rf ~/.ubunsys"
           " && "
           "mkdir -p ~/.ubunsys/downloads"
           " && "
           "wget https://github.com/adgellida/ubuntuScripts/archive/master.zip -O ~/.ubunsys/downloads/master.zip"
           " && "
           "unzip ~/.ubunsys/downloads/master.zip -d ~/.ubunsys/downloads"
           " && "
           "sudo chmod 777 -R ~/.ubunsys/downloads/ubuntuScripts-master"
           " && "
           "rm ~/.ubunsys/downloads/master.zip"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Downloaded latest scripts."));

    ui->statusBar->showMessage(tr("Download latest ubuntupackages script."));

    //######## Update ubuntupackages

    system("xterm -e bash -c '"
           "sudo ~/.ubunsys/downloads/ubuntuScripts-master/019.downloadLatestUbuntupackages"
           " && "
           "exit"
           "; exec bash'");

    //######## apt-fast checking

    ui->statusBar->showMessage(tr("Checking if apt-fast is installed and we install it if necessary."));

    system("xterm -e bash -c '"
           "sudo ~/.ubunsys/downloads/ubuntuScripts-master/020.check_apt-fast_installed"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("apt-fast is installed."));

    ui->statusBar->showMessage(tr("Installing packages."));

    //qDebug() << "test13";

    ui->statusBar->showMessage(tr("Latest scripts updated ok. Please select an action"));

}

MainWindow::~MainWindow()
{
    delete ui;
}
