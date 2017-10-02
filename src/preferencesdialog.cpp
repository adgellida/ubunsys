#include "preferencesdialog.h"
#include "ui_preferencesdialog.h"

PreferencesDialog::PreferencesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PreferencesDialog)
{
    ui->setupUi(this);

    connect(ui->closePreferencesDialogButton, SIGNAL(clicked()),this, SIGNAL(CloseClicked()) );//////////


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

    if (myText == myText2) {

            QString myText2 = "Spanish";
            ui->comboBox_2->setCurrentText(myText2);

        }

    else qDebug() << "English loaded";

        //}

    //else
    //    translator.load("ubunsys_en_US.qm");

    //app.installTranslator(&translator);


    //theme

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

            QString myText2 = "Dark";
            ui->comboBox_1->setCurrentText(myText2);

            }

        else qDebug() << "Light loaded";

    }
}
PreferencesDialog::~PreferencesDialog()
{
    delete ui;
}

void PreferencesDialog::on_closePreferencesDialogButton_clicked()
{
    qDebug() << "Close pushed2";

    QString language_selected = ui->comboBox_2->currentText();
    QString theme_selected = ui->comboBox_1->currentText();
    qDebug() << language_selected;
    qDebug() << theme_selected;

    QString language (QDir::homePath() + "/.ubunsys/configurations/language.cfg");
    QFile file_1( language );
    if ( file_1.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file_1 );
        stream << language_selected << endl;
    }

    QString theme (QDir::homePath() + "/.ubunsys/configurations/theme.cfg");
    QFile file_2( theme );
    if ( file_2.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file_2 );
        stream << theme_selected << endl;
    }

}
