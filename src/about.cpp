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

                  "<p align='left'>Credits to:</p></br>"

                  "<p align='left'>Icon based on <a href='https://thenounproject.com/term/terminal/715962/'>this</a> Author "
                  "<a href='https://thenounproject.com/bernar.novalyi'>Bernar Novalyi</a></p></br>"

                  "<p align='left'>Theme got from <a href='https://thenounproject.com/term/terminal/715962/'>here</a> Author "
                  "<a href='https://github.com/ColinDuquesnoy'>ColinDuquesnoyi</a></p></br>"

                  "<p align='left'>SQLite library based on <a href='https://github.com/katecpp/sql_with_qt'>this</a> Author "
                  "<a href='https://github.com/katecpp'>katecpp</a></p></br>"

                  "<p align='left'>Sources:</p></br>"

                  "<p align='left'><a href='https://github.com/adgellida/ubunsys' style='color:red'>Github Repo </a> - Updated</p></br>"

                  "<p align='left'><a href='https://gitlab.com/adgellida/ubunsys' style='color:red'>Gitlab Repo</a> - Updated</p></br>"

                  "<p align='left'><a href='https://sourceforge.net/projects/ubunsys' style='color:red'>Sourceforge</a> - Updated</p></br>"

                  "<p align='left'><a href='https://launchpad.net/~adgellida/+archive/ubuntu/ubunsys' style='color:red'>Launchpad PPA</a> - Updated</p></br>"

                  "<p align='left'><a href='https://www.pling.com/p/1179908' style='color:red'>Linux-apps</a> - Updated</p></br>"

                  "<p align='left'><a href='' style='color:red'></a></p></br>"));

    about.setInformativeText(tr("Copyright (c) 2020 all rights reserved\n\n\GPL v2\n\nAntonio David Gellida Lavara\n\nadgellida@gmail.com\n\n"
                             "v2020.03.22"));

    about.setWindowTitle(tr("About"));

    about.setStandardButtons(QMessageBox::Ok);
    about.setIconPixmap(QPixmap(":/images/ubunsys.png"));
    about.setWindowIcon(QIcon(":/images/ubunsys.png"));
    //about.setIcon(":/images/ubunsys.png");
    about.setDefaultButton(QMessageBox::Ok);

    about.show();
    about.exec();
}
