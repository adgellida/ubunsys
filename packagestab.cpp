#include "mainwindow.h"
#include "ui_mainwindow.h"


///////////////////////INSTALL TAB///////////////////////

void MainWindow::on_installSelectedPackagesButton_clicked()
{

    ui->statusBar->showMessage(tr("Installing selected packages. Please wait"));

    //001.freefilesync

    if (ui->checkBox_001->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/001.freefilesync"
               " && "
               "exit"
               "; exec bash'");
    }

    //002.dropbox

    if (ui->checkBox_002->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/002.dropbox"
               " && "
               "exit"
               "; exec bash'");
    }

    //003.megasync

    if (ui->checkBox_003->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/003.megasync"
               " && "
               "exit"
               "; exec bash'");
    }

    //004.apt-fast

    if (ui->checkBox_004->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/004.apt-fast"
               " && "
               "exit"
               "; exec bash'");
    }

    //005.y-ppa-manager

    if (ui->checkBox_005->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/005.y-ppa-manager"
               " && "
               "exit"
               "; exec bash'");
    }

    //006.getdeb

    if (ui->checkBox_006->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/006.getdeb"
               " && "
               "exit"
               "; exec bash'");
    }

    //007.playdeb

    if (ui->checkBox_007->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/007.playdeb"
               " && "
               "exit"
               "; exec bash'");
    }

    //008.mtp-support

    if (ui->checkBox_008->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/008.mtp-support"
               " && "
               "exit"
               "; exec bash'");
    }

    //009.xorg-edgers

    if (ui->checkBox_009->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/009.xorg-edgers"
               " && "
               "exit"
               "; exec bash'");
    }

    //010.oibaf

    if (ui->checkBox_010->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/010.oibaf"
               " && "
               "exit"
               "; exec bash'");
    }

    //011.graphics-drivers-team

    if (ui->checkBox_011->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/011.graphics-drivers-team"
               " && "
               "exit"
               "; exec bash'");
    }

    //012.keepassx

    if (ui->checkBox_012->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/012.keepassx"
               " && "
               "exit"
               "; exec bash'");
    }

    //013.ubuntu-restricted-extras

    if (ui->checkBox_013->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/013.ubuntu-restricted-extras"
               " && "
               "exit"
               "; exec bash'");
    }

    //014.ttf-ancient-fonts

    if (ui->checkBox_014->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/014.ttf-ancient-fonts"
               " && "
               "exit"
               "; exec bash'");
    }

    //015.synaptic

    if (ui->checkBox_015->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/015.synaptic"
               " && "
               "exit"
               "; exec bash'");
    }

    //016.preload

    if (ui->checkBox_016->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/016.preload"
               " && "
               "exit"
               "; exec bash'");
    }

    //017.prelink

    if (ui->checkBox_017->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/017.prelink"
               " && "
               "exit"
               "; exec bash'");
    }

    //018.gdebi

    if (ui->checkBox_018->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/018.gdebi"
               " && "
               "exit"
               "; exec bash'");
    }

    //019.ppa-purge

    if (ui->checkBox_019->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/019.ppa-purge"
               " && "
               "exit"
               "; exec bash'");
    }

    //020.gnome-disk-utility

    if (ui->checkBox_020->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/020.gnome-disk-utility"
               " && "
               "exit"
               "; exec bash'");
    }

    //021.gparted

    if (ui->checkBox_021->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/021.gparted"
               " && "
               "exit"
               "; exec bash'");
    }

    //022.gkrellm

    if (ui->checkBox_022->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/022.gkrellm"
               " && "
               "exit"
               "; exec bash'");
    }

    //023.mate-tweak

    if (ui->checkBox_023->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/023.mate-tweak"
               " && "
               "exit"
               "; exec bash'");
    }

    //024.recoll

    if (ui->checkBox_024->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/024.recoll"
               " && "
               "exit"
               "; exec bash'");
    }

    //025.brasero

    if (ui->checkBox_025->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/025.brasero"
               " && "
               "exit"
               "; exec bash'");
    }

    //026.k3b

    if (ui->checkBox_026->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/026.k3b"
               " && "
               "exit"
               "; exec bash'");
    }

    //027.gtkorphan

    if (ui->checkBox_027->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/027.gtkorphan"
               " && "
               "exit"
               "; exec bash'");
    }

    //028.byobu

    if (ui->checkBox_028->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/028.byobu"
               " && "
               "exit"
               "; exec bash'");
    }

    //029.gsmartcontrol

    if (ui->checkBox_029->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/029.gsmartcontrol"
               " && "
               "exit"
               "; exec bash'");
    }

    //030.software-center

    if (ui->checkBox_030->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/030.software-center"
               " && "
               "exit"
               "; exec bash'");
    }

    //031.gnome-software

    if (ui->checkBox_031->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/031.gnome-software"
               " && "
               "exit"
               "; exec bash'");
    }

    //032.test

    if (ui->checkBox_032->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/032.test"
               " && "
               "exit"
               "; exec bash'");
    }

    //033.appgrid

    if (ui->checkBox_033->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/033.appgrid"
               " && "
               "exit"
               "; exec bash'");
    }

    //034.mintStick

    if (ui->checkBox_034->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/034.mintStick"
               " && "
               "exit"
               "; exec bash'");
    }

    //035.mate-dock-applet

    if (ui->checkBox_035->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/035.mate-dock-applet"
               " && "
               "exit"
               "; exec bash'");
    }

    //036.extundelete

    if (ui->checkBox_036->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/036.extundelete"
               " && "
               "exit"
               "; exec bash'");
    }

    //037.cairo-dock

    if (ui->checkBox_037->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/037.cairo-dock"
               " && "
               "exit"
               "; exec bash'");
    }

    //038.ubuntu-after-install

    if (ui->checkBox_038->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/038.ubuntu-after-install"
               " && "
               "exit"
               "; exec bash'");
    }

    //039.ubutricks

    if (ui->checkBox_039->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/039.ubutricks"
               " && "
               "exit"
               "; exec bash'");
    }

    //040.postinstallerf

    if (ui->checkBox_040->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/040.postinstallerf"
               " && "
               "exit"
               "; exec bash'");
    }

    //041.teamviewer

    if (ui->checkBox_041->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/041.teamviewer"
               " && "
               "exit"
               "; exec bash'");
    }

    //042.converseen

    if (ui->checkBox_042->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/042.converseen"
               " && "
               "exit"
               "; exec bash'");
    }

    //043.synapse

    if (ui->checkBox_043->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/043.synapse"
               " && "
               "exit"
               "; exec bash'");
    }

    //044.grub-customizer

    if (ui->checkBox_044->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/044.grub-customizer"
               " && "
               "exit"
               "; exec bash'");
    }

    //045.bleachbit

    if (ui->checkBox_045->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/045.bleachbit"
               " && "
               "exit"
               "; exec bash'");
    }

    //046.clipit

    if (ui->checkBox_046->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/046.clipit"
               " && "
               "exit"
               "; exec bash'");
    }

    //047.screenfetch

    if (ui->checkBox_047->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/047.screenfetch"
               " && "
               "exit"
               "; exec bash'");
    }

    //048.i-nex

    if (ui->checkBox_048->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/048.i-nex"
               " && "
               "exit"
               "; exec bash'");
    }

    //049.angrysearch

    if (ui->checkBox_049->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/049.angrysearch"
               " && "
               "exit"
               "; exec bash'");
    }

    //050.fish-shell

    if (ui->checkBox_050->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/050.fish-shell"
               " && "
               "exit"
               "; exec bash'");
    }

    //051.furiusisomount

    if (ui->checkBox_051->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/051.furiusisomount"
               " && "
               "exit"
               "; exec bash'");
    }

    //052.ddrescue-gui

    if (ui->checkBox_052->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/052.ddrescue-gui"
               " && "
               "exit"
               "; exec bash'");
    }

    //053.unetbootin

    if (ui->checkBox_053->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/053.unetbootin"
               " && "
               "exit"
               "; exec bash'");
    }

    //054.manpages-es

    if (ui->checkBox_054->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/054.manpages-es"
               " && "
               "exit"
               "; exec bash'");
    }

    //055.asterisk-on-cli-passwords

    if (ui->checkBox_055->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/055.asterisk-on-cli-passwords"
               " && "
               "exit"
               "; exec bash'");
    }

    //056.disable-system-crash-reports

    if (ui->checkBox_056->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/056.disable-system-crash-reports"
               " && "
               "exit"
               "; exec bash'");
    }

    //057.vibrancy-colors

    if (ui->checkBox_057->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/057.vibrancy-colors"
               " && "
               "exit"
               "; exec bash'");
    }

    //058.flatabulous-theme

    if (ui->checkBox_058->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/058.flatabulous-theme"
               " && "
               "exit"
               "; exec bash'");
    }

    //059.aspell

    if (ui->checkBox_059->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/059.aspell"
               " && "
               "exit"
               "; exec bash'");
    }

    //060.myspell

    if (ui->checkBox_060->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/060.msypell"
               " && "
               "exit"
               "; exec bash'");
    }

    //061.gufw

    if (ui->checkBox_061->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/061.gufw"
               " && "
               "exit"
               "; exec bash'");
    }

    //062.gimp

    if (ui->checkBox_062->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/062.gimp"
               " && "
               "exit"
               "; exec bash'");
    }

    //063.gimp-edge

    if (ui->checkBox_063->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/063.gimp-edge"
               " && "
               "exit"
               "; exec bash'");
    }

    //064.krita-testing

    if (ui->checkBox_064->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/064.krita-testing"
               " && "
               "exit"
               "; exec bash'");
    }

    //065.gnome-exe-thumbnailer

    if (ui->checkBox_065->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/065.gnome-exe-thumbnailer"
               " && "
               "exit"
               "; exec bash'");
    }

    //066.shutter

    if (ui->checkBox_066->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/066.shutter"
               " && "
               "exit"
               "; exec bash'");
    }

    //067.inkscape-stable

    if (ui->checkBox_067->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/067.inkscape-stable"
               " && "
               "exit"
               "; exec bash'");
    }

    //068.inkscape-trunk

    if (ui->checkBox_068->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/068.inkscape-trunk"
               " && "
               "exit"
               "; exec bash'");
    }

    //069.qmmp

    if (ui->checkBox_069->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/069.qmmp"
               " && "
               "exit"
               "; exec bash'");
    }

    //070.kazam

    if (ui->checkBox_070->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/070.kazam"
               " && "
               "exit"
               "; exec bash'");
    }

    //071.sopcast

    if (ui->checkBox_071->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/071.sopcast"
               " && "
               "exit"
               "; exec bash'");
    }

    //072.smplayer

    if (ui->checkBox_072->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/072.smplayer"
               " && "
               "exit"
               "; exec bash'");
    }

    //073.handbrake

    if (ui->checkBox_073->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/073.handbrake"
               " && "
               "exit"
               "; exec bash'");
    }

    //074.ffmpeg

    if (ui->checkBox_074->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/074.ffmpeg"
               " && "
               "exit"
               "; exec bash'");
    }

    //075.vlc-stable

    if (ui->checkBox_075->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/075.vlc-stable"
               " && "
               "exit"
               "; exec bash'");
    }

    //076.vlc-daily

    if (ui->checkBox_076->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/076.vlc-daily"
               " && "
               "exit"
               "; exec bash'");
    }

    //077.notepadqq

    if (ui->checkBox_077->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/077.notepadqq"
               " && "
               "exit"
               "; exec bash'");
    }

    //078.openjdk-8

    if (ui->checkBox_078->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/078.openjdk-8"
               " && "
               "exit"
               "; exec bash'");
    }

    //079.openjdk-7

    if (ui->checkBox_079->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/079.openjdk-7"
               " && "
               "exit"
               "; exec bash'");
    }

    //080.meld

    if (ui->checkBox_080->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/080.meld"
               " && "
               "exit"
               "; exec bash'");
    }

    //081.dev-utils

    if (ui->checkBox_081->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/081.dev-utils"
               " && "
               "exit"
               "; exec bash'");
    }

    //082.git-stable

    if (ui->checkBox_082->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/082.git-stable"
               " && "
               "exit"
               "; exec bash'");
    }

    //083.smartgit

    if (ui->checkBox_083->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/083.smartgit"
               " && "
               "exit"
               "; exec bash'");
    }

    //084.flatpak

    if (ui->checkBox_084->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/084.flatpak"
               " && "
               "exit"
               "; exec bash'");
    }

    //085.dia

    if (ui->checkBox_085->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/085.dia"
               " && "
               "exit"
               "; exec bash'");
    }

    //086.blender

    if (ui->checkBox_086->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/086.blender"
               " && "
               "exit"
               "; exec bash'");
    }

    //087.fritzing

    if (ui->checkBox_087->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/087.fritzing"
               " && "
               "exit"
               "; exec bash'");
    }

    //088.uecide

    if (ui->checkBox_088->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/088.uecide"
               " && "
               "exit"
               "; exec bash'");
    }

    //089.arduino-ide

    if (ui->checkBox_089->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/089.arduino-ide"
               " && "
               "exit"
               "; exec bash'");
    }

    //090.arduino-studio

    if (ui->checkBox_090->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/090.arduino-studio"
               " && "
               "exit"
               "; exec bash'");
    }

    //091.git-rc

    if (ui->checkBox_091->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/091.git-rc"
               " && "
               "exit"
               "; exec bash'");
    }

    //092.git-gui

    if (ui->checkBox_092->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/092.git-gui"
               " && "
               "exit"
               "; exec bash'");
    }

    //093.qtcreator

    if (ui->checkBox_093->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/093.qtcreator"
               " && "
               "exit"
               "; exec bash'");
    }

    //094.kicad

    if (ui->checkBox_094->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/094.kicad"
               " && "
               "exit"
               "; exec bash'");
    }

    //100.vivaldi-browser

    if (ui->checkBox_100->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/100.vivaldi-browser"
               " && "
               "exit"
               "; exec bash'");
    }

    //101.google-chrome-stable

    if (ui->checkBox_101->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/101.google-chrome-stable"
               " && "
               "exit"
               "; exec bash'");
    }

    //102.google-chrome-unstable

    if (ui->checkBox_102->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/102.google-chrome-unstable"
               " && "
               "exit"
               "; exec bash'");
    }

    //103.chromium

    if (ui->checkBox_103->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/103.chromium"
               " && "
               "exit"
               "; exec bash'");
    }

    //104.firefox

    if (ui->checkBox_104->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/104.firefox"
               " && "
               "exit"
               "; exec bash'");
    }

    //105.firefox-trunk

    if (ui->checkBox_105->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/105.firefox-trunk"
               " && "
               "exit"
               "; exec bash'");
    }

    //106.ubuntu-mozilla-security

    if (ui->checkBox_106->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/106.ubuntu-mozilla-security"
               " && "
               "exit"
               "; exec bash'");
    }

    //107.pepper-flash-for-chromium

    if (ui->checkBox_107->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/107.pepper-flash-for-chromium"
               " && "
               "exit"
               "; exec bash'");
    }

    //108.pepper-flash-for-firefox

    if (ui->checkBox_108->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/108.pepper-flash-for-firefox"
               " && "
               "exit"
               "; exec bash'");
    }

    //109.tor-browser

    if (ui->checkBox_109->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/109.tor-browser"
               " && "
               "exit"
               "; exec bash'");
    }

    //110.skype

    if (ui->checkBox_110->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/110.skype"
               " && "
               "exit"
               "; exec bash'");
    }

    //111.mumble

    if (ui->checkBox_111->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/111.mumble"
               " && "
               "exit"
               "; exec bash'");
    }

    //112.wire

    if (ui->checkBox_112->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/112.wire"
               " && "
               "exit"
               "; exec bash'");
    }

    //113.telegram

    if (ui->checkBox_113->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/113.telegram"
               " && "
               "exit"
               "; exec bash'");
    }

    //114.facebook-messenger-desktop

    if (ui->checkBox_114->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/114.facebook-messenger-desktop"
               " && "
               "exit"
               "; exec bash'");
    }

    //115.whatsie

    if (ui->checkBox_115->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/115.whatsie"
               " && "
               "exit"
               "; exec bash'");
    }

    //116.compress-uncompress-utils

    if (ui->checkBox_116->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/116.compress-uncompress-utils"
               " && "
               "exit"
               "; exec bash'");
    }

    //117.jdownloader-beta

    if (ui->checkBox_117->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/117.jdownloader-beta"
               " && "
               "exit"
               "; exec bash'");
    }

    //118.jdownloader-stable

    if (ui->checkBox_118->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/118.jdownloader-stable"
               " && "
               "exit"
               "; exec bash'");
    }

    //119.peerflix

    if (ui->checkBox_119->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/119.peerflix"
               " && "
               "exit"
               "; exec bash'");
    }

    //120.samba

    if (ui->checkBox_120->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/120.samba"
               " && "
               "exit"
               "; exec bash'");
    }

    //121.evolution

    if (ui->checkBox_121->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/121.evolution"
               " && "
               "exit"
               "; exec bash'");
    }

    //122.libreoffice

    if (ui->checkBox_122->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/122.libreoffice"
               " && "
               "exit"
               "; exec bash'");
    }

    //123.qpdfview

    if (ui->checkBox_123->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/123.qpdfview"
               " && "
               "exit"
               "; exec bash'");
    }

    //124.thunderbird-nightly

    if (ui->checkBox_124->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/124.thunderbird-nightly"
               " && "
               "exit"
               "; exec bash'");
    }

    //######## Games

    //125.steam

    if (ui->checkBox_125->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/125.steam"
               " && "
               "exit"
               "; exec bash'");
    }

    //126.uninstallpackages

    if (ui->checkBox_126->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/126.uninstallpackages"
               " && "
               "exit"
               "; exec bash'");
    }

    //130.spaceview

    if (ui->checkBox_130->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/130.spaceview"
               " && "
               "exit"
               "; exec bash'");
    }

    //132.ukuu

    if (ui->checkBox_132->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/132.ukuu"
               " && "
               "exit"
               "; exec bash'");
    }

    //133.ubunsys

    if (ui->checkBox_133->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/133.ubunsys"
               " && "
               "exit"
               "; exec bash'");
    }

    //134.android-tools-adb

    if (ui->checkBox_134->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/134.android-tools-adb"
               " && "
               "exit"
               "; exec bash'");
    }

    //135.ubuntu-cleaner

    if (ui->checkBox_135->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/135.ubuntu-cleaner"
               " && "
               "exit"
               "; exec bash'");
    }

    //136.stacer

    if (ui->checkBox_136->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/136.stacer"
               " && "
               "exit"
               "; exec bash'");
    }

    //137.virtualbox

    if (ui->checkBox_137->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/137.virtualbox"
               " && "
               "exit"
               "; exec bash'");
    }
    //138.playonlinux

    if (ui->checkBox_138->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/138.playonlinux"
               " && "
               "exit"
               "; exec bash'");
    }

    //139.kubuntu-ci-unstable

    if (ui->checkBox_139->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/139.kubuntu-ci-unstable"
               " && "
               "exit"
               "; exec bash'");
    }

    //140.qt5ct

    if (ui->checkBox_140->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/140.qt5ct"
               " && "
               "exit"
               "; exec bash'");
    }

    //141.wakeonlan

    if (ui->checkBox_141->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/141.wakeonlan"
               " && "
               "exit"
               "; exec bash'");
    }

    //142.youtube-dlg

    if (ui->checkBox_142->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/142.youtube-dlg"
               " && "
               "exit"
               "; exec bash'");
    }

    //143.chaoticrage

    if (ui->checkBox_143->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/143.chaoticrage"
               " && "
               "exit"
               "; exec bash'");
    }

    //144.keepassxc

    if (ui->checkBox_144->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/144.keepassxc"
               " && "
               "exit"
               "; exec bash'");
    }

    //145.ucare

    if (ui->checkBox_145->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/145.ucare"
               " && "
               "exit"
               "; exec bash'");
    }

    //146.dekko

    if (ui->checkBox_146->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/146.dekko"
               " && "
               "exit"
               "; exec bash'");
    }

    //147.cerebro.

    if (ui->checkBox_147->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/147.cerebro"
               " && "
               "exit"
               "; exec bash'");
    }

    //148.rdesktop

    if (ui->checkBox_148->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/148.rdesktop"
               " && "
               "exit"
               "; exec bash'");
    }

    //149.remmina

    if (ui->checkBox_149->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/149.remmina"
               " && "
               "exit"
               "; exec bash'");
    }

    //150.spotify

    if (ui->checkBox_150->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/150.spotify"
               " && "
               "exit"
               "; exec bash'");
    }

    //151.insync

    if (ui->checkBox_151->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/151.insync"
               " && "
               "exit"
               "; exec bash'");
    }

    //152.discord-canary

    if (ui->checkBox_152->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/152.discord-canary"
               " && "
               "exit"
               "; exec bash'");
    }

    //153.discord

    if (ui->checkBox_153->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/153.discord"
               " && "
               "exit"
               "; exec bash'");
    }

    //154.green-recorder

    if (ui->checkBox_154->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/154.green-recorder"
               " && "
               "exit"
               "; exec bash'");
    }

    //155.slingscold

    if (ui->checkBox_155->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/155.slingscold"
               " && "
               "exit"
               "; exec bash'");
    }

    //156.harmony

    if (ui->checkBox_156->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/156.harmony"
               " && "
               "exit"
               "; exec bash'");
    }

    //157.rm-protection

    if (ui->checkBox_157->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/157.rm-protection"
               " && "
               "exit"
               "; exec bash'");
    }

    //158.powershell

    if (ui->checkBox_158->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/158.powershell"
               " && "
               "exit"
               "; exec bash'");
    }

    //159.komorebi

    if (ui->checkBox_159->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/159.komorebi"
               " && "
               "exit"
               "; exec bash'");
    }

    //160.scudcloud

    if (ui->checkBox_160->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/160.scudcloud"
               " && "
               "exit"
               "; exec bash'");
    }

    //161.krita-stable

    if (ui->checkBox_161->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/161.krita-stable"
               " && "
               "exit"
               "; exec bash'");
    }

    //162.caja-extensions1

    if (ui->checkBox_162->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/162.caja-extensions1"
               " && "
               "exit"
               "; exec bash'");
    }

    //163.caja-extensions1

    if (ui->checkBox_163->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/163.caja-extensions2"
               " && "
               "exit"
               "; exec bash'");
    }

    //164.tilix

    if (ui->checkBox_164->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/164.tilix"
               " && "
               "exit"
               "; exec bash'");
    }

    //165.i2p

    if (ui->checkBox_165->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/165.i2p"
               " && "
               "exit"
               "; exec bash'");
    }

    //166.fslint

    if (ui->checkBox_166->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/166.fslint"
               " && "
               "exit"
               "; exec bash'");
    }

    //167.qdirstat

    if (ui->checkBox_167->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/167.qdirstat"
               " && "
               "exit"
               "; exec bash'");
    }

    //168.debreate

    if (ui->checkBox_168->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/168.debreate"
               " && "
               "exit"
               "; exec bash'");
    }


    //169.nylas

    if (ui->checkBox_169->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/169.nylas"
               " && "
               "exit"
               "; exec bash'");
    }

    //170.resetter

    if (ui->checkBox_170->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/170.resetter"
               " && "
               "exit"
               "; exec bash'");
    }

    //171.shotwell

    if (ui->checkBox_171->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/171.shotwell"
               " && "
               "exit"
               "; exec bash'");
    }

    //172.acestream

    if (ui->checkBox_172->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/172.acestream"
               " && "
               "exit"
               "; exec bash'");
    }

    //173.indicator-keylock

    if (ui->checkBox_173->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/173.indicator-keylock"
               " && "
               "exit"
               "; exec bash'");
    }

    //174.katoolin

    if (ui->checkBox_174->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/174.katoolin"
               " && "
               "exit"
               "; exec bash'");
    }

    //175.apt-select

    if (ui->checkBox_175->isChecked())
    {
        system("xterm -e bash -c '"
               "sudo ~/.ubunsys/downloads/ubuntupackages-master/apps1/175.apt-select"
               " && "
               "exit"
               "; exec bash'");
    }

    //MainWindow::on_unselectAllButton_clicked();

    ui->statusBar->showMessage(tr("Packages installed succesful or with errors. Check it. Select another action"));

}

