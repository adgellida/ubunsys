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
}

PackagesDialog::~PackagesDialog()
{
    delete ui;
}

void PackagesDialog::onFileItemSelected()
{
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
          }

          file.close();
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

    system("sed -i '1i #!/bin/bash' ~/.ubunsys/files/packagesToInstall.sh");
    system("xterm -e bash -c '"
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
    connect(fsModel, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)), this, SLOT(onFileItemSelected()));
}

void PackagesDialog::on_selectUnofficialReposButton_clicked()
{
    fsModel = new RootFileSysProxyModel(new QFileSystemModel, QDir::homePath(), this);
    ui->treeView->setModel(fsModel);
    connect(fsModel, SIGNAL(dataChanged(QModelIndex,QModelIndex,QVector<int>)), this, SLOT(onFileItemSelected()));
}

void PackagesDialog::on_runSavedScriptButton_clicked()
{
    // Get filename

    QString filename=QFileDialog::getOpenFileName(
                    this,
                    tr("Import your script file here"),
                    QDir::homePath() + "/.ubunsys/backups/scriptsFiles",
                    //getenv("HOME"),
                    //"All files (*.*);;Bak files(*.bak)");
                    "Bak files(*.bak)");

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

    system("xterm -e bash -c '"
           "sudo chmod 777 ~/.ubunsys/files/runImportedScript.sh"
           "&&"
           "sudo ~/.ubunsys/files/runImportedScript.sh"
           " && "
           "exit"
           "; exec bash'");

    //this would normally start the event loop, but is not needed for this
    //minimal example:
    //return app.exec();
}

void PackagesDialog::on_exportListButton_clicked()
{
   // ui->statusBar->showMessage(tr("Backuping sudoers"));

    system("xterm -e bash -c '"
           "~/.ubunsys/downloads/ubuntuScripts-master/047.exportList"
           " && "
           "exit"
           "; exec bash'");

    QMessageBox::information(this,tr("Notification"),tr("Backuped OK on \n\n") + QDir::homePath() + "/.ubunsys/backups/scriptsFiles");

    ui->statusBar->showMessage(tr("Done. Now select another action"));
}
