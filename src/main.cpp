#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setOrganizationName("adgellida");
    app.setApplicationName("ubunsys");

    //QCoreApplication::addLibraryPath("usr/share/ubunsys/lib");

    //language

    QTranslator translator;

    if (QLocale::system().language() == QLocale::Spanish){
        translator.load(":/languages/ubunsys_es_ES.qm");
        app.installTranslator(&translator);
    }
    //else
    //    translator.load("ubunsys_en_US.qm");

    //app.installTranslator(&translator);

    //language

    //test
    //UpdateScriptsDialog updateScriptsDialog2;
    //updateScriptsDialog2.setModal(true);
    //updateScriptsDialog2.exec();

    //style

    QFile f(":qdarkstyle/style.qss");
    if (!f.exists())
    {
        printf("Unable to set stylesheet, file not found\n");
    }
    else
    {
        f.open(QFile::ReadOnly | QFile::Text);
        QTextStream ts(&f);
        qApp->setStyleSheet(ts.readAll());
    }

    MainWindow w;
    w.show();

    return app.exec();
}
