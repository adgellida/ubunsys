#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
#include <QMessageBox>
#include <dbmanager.h>
#include <QProcess>

///////////////////////UPDATES///////////////////////

//void MainWindow::on_updateScriptsButton_clicked()
//{
//    on_runUpdateDialog_clicked();
//}

//    Normal user

void MainWindow::on_updateAndUpgradeButton_clicked()
{

    process->start("sh", QStringList() << "-c" << "sudo apt-fast -y update && sudo apt-fast -y upgrade");

}

void MainWindow::on_basicPackagesInstallButton_clicked()
{
    process->start("sh", QStringList() << "-c" << "cd ~/.ubunsys/downloads/ubuntupackages-master && sudo ~/.ubunsys/downloads/ubuntupackages-master/packagesToInstall_20200419.list");
}

void MainWindow::on_cleanButton_clicked()
{
    process->start("sh", QStringList() << "-c" << "sudo apt-get -f install && sudo apt-get -y autoremove && sudo apt-get -y autoclean && sudo apt-get -y clean");
}

//    Advanced user

void MainWindow::on_dist_upgradeButton_clicked()
{
    process->start("sh", QStringList() << "-c" << "sudo apt-fast -y update && sudo apt-fast -y dist-upgrade");
}

void MainWindow::on_cleanKernelsButton_clicked()
{
    process->start("sh", QStringList() << "-c" << "sudo purge-old-kernels");
}

void MainWindow::on_listUpgradablePackagesButton_clicked()
{
    process->start("sh", QStringList() << "-c" << "sudo ~/.ubunsys/downloads/ubuntuScripts-dev/listUpgradablePackages");
}

void MainWindow::on_listLatestInstalledPackagesButton_clicked()
{
    process->start("sh", QStringList() << "-c" << "~/.ubunsys/downloads/ubuntuScripts-dev/listLatestInstalledPackages");
}

void MainWindow::on_upgradeLatestStableButton_clicked()
{
    QProcess::startDetached("xterm -e \"sudo do-release-upgrade; exec bash\"");
}

void MainWindow::on_installMainlineKernels_clicked()
{
    process->start("sh", QStringList() << "-c" << "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/mainline-ubuntu-kernel-installer && mainline-gtk");
}

void MainWindow::on_comboBoxUpdate_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "Disabled"){

        qDebug() << "Auto update disabled";

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-dev/066.remove_to_root_crontab"
               " && "
               "exit"
               "; exec bash'");
    }

    else if (arg1 == "Each hour"){

        qDebug() << "Each hour";

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-dev/066.remove_to_root_crontab"
               " && "
               "~/.ubunsys/downloads/ubuntuScripts-dev/065.add_to_root_crontab_each_hour"
               " && "
               "exit"
               "; exec bash'");
    }

    else if (arg1 == "At boot"){

        qDebug() << "At boot";

        system("xterm -e '"
               "~/.ubunsys/downloads/ubuntuScripts-dev/066.remove_to_root_crontab"
               " && "
               "~/.ubunsys/downloads/ubuntuScripts-dev/083.add_to_root_crontab_at_boot"
               " && "
               "exit"
               "; exec bash'");
    }

    MainWindow::checkUpdateAutoStatus();
}

//    Developer

void MainWindow::on_upgradeLatestDevButton_clicked()
{
    QProcess::startDetached("xterm -e \"sudo do-release-upgrade -d; exec bash\"");
}
