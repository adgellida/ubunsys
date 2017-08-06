#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "updatescriptsdialog.cpp"
#include "updatescriptsdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Dia = new UpdateScriptsDialog ();//////////////
    connect(Dia, SIGNAL(CloseClicked()), this , SLOT(closeUpdateDialog()));////////////////

    //ui->label->hide();

    connect(ui->actionAbout_Qt, SIGNAL(triggered()),
    qApp, SLOT(aboutQt()));

    //another way to set tooltips
    //ui->enableSudoWithoutPassButton->setToolTip("Almost no more questions\n about your password");

    //Creating folders

    system("x-terminal-emulator -e '"
           "test -d ~/.ubunsys || mkdir -p ~/.ubunsys && "
           "test -d ~/.ubunsys/downloads || mkdir -p ~/.ubunsys/downloads && "
           "test -d ~/.ubunsys/downloads/ubuntuScripts-master || mkdir -p ~/.ubunsys/downloads/ubuntuScripts-master && "
           "test -d ~/.ubunsys/files || mkdir -p ~/.ubunsys/files && "
           "test -d ~/.ubunsys/updates/ubuntupackages_check_version || mkdir -p ~/.ubunsys/updates/ubuntupackages_check_version && "
           "test -d ~/.ubunsys/updates/ubuntuScripts_check_version || mkdir -p ~/.ubunsys/updates/ubuntuScripts_check_version && "
           "test -d ~/.ubunsys/updates/ubunsys_check_version || mkdir -p ~/.ubunsys/updates/ubunsys_check_version && "
           "test -d ~/.ubunsys/backups/scriptsFiles || mkdir -p ~/.ubunsys/backups/scriptsFiles && "
           "test -d ~/.ubunsys/backups/sudoersFiles || mkdir -p ~/.ubunsys/backups/sudoersFiles && "
           "exit"
           "; exec bash'");

    //test
    //on_pushButton_released();
    //on_runUpdateDialog_clicked();
    //on_updateScriptsButton_clicked();
    //on_runScriptsManager_clicked();
    //QDialog *gamatosdialog = new QDialog;
    //gamatosdialog->show();



    //Silent update

    //ui->statusBar->showMessage(tr("Checking your scripts version and updating if necessary. Please wait..."));

    //######## Update ubuntuScripts

    //ui->statusBar->showMessage(tr("Checking ubuntuscripts. Please wait..."));
    system("/usr/share/ubunsys/updateUbuntuScripts.sh");

    //######## Update ubuntupackages

    //ui->statusBar->showMessage(tr("Checking ubuntupackages. Please wait..."));
    system("/usr/share/ubunsys/updateUbuntupackages.sh");

    //######## apt-fast checking

    //ui->statusBar->showMessage(tr("Checking apt-fast. Please wait..."));
    system("/usr/share/ubunsys/apt-fastChecking.sh");

    //######## Update ubunsys

    //ui->statusBar->showMessage(tr("Checking ubunsys. Please wait..."));
    system("/usr/share/ubunsys/updateUbunsys.sh");


    //ui->statusBar->showMessage(tr("Scripts version checked and updated if necessary. Close this window!"));




    //Show update output

    QFile file (QDir::homePath() + "/.ubunsys/updates/updateLog.log");

    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in (&file);

    ui->textBrowser->setText(in.readAll());

    //QFile::remove(QDir::homePath() + "/.ubunsys/updates/updateLog.log");
    system("rm -Rf ~/.ubunsys/updates/updateLog.log");
    system("touch ~/.ubunsys/updates/updateLog.log");

    ui->statusBar->showMessage(tr("Recommendation: Push Help -> Tutorial"));

    //Set main position

    ui->tabWidget->setCurrentIndex(1);
    ui->tabWidget_3->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete Dia;////////////////
    delete ui;
}

void MainWindow::on_manualUpdateDialogButton_released()
{
    qDebug() << "dialogOpenned";
    Dia->show();
    ui->textBrowser->setText(tr("Continue on the opened dialog..."));
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

    Dia->close();
}
