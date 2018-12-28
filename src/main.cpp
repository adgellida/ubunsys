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

    //Database initialization begin
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    if (db.isOpen())
    {
        //db.removeAllNames();

        QString firstTimeCreationDB = db.getStatus("firstTimeCreationDB");

        if(firstTimeCreationDB != "false"){

        qDebug() << "Creating database for first use";

        db.createTable();   // Creates a table if it doens't exist. Otherwise, it will use existing table.

        //initializing values of database begin
        //1
        db.addNameStatus("firewallStatus", "Disabled");
        //2
        db.addNameStatus("checkHiddenStartupItemsStatus", "Disabled");
        //3
        db.addNameStatus("updateNotif", "false");
        //4
        db.addNameStatus("SudoWOPass", "Disabled");
        //5
        db.addNameStatus("textEditor", "nano");
        //6
        db.addNameStatus("asterisks", "Disabled");








        db.addNameStatus("firstTimeCreationDB", "false");               //2

        db.addNameStatus("apt-fastInstalled", "false");                 //2

        db.addNameStatus("language", "English");                        //2

        db.addNameStatus("theme", "Default");                           //2


        db.addNameStatus("hibernation", "Disabled");                    //2
        db.addNameStatus("lockScreen", "Enabled");                      //2
        db.addNameStatus("loginSound", "Enabled");                      //2
                             //2
        db.addNameStatus("updateAuto", "Disabled");                     //2


        }

        else qDebug() << "Database exists, no new is necessary";

    }
    else
    {
        qDebug() << "Database is not open!";
    }

    //Database initialization end


    //SETTINGS
/*
    //language begin

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

    //language end

*/
    //theme begin

    QString themeSelected = db.getStatus("theme");

    if (themeSelected == "Dark"){

        QFile file(":qdarkstyle/style.qss");
        file.open(QFile::ReadOnly | QFile::Text);
        QTextStream ts(&file);
        qApp->setStyleSheet(ts.readAll());
        qDebug() << "Dark loaded";
    }

    else if (themeSelected == "Default"){

        qDebug() << "Default loaded";
    }

    //theme end




    MainWindow w;
    w.show();

    return app.exec();
}
