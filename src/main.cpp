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

        //13.######## firstTimeCreationDB
        //######## Selection

        QString firstTimeCreationDB = db.getStatus("firstTimeCreationDB");

        if(firstTimeCreationDB != "false"){

        qDebug() << "Creating database for first use";

        db.createTable();   // Creates a table if it doens't exist. Otherwise, it will use existing table.

        //initializing values of database begin
        //1.########
        db.addNameStatus("firewallStatus", "Disabled");
        //2.########
        db.addNameStatus("HideStartupItems", "Disabled");
        //3.########
        db.addNameStatus("updateNotif", "false");
        //4.################################################
        db.addNameStatus("sudoWOPass", "Disabled");
        //5.################################################
        db.addNameStatus("textEditor", "nano");
        //6.########
        db.addNameStatus("asterisks", "Disabled");
        //7.########
        db.addNameStatus("updateAuto", "Disabled");
        //8.########
        db.addNameStatus("hibernation", "Disabled");
        //9.########
        db.addNameStatus("lockScreen", "Enabled");
        //10.########
        db.addNameStatus("loginSound", "Enabled");
        //11.########
        db.addNameStatus("language", "English");
        //12.########
        db.addNameStatus("theme", "Default");
        //13.########
        db.addNameStatus("firstTimeCreationDB", "false");
        //14.########
        db.addNameStatus("apt-fastInstalled", "false");
        //15.########
        db.addNameStatus("appUpdatePresent", "false");
        //16.########
        db.addNameStatus("ubuntuScripts_now_check_commit_version", "NULL");
        //17.########
        db.addNameStatus("ubuntuScripts_last_check_commit_version", "NULL");
        //18.########
        db.addNameStatus("ubunsys_latest_version", "NULL");
        //19.########
        db.addNameStatus("ubunsys_installed_version", "NULL");
        //20.########
        db.addNameStatus("ubunsys_latest_version2", "NULL");

        }

        else qDebug() << "Database exists, no new is necessary";

    }
    else
    {
        qDebug() << "Database is not open!";
    }

    //Database initialization end


    //SETTINGS

    //11.######## language
    //######## Selection
/*

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

*/

    //12.######## theme
    //######## Selection

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
