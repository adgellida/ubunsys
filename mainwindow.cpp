#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "updatescriptsdialog.cpp"
#include "updatescriptsdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->label->hide();

    connect(ui->actionAbout_Qt, SIGNAL(triggered()),
    qApp, SLOT(aboutQt()));

    //another way to set tooltips
    //ui->enableSudoWithoutPassButton->setToolTip("Almost no more questions\n about your password");

    //Creating folders

    //system("xterm -e '"
    system("test -d ~/.ubunsys || mkdir -p ~/.ubunsys && "
           "test -d ~/.ubunsys/scripts || mkdir -p ~/.ubunsys/downloads && "
           "test -d ~/.ubunsys/downloads || mkdir -p ~/.ubunsys/downloads && "
           "test -d ~/.ubunsys/downloads/ubuntuScripts-master || mkdir -p ~/.ubunsys/downloads/ubuntuScripts-master && "
           "test -d ~/.ubunsys/files || mkdir -p ~/.ubunsys/files && "
           "test -d ~/.ubunsys/updates/ubuntupackages_check_version || mkdir -p ~/.ubunsys/updates/ubuntupackages_check_version && "
           "test -d ~/.ubunsys/updates/ubuntuScripts_check_version || mkdir -p ~/.ubunsys/updates/ubuntuScripts_check_version && "
           "test -d ~/.ubunsys/updates/ubunsys_check_version || mkdir -p ~/.ubunsys/updates/ubunsys_check_version && "
           "test -d ~/.ubunsys/backups/scriptsFiles || mkdir -p ~/.ubunsys/backups/scriptsFiles && "
           "test -d ~/.ubunsys/backups/sudoersFiles || mkdir -p ~/.ubunsys/backups/sudoersFiles && "
           "rm -Rf ~/.ubunsys/updates/updateLog.log && "
           "touch ~/.ubunsys/updates/updateLog.log && "
           "exit");
          // "; exec bash'");

    //Silent update

    //######## Update ubuntuScripts

    system("/usr/share/ubunsys/scripts/updateUbuntuScripts.sh");

    //######## Update ubuntupackages

    system("/usr/share/ubunsys/scripts/updateUbuntupackages.sh");

    //######## apt-fast checking

    system("/usr/share/ubunsys/scripts/apt-fastChecking.sh");

    //######## Update ubunsys

    system("/usr/share/ubunsys/scripts/updateUbunsys.sh");

    //######## Show update output

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

    //Create extra open on future dialogs

    UpdateScriptsDialogUi = new UpdateScriptsDialog ();//////////////
    connect(UpdateScriptsDialogUi, SIGNAL(CloseClicked()), this , SLOT(closeUpdateDialog()));////////////////

    PackagesDialogUi = new PackagesDialog ();//////////////
    //connect(PackagesDialogUi, SIGNAL(CloseClicked()), this , SLOT(closePackagesDialog()));////////////////

}

MainWindow::~MainWindow()
{
    delete UpdateScriptsDialogUi;////////////////
    delete PackagesDialogUi;////////////////
    delete ui;
}

void MainWindow::on_manualUpdateDialogButton_released()//////////////////////
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

void MainWindow::on_enableUpdateNotificationButton_clicked()
{
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/054.enableUpdateNotification"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Enabled"));
}

void MainWindow::on_disableUpdateNotificationButton_clicked()
{
    system("xterm -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/055.disableUpdateNotification"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Disabled"));
}

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
