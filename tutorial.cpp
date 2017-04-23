#include "mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

///////////////////////TUTORIAL///////////////////////

void MainWindow::on_actionTutorial_triggered()
{
    QMessageBox information;

    information.setTextFormat(Qt::RichText);   //this is what makes the links clickable
    information.setText("<p align='left'><b>ubunsys</b></p></br>"
                  "<p align='left'>Recommended steps:</p></br>"
                  "<p align='left'>1. Push on 'Update scripts' button</p></br>"
                  "<p align='left'>Near the program version (green up arrow)</p></br>"
                  "<p align='left'>2. Push on 'Backup sudoers file'</p></br>"
                  "<p align='left'>3. Then push on 'Enable sudo without pass'</p></br>"
                  "<p align='left'>\n</p></br>"
                  "<p align='left'>This way you can execute commands without questioning your sudo pass each time. More quick so</p></br>"
                  "<p align='left'>You always can go to default pushing 'Import sudoers file' and selecting your backuped file before</p></br>");

    information.setWindowTitle("Tutorial");
    information.setStyleSheet("QLabel{width: 300px; min-width: 300px; max-width: 300px;}");
    information.setStandardButtons(QMessageBox::Ok);
    information.setIconPixmap(QPixmap(":/images/ubunsys.ico"));
    information.setWindowIcon(QIcon(":/images/ubunsys.ico"));
    information.setDefaultButton(QMessageBox::Ok);

    information.show();
    information.exec();
}
