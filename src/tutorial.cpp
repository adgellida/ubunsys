#include "mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

///////////////////////TUTORIAL///////////////////////

void MainWindow::on_actionTutorial_triggered()
{
    QMessageBox information;

    information.setTextFormat(Qt::RichText);   //this is what makes the links clickable
    information.setText(tr("<p align='left'><b>ubunsys</b></p></br>"
                  "<p align='left'>Click <a href='https://github.com/adgellida/ubunsys/wiki/Tutorial_en'>here</a> to go to wiki."));

    //ui->statusBar->showMessage(tr("Checking integrity system"));
    information.setWindowTitle(tr("Tutorial"));
    information.setStyleSheet("QLabel{width: 300px; min-width: 300px; max-width: 300px;}");
    information.setStandardButtons(QMessageBox::Ok);
    information.setIconPixmap(QPixmap(":/images/ubunsys.png"));
    information.setWindowIcon(QIcon(":/images/ubunsys.png"));
    information.setDefaultButton(QMessageBox::Ok);

    information.show();
    information.exec();
}