void MainWindow::on_unselectAllButton_clicked()
{

    ui->statusBar->showMessage(tr("All packages unselected"));

    ui->checkBox_001->setChecked(false);
    ui->checkBox_002->setChecked(false);
    ui->checkBox_003->setChecked(false);
    ui->checkBox_004->setChecked(false);
    ui->checkBox_005->setChecked(false);
    ui->checkBox_006->setChecked(false);
    ui->checkBox_007->setChecked(false);
    ui->checkBox_008->setChecked(false);
    ui->checkBox_009->setChecked(false);
    ui->checkBox_010->setChecked(false);
    ui->checkBox_011->setChecked(false);
    ui->checkBox_012->setChecked(false);
    ui->checkBox_013->setChecked(false);
    ui->checkBox_014->setChecked(false);
    ui->checkBox_015->setChecked(false);
    ui->checkBox_016->setChecked(false);
    ui->checkBox_017->setChecked(false);
    ui->checkBox_018->setChecked(false);
    ui->checkBox_019->setChecked(false);
    ui->checkBox_020->setChecked(false);
    ui->checkBox_021->setChecked(false);
    ui->checkBox_022->setChecked(false);
    ui->checkBox_023->setChecked(false);
    ui->checkBox_024->setChecked(false);
    ui->checkBox_025->setChecked(false);
    ui->checkBox_026->setChecked(false);
    ui->checkBox_027->setChecked(false);
    ui->checkBox_028->setChecked(false);
    ui->checkBox_029->setChecked(false);
    ui->checkBox_030->setChecked(false);
    ui->checkBox_031->setChecked(false);
    ui->checkBox_032->setChecked(false);
    ui->checkBox_033->setChecked(false);
    ui->checkBox_034->setChecked(false);
    ui->checkBox_035->setChecked(false);
    ui->checkBox_036->setChecked(false);
    ui->checkBox_037->setChecked(false);
    ui->checkBox_038->setChecked(false);
    ui->checkBox_039->setChecked(false);
    ui->checkBox_040->setChecked(false);
    ui->checkBox_041->setChecked(false);
    ui->checkBox_042->setChecked(false);
    ui->checkBox_043->setChecked(false);
    ui->checkBox_044->setChecked(false);
    ui->checkBox_045->setChecked(false);
    ui->checkBox_046->setChecked(false);
    ui->checkBox_047->setChecked(false);
    ui->checkBox_048->setChecked(false);
    ui->checkBox_049->setChecked(false);
    ui->checkBox_050->setChecked(false);
    ui->checkBox_051->setChecked(false);
    ui->checkBox_052->setChecked(false);
    ui->checkBox_053->setChecked(false);
    ui->checkBox_054->setChecked(false);
    ui->checkBox_055->setChecked(false);
    ui->checkBox_056->setChecked(false);
    ui->checkBox_057->setChecked(false);
    ui->checkBox_058->setChecked(false);
    ui->checkBox_059->setChecked(false);
    ui->checkBox_060->setChecked(false);
    ui->checkBox_061->setChecked(false);
    ui->checkBox_062->setChecked(false);
    ui->checkBox_063->setChecked(false);
    ui->checkBox_064->setChecked(false);
    ui->checkBox_065->setChecked(false);
    ui->checkBox_066->setChecked(false);
    ui->checkBox_067->setChecked(false);
    ui->checkBox_068->setChecked(false);
    ui->checkBox_069->setChecked(false);
    ui->checkBox_070->setChecked(false);
    ui->checkBox_071->setChecked(false);
    ui->checkBox_072->setChecked(false);
    ui->checkBox_073->setChecked(false);
    ui->checkBox_074->setChecked(false);
    ui->checkBox_075->setChecked(false);
    ui->checkBox_076->setChecked(false);
    ui->checkBox_077->setChecked(false);
    ui->checkBox_078->setChecked(false);
    ui->checkBox_079->setChecked(false);
    ui->checkBox_080->setChecked(false);
    ui->checkBox_081->setChecked(false);
    ui->checkBox_082->setChecked(false);
    ui->checkBox_083->setChecked(false);
    ui->checkBox_084->setChecked(false);
    ui->checkBox_085->setChecked(false);
    ui->checkBox_086->setChecked(false);
    ui->checkBox_087->setChecked(false);
    ui->checkBox_088->setChecked(false);
    ui->checkBox_089->setChecked(false);
    ui->checkBox_090->setChecked(false);
    ui->checkBox_091->setChecked(false);
    ui->checkBox_092->setChecked(false);
    ui->checkBox_093->setChecked(false);
    ui->checkBox_094->setChecked(false);
    ui->checkBox_100->setChecked(false);
    ui->checkBox_101->setChecked(false);
    ui->checkBox_102->setChecked(false);
    ui->checkBox_103->setChecked(false);
    ui->checkBox_104->setChecked(false);
    ui->checkBox_105->setChecked(false);
    ui->checkBox_106->setChecked(false);
    ui->checkBox_107->setChecked(false);
    ui->checkBox_108->setChecked(false);
    ui->checkBox_109->setChecked(false);
    ui->checkBox_110->setChecked(false);
    ui->checkBox_111->setChecked(false);
    ui->checkBox_112->setChecked(false);
    ui->checkBox_113->setChecked(false);
    ui->checkBox_114->setChecked(false);
    ui->checkBox_115->setChecked(false);
    ui->checkBox_116->setChecked(false);
    ui->checkBox_117->setChecked(false);
    ui->checkBox_118->setChecked(false);
    ui->checkBox_119->setChecked(false);
    ui->checkBox_120->setChecked(false);
    ui->checkBox_121->setChecked(false);
    ui->checkBox_122->setChecked(false);
    ui->checkBox_123->setChecked(false);
    ui->checkBox_124->setChecked(false);
    ui->checkBox_125->setChecked(false);
    ui->checkBox_126->setChecked(false);
    ui->checkBox_127->setChecked(false);
    ui->checkBox_128->setChecked(false);
    ui->checkBox_129->setChecked(false);
    ui->checkBox_130->setChecked(false);
    ui->checkBox_131->setChecked(false);
    ui->checkBox_132->setChecked(false);
    ui->checkBox_133->setChecked(false);
    ui->checkBox_134->setChecked(false);
    ui->checkBox_135->setChecked(false);
    ui->checkBox_136->setChecked(false);
    ui->checkBox_137->setChecked(false);
    ui->checkBox_138->setChecked(false);
    ui->checkBox_139->setChecked(false);
    ui->checkBox_140->setChecked(false);
    ui->checkBox_141->setChecked(false);
    ui->checkBox_142->setChecked(false);
    ui->checkBox_143->setChecked(false);
    ui->checkBox_144->setChecked(false);
    ui->checkBox_145->setChecked(false);
    ui->checkBox_146->setChecked(false);
    ui->checkBox_147->setChecked(false);
    ui->checkBox_148->setChecked(false);
    ui->checkBox_149->setChecked(false);
    ui->checkBox_150->setChecked(false);
    ui->checkBox_151->setChecked(false);
    ui->checkBox_152->setChecked(false);
    ui->checkBox_153->setChecked(false);
    ui->checkBox_154->setChecked(false);
    ui->checkBox_155->setChecked(false);
    ui->checkBox_156->setChecked(false);
    ui->checkBox_157->setChecked(false);
    ui->checkBox_158->setChecked(false);
    ui->checkBox_159->setChecked(false);
    ui->checkBox_160->setChecked(false);
    ui->checkBox_161->setChecked(false);
    ui->checkBox_162->setChecked(false);
    ui->checkBox_163->setChecked(false);
    ui->checkBox_164->setChecked(false);
    ui->checkBox_165->setChecked(false);
    ui->checkBox_166->setChecked(false);
    ui->checkBox_167->setChecked(false);
    ui->checkBox_168->setChecked(false);
    ui->checkBox_169->setChecked(false);
    ui->checkBox_170->setChecked(false);
    ui->checkBox_171->setChecked(false);
    ui->checkBox_172->setChecked(false);
    ui->checkBox_173->setChecked(false);
    ui->checkBox_174->setChecked(false);
    ui->checkBox_175->setChecked(false);
}

