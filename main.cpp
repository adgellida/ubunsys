#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setOrganizationName("adgellida");
    app.setApplicationName("ubunsys");

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

    MainWindow w;
    w.show();

    return app.exec();
}
