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
                  "<p align='left'>Contains bugs. Alpha test status.</p></br>"
                  "<p align='left'>Credits to <a href='https://thenounproject.com/bernar.novalyi/'>Bernar Novalyi</a> from Noun Project "
                  "that creates the app <a href='https://thenounproject.com/term/terminal/715962/'>icon</a> used here. Beautiful!</p></br>"
                  "<p align='left'><a href='https://launchpad.net/~adgellida/+archive/ubuntu/ubunsys'>Launchpad PPA</a> - Updated</p></br>"
                  "<p align='left'><a href='https://github.com/adgellida/ubunsys'>Git Repo</a> - Updated</p></br>"));

    about.setInformativeText(tr("Copyright (c) 2017 all rights reserved\n\n\GPL v2\n\nAntonio David Gellida Lavara\n\nadgellida@gmail.com\n\n"
                             "v2017.09.09"));

    about.setWindowTitle(tr("About"));

    about.setStandardButtons(QMessageBox::Ok);
    about.setIconPixmap(QPixmap(":/images/ubunsys.png"));
    about.setWindowIcon(QIcon(":/images/ubunsys.png"));
    //about.setIcon(":/images/ubunsys.png");
    about.setDefaultButton(QMessageBox::Ok);

    about.show();
    about.exec();
}
