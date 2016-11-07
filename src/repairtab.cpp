#include "mainwindow.h"
#include "ui_mainwindow.h"

///////////////////////REPAIR TAB///////////////////////
//http://www.upubuntu.com/2013/05/how-to-fix-broken-packages-using.html

void MainWindow::on_integrityCheckButton_clicked()
{
//  Reboots and checks integrity system

    ui->statusBar->showMessage(tr("Checking integrity system."));

    system("xterm -e bash -c '"
           "shutdown -Fr now"
           "; exec bash'");
}

void MainWindow::on_repairNetworkButton_clicked()
{
    ui->statusBar->showMessage(tr("Repairing network. Put Please wait."));

    system("xterm -e bash -c '"
           "service network-manager restart"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Network restarted or fix cancelled, check if ok now."));
}

void MainWindow::on_repairGPGKeys_clicked()
{
    ui->statusBar->showMessage(tr("Repairing missed GPG keys. Please wait."));

    system("xterm -e bash -c '"
           "sudo ./ppas/y-ppa-manager"
           " && "
           "sudo launchpad-getkeys"
           " && "
           "sudo apt-get -y update"
           " && "
           "exit"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Missed GPG keys repaired or fix cancelled, check if ok now."));

}

void MainWindow::on_fixBrokenPackagesButton_1_clicked()
{
    ui->statusBar->showMessage(tr("Executing package repair 1. Then close the terminal window."));

    system("xterm -e bash -c '"
           "sudo apt-get -y update"
           " && "
           "sudo apt-get -y upgrade"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Reparation 1 executed succesful. Test if all is corrected."));
}

void MainWindow::on_fixBrokenPackagesButton_2_clicked()
{
    ui->statusBar->showMessage(tr("Executing package repair 2. Then close the terminal window."));

    system("xterm -e bash -c '"
           "sudo apt-get -y --fix-broken install"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Reparation 2 executed succesful. Test if all is corrected."));
}

void MainWindow::on_fixBrokenPackagesButton_3_clicked()
{
    ui->statusBar->showMessage(tr("Executing package repair 3. Then close the terminal window."));

    system("xterm -e bash -c '"
           "rm /var/lib/apt/lists/* -vf"
           " && "
           "apt-get -y update"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Reparation 3 executed succesful. Test if all is corrected."));
}

void MainWindow::on_fixBrokenPackagesButton_4_clicked()
{
    ui->statusBar->showMessage(tr("Executing package repair 4. Then close the terminal window."));

    system("xterm -e bash -c '"
           "sudo apt-get -f install"
           " && "
           "sudo apt-get -y autoremove"
           " && "
           "sudo apt-get -y autoclean"
           " && "
           "sudo apt-get -y clean"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Reparation 4 executed succesful. Test if all is corrected."));
}

void MainWindow::on_fixBrokenPackagesButton_5_clicked()
{
    ui->statusBar->showMessage(tr("Executing package repair 5. Then close the terminal window."));

    system("xterm -e bash -c '"
           "sudo dpkg --configure -a"
           " && "
           "sudo apt-get -y update"
           "; exec bash'");

    ui->statusBar->showMessage(tr("Reparation 5 executed succesful. Test if all is corrected."));
}

void MainWindow::on_fixBrokenPackagesButton_6_clicked()
{
    system("xterm -e bash -c 'echo Open Ubuntu Software Center and if prompted to repair broken packages, click simply the repair button.; exec bash'");
}
