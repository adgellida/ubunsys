#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rootfilesysproxymodel.h"
#include <QMessageBox>
#include <QFileDialog>
#include "packagesdialog.h"
#include "ui_packagesdialog.h"

PackagesDialog::PackagesDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PackagesDialog)
{
    ui->setupUi(this);

      fsModel = new RootFileSysProxyModel(new QFileSystemModel, QDir::homePath() + "/.ubunsys/downloads/ubuntupackages-master/apps1", this);
      ui->treeView->setModel(fsModel);
      connect(fsModel, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)), this, SLOT(onFileItemSelected()));
      ui->statusBar->showMessage(tr("Select your option"));
      //fsModel->setFilterRegExp(QRegExp(".png", Qt::CaseInsensitive,QRegExp::FixedString));
      //fsModel->setFilterKeyColumn(1);
      ui->treeView->expandAll();
}

PackagesDialog::~PackagesDialog()
{
    delete ui;
}

void PackagesDialog::onFileItemSelected()
{

    ui->statusBar->showMessage(tr("Selecting items..."));

    //Preparing to install

    QString filename = QDir::homePath() + "/.ubunsys/files/packagesToInstall.sh";
    QFile file(filename);
    QFile::remove(filename);

    qDebug() << Q_FUNC_INFO;
      foreach (QFileInfo fi, fsModel->checkedData())
      {

          if (file.open(QIODevice::ReadWrite | QIODevice::Append)) {
              QTextStream stream(&file);

              //stream << "#!/bin/bash\n\n" + fi.absoluteFilePath() << endl;
              stream << fi.absoluteFilePath() << endl;
              qDebug() << fi.absoluteFilePath();

              //Assign Permissions on each selection to selected file
              QString filenamePermissionsPath = fi.absoluteFilePath();
              QFile filenamePermissions(filenamePermissionsPath);
              filenamePermissions.setPermissions(QFile::ExeGroup | QFile::ExeGroup | QFile::ExeOther | QFile::ExeOwner | QFile::ExeUser | QFile::ReadGroup | QFile::ReadOther | QFile::ReadOwner | QFile::ReadUser | QFile::WriteGroup | QFile::WriteOther | QFile::WriteOwner | QFile::WriteUser);
          }

          file.close();
      }

    //Preparing to watch

    QString filename2 = QDir::homePath() + "/.ubunsys/files/packagesToWatch.sh";
    QFile file2(filename2);
    QFile::remove(filename2);

    qDebug() << Q_FUNC_INFO;
        foreach (QFileInfo fi, fsModel->checkedData())
        {

            if (file2.open(QIODevice::ReadWrite | QIODevice::Append)) {
                QTextStream stream(&file2);

                //stream << "#!/bin/bash\n\n" + fi.absoluteFilePath() << endl;
                stream << "xdg-open " + fi.absoluteFilePath()<< endl;
                qDebug() << "xdg-open " + fi.absoluteFilePath();

                //Assign Permissions on each selection to selected file
                QString filenamePermissionsPath = fi.absoluteFilePath();
                QFile filenamePermissions(filenamePermissionsPath);
                filenamePermissions.setPermissions(QFile::ExeGroup | QFile::ExeGroup | QFile::ExeOther | QFile::ExeOwner | QFile::ExeUser | QFile::ReadGroup | QFile::ReadOther | QFile::ReadOwner | QFile::ReadUser | QFile::WriteGroup | QFile::WriteOther | QFile::WriteOwner | QFile::WriteUser);
            }

            file2.close();
        }

}

void PackagesDialog::on_runScriptButton_clicked()
{
 /*   QString filename = QDir::homePath() + "/.ubunsys/files/scriptToInstall.sh";
    QFile file(filename);
    //QFile::remove(filename);

          if (file.open(QIODevice::WriteOnly)) {
              // Point a QTextStream object at the file
              QTextStream outStream(&file);

              // Write the line to the file
              outStream << "Victory!\n";

              // Close the file
              file.close();
         }
*/
    ui->statusBar->showMessage(tr("Executing Scripts selected. Please wait..."));

    system("sed -i '1i #!/bin/bash' ~/.ubunsys/files/packagesToInstall.sh");
    system("x-terminal-emulator -e '"
           "cd ~/.ubunsys/files && sudo chmod 777 ~/.ubunsys/files/packagesToInstall.sh && ~/.ubunsys/files/packagesToInstall.sh"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Scripts executed with or without errors. Check it!"));
}

void PackagesDialog::on_selectOfficialReposButton_clicked()
{
    fsModel = new RootFileSysProxyModel(new QFileSystemModel, QDir::homePath() + "/.ubunsys/downloads/ubuntupackages-master/apps1", this);
    ui->treeView->setModel(fsModel);
    ui->treeView->expandAll();
    connect(fsModel, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)), this, SLOT(onFileItemSelected()));

    ui->statusBar->showMessage(tr("Official Repos selected"));
}

