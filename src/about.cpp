#include "mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include <QMovie>
#include <QLabel>

///////////////////////ABOUT///////////////////////

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox about;

    about.setTextFormat(Qt::RichText);   //this is what makes the links clickable
    about.setText(tr("<p align='left'><b>ubunsys</b></p></br>"
                  "<p align='left'>Configurable app referent to packages, updates and configurations</p></br>"
                  "<p align='left'>Contains bugs. Alpha status.</p></br>"
                  "<p align='left'>.</p></br>"

                  "<p align='left'><b>Credits to:</b></p></br>"

                  "<p align='left'>Art by "
                  "<a href='https://www.instagram.com/napafau/' style='color:pink' >napafau</a></p></br>"

                  "<p align='left'>Icon based on <a href='https://thenounproject.com/term/terminal/715962/' style='color:pink' >this</a> Author "
                  "<a href='https://thenounproject.com/bernar.novalyi' style='color:pink' >Bernar Novalyi</a></p></br>"

                  "<p align='left'>Theme got from <a href='https://thenounproject.com/term/terminal/715962/' style='color:pink' >here</a> Author "
                  "<a href='https://github.com/ColinDuquesnoy' style='color:pink' >ColinDuquesnoyi</a></p></br>"

                  "<p align='left'>SQLite library based on <a href='https://github.com/katecpp/sql_with_qt' style='color:pink' >this</a> Author "
                  "<a href='https://github.com/katecpp' style='color:pink' >katecpp</a></p></br>"

                  "<p align='left'>.</p></br>"

                  "<p align='left'><b>Sources:</b></p></br>"

                  "<p align='left'><a href='https://github.com/adgellida/ubunsys' style='color:red' >Github Repo </a> - Updated</p></br>"

                  "<p align='left'><a href='https://gitlab.com/adgellida/ubunsys' style='color:red' >Gitlab Repo</a> - Updated</p></br>"

                  "<p align='left'><a href='https://sourceforge.net/projects/ubunsys' style='color:red' >Sourceforge</a> - Updated</p></br>"

                  "<p align='left'><a href='https://launchpad.net/~adgellida/+archive/ubuntu/ubunsys' style='color:red' >Launchpad PPA</a> - Updated</p></br>"

                  "<p align='left'><a href='https://www.pling.com/p/1179908' style='color:red' >Linux-apps</a> - Updated</p></br>"

                  "<p align='left'><a href='' style='color:red' ></a></p></br>"));

    about.setInformativeText(tr("Copyright (c) 2020 all rights reserved\n\n\GPL v2\n\nAntonio David Gellida Lavara\n\nadgellida@gmail.com\n\nv2020.05.03"));

    about.setWindowTitle(tr("About"));

    about.setStandardButtons(QMessageBox::Ok);
    //about.setIconPixmap(QPixmap(":/images/panda.png"));

    about.setIconPixmap(QPixmap(":/images/ubunsys+panda.png"));
    about.setWindowIcon(QIcon(":/images/ubunsys.png"));
    //about.setIcon(":/images/ubunsys.png");
    about.setDefaultButton(QMessageBox::Ok);

    about.show();
    about.exec();
}
