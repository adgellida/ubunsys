#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setOrganizationName("adgellida");
    app.setApplicationName("ubunsys");

    //Creating folder configurations

    system("test -d ~/.ubunsys || mkdir -p ~/.ubunsys && "
           "test -d ~/.ubunsys/configurations || mkdir -p ~/.ubunsys/configurations && "
           "exit");

    //SETTINGS

    //language

    QFile file (QDir::homePath() + "/.ubunsys/configurations/language.cfg");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){

        qDebug() << " Could not open the file for reading";

        }

    QTextStream in(&file);
    QString myText = in.readLine();
    qDebug() << myText;
    file.close();
    qDebug() << "File read";

    QString myText2 = "Spanish";

    QTranslator translator;

    if (myText == myText2) {

        //if (QLocale::system().language() == QLocale::Spanish){

            translator.load(":/languages/ubunsys_es_ES.qm");
            app.installTranslator(&translator);
            qDebug() << "Spanish loaded";

            //comboBox_2->setCurrentText("Spanish");

        }

    else qDebug() << "English loaded";

        //}

    //else
    //    translator.load("ubunsys_en_US.qm");

    //app.installTranslator(&translator);


    //theme

    QFile f(":qdarkstyle/style.qss");
    f.open(QFile::ReadOnly | QFile::Text);
    QTextStream ts(&f);
    qApp->setStyleSheet(ts.readAll());
    qDebug() << "Dark loaded";

    //theme change
/*
    int checkTheme = 1;

    if (checkTheme == 1){

        QFile file (QDir::homePath() + "/.ubunsys/configurations/theme.cfg");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){

            qDebug() << " Could not open the file for reading";

            }

        QTextStream in(&file);
        QString myText = in.readLine();
        qDebug() << myText;
        file.close();
        qDebug() << "File read";

        QString myText2 = "Dark";

        if (myText == myText2) {

            QFile f(":qdarkstyle/style.qss");
            f.open(QFile::ReadOnly | QFile::Text);
            QTextStream ts(&f);
            qApp->setStyleSheet(ts.readAll());
            qDebug() << "Dark loaded";

            //comboBox_1->setCurrentText("Dark");

            }

        else qDebug() << "Light loaded";

    }
*/
    MainWindow w;
    w.show();

    return app.exec();
}