void MainWindow::on_selectAllButton_clicked()
{

    ui->statusBar->showMessage(tr("All packages selected"));

    ui->checkBox_001->setChecked(true);
    ui->checkBox_002->setChecked(true);
    ui->checkBox_003->setChecked(true);
    ui->checkBox_004->setChecked(true);
    ui->checkBox_005->setChecked(true);
    ui->checkBox_006->setChecked(true);
    ui->checkBox_007->setChecked(true);
    ui->checkBox_008->setChecked(true);
    ui->checkBox_009->setChecked(true);
    ui->checkBox_010->setChecked(true);
    ui->checkBox_011->setChecked(true);
    ui->checkBox_012->setChecked(true);
    ui->checkBox_013->setChecked(true);
    ui->checkBox_014->setChecked(true);
    ui->checkBox_015->setChecked(true);
    ui->checkBox_016->setChecked(true);
    ui->checkBox_017->setChecked(true);
    ui->checkBox_018->setChecked(true);
    ui->checkBox_019->setChecked(true);
    ui->checkBox_020->setChecked(true);
    ui->checkBox_021->setChecked(true);
    ui->checkBox_022->setChecked(true);
    ui->checkBox_023->setChecked(true);
    ui->checkBox_024->setChecked(true);
    ui->checkBox_025->setChecked(true);
    ui->checkBox_026->setChecked(true);
    ui->checkBox_027->setChecked(true);
    ui->checkBox_028->setChecked(true);
    ui->checkBox_029->setChecked(true);
    ui->checkBox_030->setChecked(true);
    ui->checkBox_031->setChecked(true);
    ui->checkBox_032->setChecked(true);
    ui->checkBox_033->setChecked(true);
    ui->checkBox_034->setChecked(true);
    ui->checkBox_035->setChecked(true);
    ui->checkBox_036->setChecked(true);
    ui->checkBox_037->setChecked(true);
    ui->checkBox_038->setChecked(true);
    ui->checkBox_039->setChecked(true);
    ui->checkBox_040->setChecked(true);
    ui->checkBox_041->setChecked(true);
    ui->checkBox_042->setChecked(true);
    ui->checkBox_043->setChecked(true);
    ui->checkBox_044->setChecked(true);
    ui->checkBox_045->setChecked(true);
    ui->checkBox_046->setChecked(true);
    ui->checkBox_047->setChecked(true);
    ui->checkBox_048->setChecked(true);
    ui->checkBox_049->setChecked(true);
    ui->checkBox_050->setChecked(true);
    ui->checkBox_051->setChecked(true);
    ui->checkBox_052->setChecked(true);
    ui->checkBox_053->setChecked(true);
    ui->checkBox_054->setChecked(true);
    ui->checkBox_055->setChecked(true);
    ui->checkBox_056->setChecked(true);
    ui->checkBox_057->setChecked(true);
    ui->checkBox_058->setChecked(true);
    ui->checkBox_059->setChecked(true);
    ui->checkBox_060->setChecked(true);
    ui->checkBox_061->setChecked(true);
    ui->checkBox_062->setChecked(true);
    ui->checkBox_063->setChecked(true);
    ui->checkBox_064->setChecked(true);
    ui->checkBox_065->setChecked(true);
    ui->checkBox_066->setChecked(true);
    ui->checkBox_067->setChecked(true);
    ui->checkBox_068->setChecked(true);
    ui->checkBox_069->setChecked(true);
    ui->checkBox_070->setChecked(true);
    ui->checkBox_071->setChecked(true);
    ui->checkBox_072->setChecked(true);
    ui->checkBox_073->setChecked(true);
    ui->checkBox_074->setChecked(true);
    ui->checkBox_075->setChecked(true);
    ui->checkBox_076->setChecked(true);
    ui->checkBox_077->setChecked(true);
    ui->checkBox_078->setChecked(true);
    ui->checkBox_079->setChecked(true);
    ui->checkBox_080->setChecked(true);
    ui->checkBox_081->setChecked(true);
    ui->checkBox_082->setChecked(true);
    ui->checkBox_083->setChecked(true);
    ui->checkBox_084->setChecked(true);
    ui->checkBox_085->setChecked(true);
    ui->checkBox_086->setChecked(true);
    ui->checkBox_087->setChecked(true);
    ui->checkBox_088->setChecked(true);
    ui->checkBox_089->setChecked(true);
    ui->checkBox_090->setChecked(true);
    ui->checkBox_091->setChecked(true);
    ui->checkBox_092->setChecked(true);
    ui->checkBox_093->setChecked(true);
    ui->checkBox_094->setChecked(true);
    ui->checkBox_100->setChecked(true);
    ui->checkBox_101->setChecked(true);
    ui->checkBox_102->setChecked(true);
    ui->checkBox_103->setChecked(true);
    ui->checkBox_104->setChecked(true);
    ui->checkBox_105->setChecked(true);
    ui->checkBox_106->setChecked(true);
    ui->checkBox_107->setChecked(true);
    ui->checkBox_108->setChecked(true);
    ui->checkBox_109->setChecked(true);
    ui->checkBox_110->setChecked(true);
    ui->checkBox_111->setChecked(true);
    ui->checkBox_112->setChecked(true);
    ui->checkBox_113->setChecked(true);
    ui->checkBox_114->setChecked(true);
    ui->checkBox_115->setChecked(true);
    ui->checkBox_116->setChecked(true);
    ui->checkBox_117->setChecked(true);
    ui->checkBox_118->setChecked(true);
    ui->checkBox_119->setChecked(true);
    ui->checkBox_120->setChecked(true);
    ui->checkBox_121->setChecked(true);
    ui->checkBox_122->setChecked(true);
    ui->checkBox_123->setChecked(true);
    ui->checkBox_124->setChecked(true);
    ui->checkBox_125->setChecked(true);
    ui->checkBox_126->setChecked(true);
    ui->checkBox_127->setChecked(true);
    ui->checkBox_128->setChecked(true);
    ui->checkBox_129->setChecked(true);
    ui->checkBox_130->setChecked(true);
    ui->checkBox_131->setChecked(true);
    ui->checkBox_132->setChecked(true);
    ui->checkBox_133->setChecked(true);
    ui->checkBox_134->setChecked(true);
    ui->checkBox_135->setChecked(true);
    ui->checkBox_136->setChecked(true);
    ui->checkBox_137->setChecked(true);
    ui->checkBox_138->setChecked(true);
    ui->checkBox_139->setChecked(true);
    ui->checkBox_140->setChecked(true);
    ui->checkBox_141->setChecked(true);
    ui->checkBox_142->setChecked(true);
    ui->checkBox_143->setChecked(true);
    ui->checkBox_144->setChecked(true);
    ui->checkBox_145->setChecked(true);
    ui->checkBox_146->setChecked(true);
    ui->checkBox_147->setChecked(true);
    ui->checkBox_148->setChecked(true);
    ui->checkBox_149->setChecked(true);
    ui->checkBox_150->setChecked(true);
    ui->checkBox_150->setChecked(true);
    ui->checkBox_151->setChecked(true);
    ui->checkBox_152->setChecked(true);
    ui->checkBox_153->setChecked(true);
    ui->checkBox_154->setChecked(true);
    ui->checkBox_155->setChecked(true);
    ui->checkBox_156->setChecked(true);
    ui->checkBox_157->setChecked(true);
    ui->checkBox_158->setChecked(true);
    ui->checkBox_159->setChecked(true);
    ui->checkBox_160->setChecked(true);
    ui->checkBox_161->setChecked(true);
    ui->checkBox_162->setChecked(true);
    ui->checkBox_163->setChecked(true);
    ui->checkBox_164->setChecked(true);
    ui->checkBox_165->setChecked(true);
    ui->checkBox_166->setChecked(true);
    ui->checkBox_167->setChecked(true);
    ui->checkBox_168->setChecked(true);
    ui->checkBox_169->setChecked(true);
    ui->checkBox_170->setChecked(true);
    ui->checkBox_171->setChecked(true);
    ui->checkBox_172->setChecked(true);
    ui->checkBox_173->setChecked(true);
    ui->checkBox_174->setChecked(true);
    ui->checkBox_175->setChecked(true);
}

