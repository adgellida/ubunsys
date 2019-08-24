#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <dbmanager.h>

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
/*
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    //11.######## language
    //######## Selection

    if (db.isOpen())
    {
        QString languageSelected = db.getStatus("language");

        QTranslator translator;

        if ((languageSelected == "Spanish") || (languageSelected == "Español")){

            translator.load(":/languages/ubunsys_es_ES.qm");
            app.installTranslator(&translator);
            qDebug() << "Spanish loaded";
        }

        else if ((languageSelected == "English") || (languageSelected == "Inglés")){

            qDebug() << "English loaded";
        }

        else{

            qDebug() << "English loaded";
        }
    }

*/
    //12.######## theme
    //######## Selection


    //QString themeSelected = db.getStatus("theme");

    //if ((themeSelected == "Dark") || (themeSelected == "Oscuro")){

        QFile file(":qdarkstyle/style.qss");
        file.open(QFile::ReadOnly | QFile::Text);
        QTextStream ts(&file);
        qApp->setStyleSheet(ts.readAll());
        qDebug() << "Dark loaded";
    //}

    //else if ((themeSelected == "Default") || (themeSelected == "Por defecto")){

    //    qDebug() << "Default loaded";
    //}

    //else {

    //    qDebug() << "Default loaded";
    //}

    //theme end

    MainWindow w;
    w.show();

    return app.exec();
}
