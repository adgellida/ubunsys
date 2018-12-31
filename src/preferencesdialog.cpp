#include "preferencesdialog.h"
#include "ui_preferencesdialog.h"
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QMessageBox>
#include <QProcess>
#include <dbmanager.h>

PreferencesDialog::PreferencesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PreferencesDialog)
{
    ui->setupUi(this);

    connect(ui->closePreferencesDialogButton, SIGNAL(clicked()),this, SIGNAL(CloseClicked()) );//////////

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

/*
    //language begin

    QString languageSelected = db.getStatus("language");

    if (languageSelected == "Spanish") ui->comboBox_2->setCurrentText("Spanish");

    else if (languageSelected == "Español") ui->comboBox_2->setCurrentText("Español");

    else if (languageSelected == "English") ui->comboBox_2->setCurrentText("English");

    else if (languageSelected == "Inglés")  ui->comboBox_2->setCurrentText("Inglés");

    //language end
*/

    //theme begin

    QString themeSelected = db.getStatus("theme");

    if (themeSelected == "Dark") ui->comboBox_1->setCurrentText("Dark");

    else if (themeSelected == "Default") ui->comboBox_1->setCurrentText("Default");

    //theme end


    //text editor begin

    QString actualTextEditorSelected = db.getStatus("textEditor");  //gets data from db

    ui->textEditor->setText(actualTextEditorSelected);  //puts actual data on gui

    //text editor end


}
PreferencesDialog::~PreferencesDialog()
{
    delete ui;
}

void PreferencesDialog::on_closePreferencesDialogButton_clicked()
{

    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);

    //language begin

    //QString language_selected = ui->comboBox_2->currentText();
    //db.updateStatus("language", language_selected);

    //language end


    //theme begin

    QString theme_selected = ui->comboBox_1->currentText();
    db.updateStatus("theme", theme_selected);

    //theme end


    //textEditor begin

    QString newTextEditorSelected = ui->textEditor->toPlainText();  //gets new data from gui

    db.updateStatus("textEditor", newTextEditorSelected);   //puts into db

    QFile file (QDir::homePath() + "/.ubunsys/configurations/newTextEditor.cfg");   //puts into new cfg file
    if ( file.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file );
        stream << newTextEditorSelected << endl;
    }

    system("~/.ubunsys/downloads/ubuntuScripts-master/textEditorChange && " //runs script to change textEditor
           "exit");

    //textEditor end

}

void PreferencesDialog::closeEvent(QCloseEvent *event)
{
    // do what you need here
    // then call parent's procedure

    on_closePreferencesDialogButton_clicked();

    QMessageBox::information(this,tr("Notification"),tr("Now app will restart with the last config setted"));

    QProcess::startDetached(QApplication::applicationFilePath());
    exit(12);

    QWidget::closeEvent(event);
}

void PreferencesDialog::on_restoreDefaultTextEditorButton_clicked()
{
    static const QString path (QDir::homePath() + "/.ubunsys/configurations/config.db");
    DbManager db(path);
    db.updateStatus("textEditor", "nano");
    ui->textEditor->setText("nano");

}