void PackagesDialog::on_selectUnofficialReposButton_clicked()
{
    fsModel = new RootFileSysProxyModel(new QFileSystemModel, QDir::homePath(), this);
    ui->treeView->setModel(fsModel);
    connect(fsModel, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)), this, SLOT(onFileItemSelected()));

    ui->statusBar->showMessage(tr("Unofficial Repos selected"));
}

void PackagesDialog::on_runSavedScriptListButton_clicked()
{
    ui->statusBar->showMessage(tr("Select your list"));

    // Get filename

    QString filename=QFileDialog::getOpenFileName(
                    this,
                    tr("Import your script file here"),
                    QDir::homePath() + "/.ubunsys/backups/scriptsFiles",
                    //getenv("HOME"),
                    //"All files (*.*);;Bak files(*.bak)");
                    "List files(*.list)");

    //QMessageBox::information(this,tr("File Name"),filename);

    //ui->statusBar->showMessage(tr("Done. sudoers file restored succesful"));

    // Create a new file to execute script path

    QFile file (QDir::homePath() + "/.ubunsys/files/runImportedScript.sh");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << "#!/bin/bash\n\n" + filename;

    // optional, as QFile destructor will already do it:
    file.close();

    // run script formed

    system("x-terminal-emulator -e '"
           "sudo chmod 777 ~/.ubunsys/files/runImportedScript.sh"
           "&&"
           "sudo ~/.ubunsys/files/runImportedScript.sh"
           " && "
           "exit"
           "; exec bash'");

    //this would normally start the event loop, but is not needed for this
    //minimal example:
    //return app.exec();

    ui->statusBar->showMessage(tr("Scripts executed with or without errors. Check it!"));
}

void PackagesDialog::on_exportListButton_clicked()
{
    ui->statusBar->showMessage(tr("Exporting list"));

    system("x-terminal-emulator -e '"
           "~/.ubunsys/downloads/ubuntuScripts-master/047.exportList"
           " && "
           "exit"
           "; exec bash'");

    QMessageBox::information(this,tr("Notification"),tr("Backuped OK on \n\n") + QDir::homePath() + "/.ubunsys/backups/scriptsFiles");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void PackagesDialog::on_openInTextEditorButton_clicked()
{
    ui->statusBar->showMessage(tr("Opening Scripts selected. Please wait..."));

    system("sed -i '1i #!/bin/bash' ~/.ubunsys/files/packagesToWatch.sh");
    system("x-terminal-emulator -e '"
           "cd ~/.ubunsys/files && sudo chmod 777 ~/.ubunsys/files/packagesToWatch.sh && ~/.ubunsys/files/packagesToWatch.sh"
           " && "
           "echo Close this window!!"
           " && "
           "read"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}

void PackagesDialog::on_txtFilter_textChanged(const QString &arg1)
{
    ///fsModel = new RootFileSysProxyModel(new QFileSystemModel, QDir::homePath() + "/.ubunsys/downloads/ubuntupackages-master/apps1", this);
    ///ui->treeView->setModel(fsModel);

    //ui->treeView->expandAll();
    //connect(fsModel, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)), this, SLOT(onFileItemSelected()));

    connect(ui->txtFilter, SIGNAL(textChanged(QString)), fsModel, SLOT(setFilterRegExp(QString)));
    //QRegExp regExp ("*.cpp", Qt::CaseInsensitive);
    QRegExp regExp(arg1, Qt::CaseInsensitive,QRegExp::Wildcard);

    fsModel->setFilterRegExp(regExp);
    //ui->treeView->setModel(fsModel);

    ui->statusBar->showMessage(tr("Filtering..."));

    /////////////
    //Filemodel = new QFileSystemModel(this)                      ;
    //fsModel->set( QDir::NoDotAndDotDot | QDir::Files )  ;

    //QStringList filters;
    //filters << "*.txt";

    //fsModel.setNameFilters(filters);
    //fsModel.setNameFilterDisables(false);

    ui->treeView->setModel( fsModel );
    /////////////

    qDebug() << arg1;






    ///////////

    //QRegExp::PatternSyntax syntax = QRegExp::PatternSyntax(filterSyntaxComboBox->itemData(filterSyntaxComboBox->currentIndex()).toInt());

    //Qt::CaseSensitivity caseSensitivity = filterCaseSensitivityCheckBox->isChecked() ? Qt::CaseSensitive : Qt::CaseInsensitive;

    //QRegExp regExp(filterPatternLineEdit->text(), caseSensitivity, syntax);
    //fsModel->setFilterRegExp(regExp);


        ///////////



/*
    //fsModel->clear();
    ui->treeView->setModel(nullptr);
    ui->treeView->
    fsModel.
*/
}
