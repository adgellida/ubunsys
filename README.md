<img src="https://raw.githubusercontent.com/adgellida/ubunsys/master/images/ubunsys.png" width="80"> ubunsys
=============================================

<p align="center">
  <a href="https://gitter.im/adgellida/ubunsys" target="_blank"><img src="https://badges.gitter.im/adgellida/ubunsys.svg" alt="chat"></a>
  <a href="https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=84KHR9VLK7XK8" target="_blank"><img src="https://img.shields.io/badge/Donate-PayPal-green.svg" alt="Donate with PayPal"></a>
  <a href="https://www.gnu.org/licenses/gpl-2.0.en.html" target="_blank"><img src="https://img.shields.io/badge/license-GPLv2-blue.svg" alt="GNU GPL v2"></a>
  <a href="https://github.com/adgellida/ubunsys/stargazers" target="_blank"><img src="https://img.shields.io/github/stars/adgellida/ubunsys.svg" alt="stars"></a>  
  <a href="https://github.com/adgellida/ubunsys/network" target="_blank"><img src="https://img.shields.io/github/forks/adgellida/ubunsys.svg" alt="forks"></a>
  <a href="https://github.com/adgellida/ubunsys/issues?q=is%3Aopen" target="_blank"><img src="https://img.shields.io/github/issues/adgellida/ubunsys.svg" alt="open issues"></a>
  <a href="https://github.com/adgellida/ubunsys/releases/latest" target="_blank"><img src="https://img.shields.io/github/downloads/adgellida/ubunsys/total.svg" alt="total downloads"></a>
  <a href="https://github.com/adgellida/ubunsys/releases/latest" target="_blank"><img src="https://img.shields.io/github/downloads/adgellida/ubunsys/v2017.07.22/total.svg" alt="total downloads latest release"></a> 
  <a href="https://github.com/adgellida/ubunsys/releases/latest" target="_blank"><img src="https://img.shields.io/badge/latest release-v2017.07.22-blue.svg" alt="latest release"></a>
</p>

<p align="left">
<a href="https://forthebadge.com/" target="_blank"><img src="https://raw.githubusercontent.com/adgellida/ubunsys/master/images/made-with-qt.png" alt="forthebadge"></a>
  <a href="https://www.qt.io" target="_blank"><img src="https://img.shields.io/badge/qt version for xenial-v5.7.1-green.svg" alt="qt version"></a>
  <a href="https://www.qt.io" target="_blank"><img src="https://img.shields.io/badge/qt version for zesty-v5.5.1-green.svg" alt="qt version"></a>
</p>

