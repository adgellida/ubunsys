# ubuntupackages
=============================================
<img src="http://design.ubuntu.com/wp-content/uploads/ubuntu-logo32.png" width="80">

A simple script to install ubuntu packages.

Compatible with any Debian based system:

Ubuntu, Xubuntu, Ubuntu MATE, Linux Mint, Kubuntu, Lubuntu, Ubuntu Kylin, Edubuntu...

Highly compatible with 16.10 (Yakkety Yak). Not all the 3rd party are compatible. Test it.

Instructions
=============================================
Do a backup of your "/etc/apt/sources.list.d" folder. Coming soon automatic...
Read the code and do your modifications.

Then do these basics steps:

1.Go to your selected script and modify it.

* "installpackages1" if you want to install some basic packages. Recommended for a little advanced users.
* "installpackages1-minimal" if you want to install some minimal packages. Recommended for normal users.
* "installpackages2" - migrated into 1.
* "installpackages3" if you want to check my extra proposed packages.
* "installpackages4" if you want to check more extra packages.
* "installpackages5" if you want to check the test packages.
* "installpackages6" if you want to check problematic packages.
* "installpackages7" if you want to check more alternative modes to install packages. To test yet.

2. Execute it.

Remember to add exec permissions to all scripts!

"sudo chmod 777 archiveName"

"sudo chmod 777 -R folderName"

"sudo chmod 777 -R ./ubuntupackages-master"

Important
=============================================
* You can crash your system. It hasn't been tested 100% yet. Give feedback!
* The desktop environment recommended tested right now is to use MATE desktop.
* Be careful with unstables repos, comment them if you want.
* If there are connectivity problems select your best server on Software & Updates!
* If you want to know more, go to the wiki of this repo [here](https://github.com/adgellida/ubuntupackages/wiki).

TO DO
=============================================
* Create app and integrate selectable boxes
* Install
* Uninstall
* Detect installed packages
* Generate a file to import or export
* Add more apps by user, not only programmer

Be care
=============================================
* errors

appgrid - disabled

ubuntu-after-install - disabled

* modified with ancient repos, on future all news

ubuntu-after-install

playdeb

getdeb

notepadqq

y-ppa-manager

grub-customizer

vibrancy-colors

Release notes
=============================================
You can check it [here](https://github.com/adgellida/ubuntupackages/releases)
