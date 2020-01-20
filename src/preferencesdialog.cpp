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


    //language and theme begin

    QString languageSelected = db.getStatus("language");
    QString themeSelected = db.getStatus("theme");

    if (languageSelected == "English") ui->comboBox_language->setCurrentText("English");
    if (languageSelected == "Spanish") ui->comboBox_language->setCurrentText("Spanish");
    if (languageSelected == "Español") ui->comboBox_language->setCurrentText("Español");
    if (languageSelected == "Inglés") ui->comboBox_language->setCurrentText("Inglés");

    if (themeSelected == "Dark") ui->comboBox_theme->setCurrentText("Dark");
    if (themeSelected == "Oscuro") ui->comboBox_theme->setCurrentText("Oscuro");
    if (themeSelected == "Por defecto") ui->comboBox_theme->setCurrentText("Por defecto");
    if (themeSelected == "Default") ui->comboBox_theme->setCurrentText("Default");

    //language ant theme end

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

    //language and theme begin

    QString languageSelected = ui->comboBox_language->currentText();
    QString themeSelected = ui->comboBox_theme->currentText();

    if ((languageSelected == "English") && (themeSelected == "Dark")){
        db.updateStatus("language", "English");
        db.updateStatus("theme", "Dark");
    }

    if ((languageSelected == "Spanish") && (themeSelected == "Dark")){
        db.updateStatus("language", "Español");
        db.updateStatus("theme", "Oscuro");
    }

    if ((languageSelected == "Inglés") && (themeSelected == "Oscuro")){
        db.updateStatus("language", "English");
        db.updateStatus("theme", "Dark");
    }

    if ((languageSelected == "Español") && (themeSelected == "Oscuro")){
            db.updateStatus("language", "Español");
            db.updateStatus("theme", "Oscuro");
    }

    /////

    if ((languageSelected == "English") && (themeSelected == "Default")){
        db.updateStatus("language", "English");
        db.updateStatus("theme", "Default");
    }

    if ((languageSelected == "Spanish") && (themeSelected == "Default")){
        db.updateStatus("language", "Español");
        db.updateStatus("theme", "Por defecto");
    }

    if ((languageSelected == "Inglés") && (themeSelected == "Por defecto")){
        db.updateStatus("language", "English");
        db.updateStatus("theme", "Default");
    }

    if ((languageSelected == "Español") && (themeSelected == "Por defecto")){
            db.updateStatus("language", "Español");
            db.updateStatus("theme", "Por defecto");
    }









    //language and theme end


    //textEditor begin

    QString newTextEditorSelected = ui->textEditor->toPlainText();  //gets new data from gui
    db.updateStatus("textEditor", newTextEditorSelected);   //puts into db

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
