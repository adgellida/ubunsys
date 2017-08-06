#include "updatescriptsdialog.h"
#include "ui_updatescriptsdialog.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

UpdateScriptsDialog::UpdateScriptsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateScriptsDialog)
{
    ui->setupUi(this);

    ui->statusBar->showMessage(tr("Push to check scripts version and update if necessary."));

    connect(ui->closeUpdateDialogButton, SIGNAL(clicked()),this, SIGNAL(CloseClicked()) );//////////

    ui->textBrowser->setText(tr("Waiting selection..."));
    ui->progressBar->setValue(0);
}

UpdateScriptsDialog::~UpdateScriptsDialog()
{
    delete ui;
}

void UpdateScriptsDialog::on_checkButton_clicked()
{
    system("rm -Rf ~/.ubunsys/updates/updateLog.log");
    system("touch ~/.ubunsys/updates/updateLog.log");

    ui->textBrowser->clear();
    ui->textBrowser->setText(tr("Checking..."));

    ui->statusBar->showMessage(tr("Checking your scripts version and updating if necessary. Please wait..."));

    ui->progressBar->setValue(0);
    //######## Update ubuntuScripts
    ui->progressBar->setValue(15);
    ui->statusBar->showMessage(tr("Checking ubuntuscripts. Please wait..."));
    system("/usr/share/ubunsys/updateUbuntuScripts.sh");

    //######## Update ubuntupackages
    ui->progressBar->setValue(40);
    ui->statusBar->showMessage(tr("Checking ubuntupackages. Please wait..."));
    system("/usr/share/ubunsys/updateUbuntupackages.sh");

    //######## apt-fast checking
    ui->progressBar->setValue(65);
    ui->statusBar->showMessage(tr("Checking apt-fast. Please wait..."));
    system("/usr/share/ubunsys/apt-fastChecking.sh");

    //######## Update ubunsys
    ui->progressBar->setValue(85);
    ui->statusBar->showMessage(tr("Checking ubunsys. Please wait..."));
    system("/usr/share/ubunsys/updateUbunsys.sh");

    ui->progressBar->setValue(100);

    ui->statusBar->showMessage(tr("Scripts version checked and updated if necessary. Close this window!"));

    //Show update output

    QFile file (QDir::homePath() + "/.ubunsys/updates/updateLog.log");

    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in (&file);

    ui->textBrowser->setText(in.readAll());

    //QFile::remove(QDir::homePath() + "/.ubunsys/updates/updateLog.log");
    //system("rm -Rf ~/.ubunsys/updates/updateLog.log");
    //system("touch ~/.ubunsys/updates/updateLog.log");

}

void UpdateScriptsDialog::on_closeUpdateDialogButton_clicked()
{
    ui->statusBar->showMessage(tr("Push to check scripts version and update if necessary."));

    ui->textBrowser->setText(tr("Waiting selection..."));
    ui->progressBar->setValue(0);
}