**Para Español pulsar [aqui](https://github.com/adgellida/ubunsys/blob/master/README_es_ES.md)**

Software installer of a helpful package list, able to do changes on system configuration, updates, execute improves, fixes, executing actions to blow of mouse click.

Ubuntu 16.04, 17.04 x64 specific.

**Very dangerous app in any points, if you don't know where you are touching or how to fix it, don't do it. For testing and knowledge purposes. It's not meant to be stable at the moment.**

Built with Qt 5.7.1 for 17.04 zesty zapus. Built with Qt 5.5.1 for 16.04 xenial xerus. This way it gets libraries from official repositories.

Feeded with [ubuntupackages](https://github.com/adgellida/ubuntupackages) and [ubuntuScripts](https://github.com/adgellida/ubuntuScripts).

Apps based on him:

* [winsys](https://github.com/adgellida/winsys).

Download from official sources - click on logo
=============================================

<p align="center">
  <a href="https://github.com/adgellida/ubunsys/releases" target="_blank"><img src="https://image.flaticon.com/icons/png/512/25/25231.png" width="80" alt="Github"></a>
  <a href="https://gitlab.com/adgellida/ubunsys/tags" target="_blank"><img src="https://about.gitlab.com/images/logo.png" width="80" alt="Gitlab"></a>
  <a href="https://sourceforge.net/projects/ubunsys" target="_blank"><img src="http://www.ricksdailytips.com/wp-content/uploads/2013/07/sourceforge-logo.gif" width="80" alt="SourceForge"></a>
  <a href="https://www.linux-apps.com/p/1179908" target="_blank"><img src="https://lh3.googleusercontent.com/-GVRdhHKKZ0M/V0Rq3_4y83I/AAAAAAAAABI/I-ACMENI9HAGi0OnBy86NwxXO2x57BnGA/w530-h528-p/OCS%2BLOGO%2BSINGLE.png" width="80" alt="OpenDesktop.org"></a>
  <a href="https://launchpad.net/~adgellida/+archive/ubuntu/ubunsys" target="_blank"><img src="https://launchpad.net/+tour/images/join/main-image.png" width="110" alt="Launchpad"></a>
</p>

Launchpad PPA Method - State: UP-TO-DATE
=============================================

`sudo add-apt-repository -y ppa:adgellida/ubunsys`

`sudo apt-get -y update`

`sudo apt-get -y install ubunsys`

Compilation
=============================================

Compilation Dependencies:

`apt install -y git g++ build-essential qt5-qmake qt5-default`

Compilation & install:

Run `qmake && make && sudo make install` in the main directory.

Screenshots
=============================================

<img src="http://i.imgur.com/rOZY92b.png" width="500">
<img src="http://i.imgur.com/Wy6Tv4b.png" width="500">
<img src="http://i.imgur.com/omnhGYV.png" width="500">
<img src="http://i.imgur.com/rympo8x.png" width="500">

What this program do
=============================================

##### Packages

* You can select a lot of apps and install them clicking only a button.

* Load a preconfigured selection (on future you can select yours)

##### Tweaks

* Enable-disable sudo without pass. For security when you exec sudo a password is prompted, but is tedious to put pass each time you executed an elevated permission action, so I recommend
to push this button when you don't need this security and want speed. **Then disable this function to restore security on your system.**

* Enable-disable asterisks when you put pass on terminal, hibernation, firewall.

* Open sources.list.d, sudoers file (backup and import).

* Install more content on New Doc Sub-Menu (secondary mouse button).

* Reduce timeout when shutdown, not recommended by now to use.

##### System

* Default update & upgrade system, update & upgrade repos, exec normal user installation script from git, default clean system.

* Smart system update, clean ancient kernels, upgrade to latest stable OS version, install mainline kernel (not recommended, possible incompatibilities)

* Upgrade to latest unstable OS version (not recommended, bugs).

##### Repair

* Check system integrity, repair network, missing GPG keys.

And more...

Tutorial
=============================================

Push [here](https://github.com/adgellida/ubunsys/wiki/Tutorial_en) to go to wiki.

TO DO
=============================================

* Search box.

* Improve ubuntu fonts.

* Put selector or slider.

* When package selection installed, unselect all boxes or hold them? By now, hold. Unselection commented.

* Add more sounds to system.

* Load saved configurations of personalized user installations.

* Snap, AppImage, PPA (updated), flatpack.

* Backup user folder

* Integer terminal on a widget. Recover mainwindows focus.

* Put apps in alphabetical order.

* Uninstall packages.

* Regroup files to clean main directory.

* First add all selected ppas. Then apt-fast -y update and finally install all selected packages. So, more quick.

* Save user configuration for use it when you re-open app.


* Disable keyring.

DONE
=============================================

* Run scripts selector.

* Create a category to personal scripts.

* Implement code to generate new apps automatically to save a bunch of code lines.

* Save selection.

* Best server selection to download updates.

* Support make install.

* 16.04 compatible, but not 100%.

* Show hidden startup items, disable login sound.

* Disable lock session.

* Grub customizer launch button.

* Translate app to Spanish.

* Download updated database about ppas each time you open app independent of app version. You push "update scripts button" and it does it.

Be care
=============================================

Be careful! These initial versions has a lot of bugs and disabled functionalities.

If you want to help on this dev, say to me.

If you need help about compilation and packaging I have basic notions, ask me.

I'm not a senior programmer, nor junior. I program as a hobby. So I'm not following professional coding practises.

I know that my code is horrifying and not good implemented. With patience I'll go to cleaning and improving it. 

Credits and thanks to
=============================================

[Bernar Novalyi](https://thenounproject.com/bernar.novalyi/) from Noun Project that creates the app [icon](https://thenounproject.com/term/terminal/715962/) used here. Beautiful!