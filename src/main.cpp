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

    //Database initialization
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    if (db.isOpen())
    {
        //db.removeAllNames();

        QString firstTimeCreationDB = db.getStatus("firstTimeCreationDB");

        if(firstTimeCreationDB != "false"){

        qDebug() << "Creating database for first use";

        db.createTable();   // Creates a table if it doens't exist. Otherwise, it will use existing table.

        //initializing values of database

        db.addNameStatus("firstTimeCreationDB", "false");
        db.addNameStatus("apt-fastInstalled", "false");
        db.addNameStatus("language", "English");
        db.addNameStatus("theme", "Default");
        db.addNameStatus("textEditor", "nano");
        db.addNameStatus("asterisks", "false");
        db.addNameStatus("hibernation", "false");
        db.addNameStatus("LockScreen", "false");
        db.addNameStatus("LoginSound", "false");
        db.addNameStatus("SudoWOPass", "false");
        db.addNameStatus("updateAuto", "false");

        //initializing values of database
        }

        else qDebug() << "Database exists, no new is necessary";

    }
    else
    {
        qDebug() << "Database is not open!";
    }

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


    //textEditor begin

    QString actualTextEditorSelected = db.getStatus("textEditor");

    QFile file (QDir::homePath() + "/.ubunsys/configurations/actualTextEditor.cfg");
    if ( file.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file );
        stream << actualTextEditorSelected << endl;
    }

    system("~/.ubunsys/downloads/ubuntuScripts-master/textEditorChange && "
           "exit");

    //textEditor end

    MainWindow w;
    w.show();

    return app.exec();
}
