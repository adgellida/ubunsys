#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setOrganizationName("adgellida");
    app.setApplicationName("ubunsys");
    MainWindow w;
    w.show();

    return app.exec();
}
