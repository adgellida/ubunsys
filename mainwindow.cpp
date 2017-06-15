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

    //another way to se tooltips
    //ui->enableSudoWithoutPassButton->setToolTip("Almost no more questions\n about your password");

    //Update scrips
    on_updateScriptsButton_clicked();

    ui->statusBar->showMessage(tr("Recommendation: Push Help -> Tutorial"));

    //ui->statusBar->showMessage(tr("Recommendation: First 'Backup sudoers file' and then 'Enable sudo without pass' for more speed"));

    system("xterm -e bash -c '"
           "mkdir -p ~/.ubunsys/backups/sudoersFiles"
           " && "
           "exit"
           "; exec bash'");
}

MainWindow::~MainWindow()
{
    delete ui;
}





