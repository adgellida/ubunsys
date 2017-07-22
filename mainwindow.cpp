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

    //another way to set tooltips
    //ui->enableSudoWithoutPassButton->setToolTip("Almost no more questions\n about your password");

    //Update scrips
    //on_updateScriptsButton_clicked();

    ui->statusBar->showMessage(tr("Recommendation: Push Help -> Tutorial"));

    //Creating folders

    system("x-terminal-emulator -e '"
           "test -d ~/.ubunsys || mkdir -p ~/.ubunsys && "
           "test -d ~/.ubunsys/downloads || mkdir -p ~/.ubunsys/downloads && "
           "test -d ~/.ubunsys/downloads/ubuntuScripts-master || mkdir -p ~/.ubunsys/downloads/ubuntuScripts-master && "
           "test -d ~/.ubunsys/files || mkdir -p ~/.ubunsys/files && "
           "test -d ~/.ubunsys/backups/scriptsFiles || mkdir -p ~/.ubunsys/backups/scriptsFiles && "
           "test -d ~/.ubunsys/backups/sudoersFiles || mkdir -p ~/.ubunsys/backups/sudoersFiles && "
           "exit"
           "; exec bash'");
}

MainWindow::~MainWindow()
{
    delete ui;
}
