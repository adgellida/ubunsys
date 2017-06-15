#include "mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

///////////////////////ABOUT///////////////////////

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox about;

    about.setTextFormat(Qt::RichText);   //this is what makes the links clickable
    about.setText(tr("<p align='left'><b>ubunsys</b></p></br>"
                  "<p align='left'>Configurable app referent to packages, updates and configurations</p></br>"
                  "<p align='left'>Built with Qt 5.7.1 for 17.04 zesty zapus."
                  "<p align='left'>Built with Qt 5.5.1 for 16.04 xenial xerus."
                  "<p align='left'>Contains bugs. Alpha test status.</p></br>"
                  "<p align='left'>Credits to <a href='https://thenounproject.com/bernar.novalyi/'>Bernar Novalyi</a> from Noun Project "
                  "that creates the app <a href='https://thenounproject.com/term/terminal/715962/'>icon</a> used here. Beautiful!</p></br>"
                  "<p align='left'><a href='https://launchpad.net/~adgellida/+archive/ubuntu/ubunsys'>Launchpad PPA</a> - Not updated</p></br>"
                  "<p align='left'><a href='https://github.com/adgellida/ubunsys'>Git Repo</a> - Updated</p></br>"));

    about.setInformativeText(tr("Copyright (c) 2017 all rights reserved\n\n\GPL v2\n\nAntonio David Gellida Lavara\n\nadgellida@gmail.com\n\n"
                             "v2017.06.15"));

    about.setWindowTitle(tr("About"));

    about.setStandardButtons(QMessageBox::Ok);
    about.setIconPixmap(QPixmap(":/images/ubunsys.ico"));
    about.setWindowIcon(QIcon(":/images/ubunsys.ico"));
    //about.setIcon(":/images/ubunsys.ico");
    about.setDefaultButton(QMessageBox::Ok);

    about.show();
    about.exec();
}