void MainWindow::on_loadSelectionButton_clicked()
{

    qDebug() << "load selection pushed";

    ui->statusBar->showMessage(tr("Predefined selection loaded"));

    //First

    ui->checkBox_001->setChecked(true);
    ui->checkBox_002->setChecked(false);
    ui->checkBox_003->setChecked(true);
    ui->checkBox_004->setChecked(true);
    ui->checkBox_005->setChecked(true);
    ui->checkBox_006->setChecked(true);
    ui->checkBox_007->setChecked(true);
    ui->checkBox_008->setChecked(true);
    ui->checkBox_009->setChecked(false);
    ui->checkBox_010->setChecked(false);
    ui->checkBox_011->setChecked(false);
    ui->checkBox_012->setChecked(true);
    ui->checkBox_013->setChecked(true);
    ui->checkBox_014->setChecked(true);
    ui->checkBox_015->setChecked(true);
    ui->checkBox_016->setChecked(true);
    ui->checkBox_017->setChecked(true);
    ui->checkBox_018->setChecked(true);
    ui->checkBox_019->setChecked(true);
    ui->checkBox_020->setChecked(true);
    ui->checkBox_021->setChecked(true);
    ui->checkBox_022->setChecked(false);
    ui->checkBox_023->setChecked(false);
    ui->checkBox_024->setChecked(true);
    ui->checkBox_025->setChecked(true);
    ui->checkBox_026->setChecked(false);
    ui->checkBox_027->setChecked(true);
    ui->checkBox_028->setChecked(true);
    ui->checkBox_029->setChecked(true);
    ui->checkBox_030->setChecked(false);
    ui->checkBox_031->setChecked(false);
    ui->checkBox_032->setChecked(false);
    ui->checkBox_033->setChecked(false);
    ui->checkBox_034->setChecked(true);
    ui->checkBox_035->setChecked(true);
    ui->checkBox_036->setChecked(true);
    ui->checkBox_037->setChecked(false);
    ui->checkBox_038->setChecked(false);
    ui->checkBox_039->setChecked(false);
    ui->checkBox_040->setChecked(false);
    ui->checkBox_041->setChecked(true);
    ui->checkBox_042->setChecked(true);
    ui->checkBox_043->setChecked(true);
    ui->checkBox_044->setChecked(true);
    ui->checkBox_045->setChecked(true);
    ui->checkBox_046->setChecked(true);
    ui->checkBox_047->setChecked(true);
    ui->checkBox_048->setChecked(true);
    ui->checkBox_049->setChecked(false);
    ui->checkBox_050->setChecked(false);
    ui->checkBox_051->setChecked(false);
    ui->checkBox_052->setChecked(false);
    ui->checkBox_053->setChecked(false);
    ui->checkBox_054->setChecked(true);
    ui->checkBox_055->setChecked(true);
    ui->checkBox_056->setChecked(false);
    ui->checkBox_057->setChecked(true);
    ui->checkBox_058->setChecked(false);
    ui->checkBox_059->setChecked(true);
    ui->checkBox_060->setChecked(false);
    ui->checkBox_061->setChecked(true);
    ui->checkBox_062->setChecked(true);
    ui->checkBox_063->setChecked(false);
    ui->checkBox_064->setChecked(false);
    ui->checkBox_065->setChecked(true);
    ui->checkBox_066->setChecked(true);
    ui->checkBox_067->setChecked(false);
    ui->checkBox_068->setChecked(false);
    ui->checkBox_069->setChecked(true);
    ui->checkBox_070->setChecked(true);
    ui->checkBox_071->setChecked(false);
    ui->checkBox_072->setChecked(false);
    ui->checkBox_073->setChecked(false);
    ui->checkBox_074->setChecked(true);
    ui->checkBox_075->setChecked(true);
    ui->checkBox_076->setChecked(false);
    ui->checkBox_077->setChecked(true);
    ui->checkBox_078->setChecked(true);
    ui->checkBox_079->setChecked(false);
    ui->checkBox_080->setChecked(true);
    ui->checkBox_081->setChecked(true);
    ui->checkBox_082->setChecked(false);
    ui->checkBox_083->setChecked(true);
    ui->checkBox_084->setChecked(false);
    ui->checkBox_085->setChecked(false);
    ui->checkBox_086->setChecked(false);
    ui->checkBox_087->setChecked(false);
    ui->checkBox_088->setChecked(false);
    ui->checkBox_089->setChecked(false);
    ui->checkBox_090->setChecked(false);
    ui->checkBox_091->setChecked(false);
    ui->checkBox_092->setChecked(false);
    ui->checkBox_093->setChecked(false);
    ui->checkBox_094->setChecked(false);
    ui->checkBox_100->setChecked(false);
    ui->checkBox_101->setChecked(true);
    ui->checkBox_102->setChecked(false);
    ui->checkBox_103->setChecked(false);
    ui->checkBox_104->setChecked(false);
    ui->checkBox_105->setChecked(false);
    ui->checkBox_106->setChecked(false);
    ui->checkBox_107->setChecked(false);
    ui->checkBox_108->setChecked(false);
    ui->checkBox_109->setChecked(false);
    ui->checkBox_110->setChecked(false);
    ui->checkBox_111->setChecked(false);
    ui->checkBox_112->setChecked(false);
    ui->checkBox_113->setChecked(true);
    ui->checkBox_114->setChecked(false);
    ui->checkBox_115->setChecked(false);
    ui->checkBox_116->setChecked(true);
    ui->checkBox_117->setChecked(true);
    ui->checkBox_118->setChecked(false);
    ui->checkBox_119->setChecked(false);
    ui->checkBox_120->setChecked(false);
    ui->checkBox_121->setChecked(true);
    ui->checkBox_122->setChecked(true);
    ui->checkBox_123->setChecked(false);
    ui->checkBox_124->setChecked(false);
    ui->checkBox_125->setChecked(false);
    ui->checkBox_126->setChecked(true);
    ui->checkBox_127->setChecked(false);
    ui->checkBox_128->setChecked(false);
    ui->checkBox_129->setChecked(false);
    ui->checkBox_130->setChecked(false);
    ui->checkBox_131->setChecked(false);
    ui->checkBox_132->setChecked(false);
    ui->checkBox_133->setChecked(false);
    ui->checkBox_134->setChecked(true);
    ui->checkBox_135->setChecked(false);
    ui->checkBox_136->setChecked(false);
    ui->checkBox_137->setChecked(false);
    ui->checkBox_138->setChecked(false);
    ui->checkBox_139->setChecked(false);
    ui->checkBox_140->setChecked(false);
    ui->checkBox_141->setChecked(false);
    ui->checkBox_142->setChecked(false);
    ui->checkBox_143->setChecked(false);
    ui->checkBox_144->setChecked(false);
    ui->checkBox_145->setChecked(false);
    ui->checkBox_146->setChecked(false);
    ui->checkBox_147->setChecked(false);
    ui->checkBox_148->setChecked(false);
    ui->checkBox_149->setChecked(true);
    ui->checkBox_150->setChecked(false);
    ui->checkBox_151->setChecked(true);
    ui->checkBox_152->setChecked(false);
    ui->checkBox_153->setChecked(false);
    ui->checkBox_154->setChecked(false);
    ui->checkBox_155->setChecked(false);
    ui->checkBox_156->setChecked(false);
    ui->checkBox_157->setChecked(false);
    ui->checkBox_158->setChecked(false);
    ui->checkBox_159->setChecked(false);
    ui->checkBox_160->setChecked(false);
    ui->checkBox_161->setChecked(true);
    ui->checkBox_162->setChecked(false);
    ui->checkBox_163->setChecked(false);
    ui->checkBox_164->setChecked(true);
    ui->checkBox_165->setChecked(false);
    ui->checkBox_166->setChecked(false);
    ui->checkBox_167->setChecked(false);
    ui->checkBox_168->setChecked(true);
    ui->checkBox_169->setChecked(false);
    ui->checkBox_170->setChecked(false);
    ui->checkBox_171->setChecked(false);
    ui->checkBox_172->setChecked(true);
    ui->checkBox_173->setChecked(false);
    ui->checkBox_174->setChecked(false);
    ui->checkBox_175->setChecked(false);
}

//not implemented yet

void MainWindow::on_uninstallSelectedPackagesButton_clicked()
{

}

//not implemented yet

void MainWindow::on_saveSelectionButton_clicked()
{

}
