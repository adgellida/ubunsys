# ubunsys
=============================================

<img src="https://raw.githubusercontent.com/adgellida/ubunsys/master/images/ubunsys.ico" width="80">

**Para Español pulsar [aqui](https://github.com/adgellida/ubunsys/blob/master/README_es_ES.md)**

Configurable app designed for Ubuntu referent to packages, updates and configurations.

**Very dangerous app in any points, if you don't know where you are touching or how to fix it, don't do it. For testing and knowledge purposes. It's not meant to be stable at the moment.**

Built with Qt 5.7.1 for 17.04 zesty zapus.

Built with Qt 5.5.1 for 16.04 xenial xerus.

This way it gets libraries from official repositories.

Download
=============================================

* https://github.com/adgellida/ubunsys/releases

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

Recommended steps:

1. Push on 'Enable sudo without pass'.

This way you can execute commands without asking your sudo pass each time. More quick so.

You always can go to default pushing 'Import sudoers file' and selecting your backuped file before.

2. Install packages you want.

3. Execute all tweaks, system actions or reparations you want.

TO DO
=============================================

* Support make install.

* Search box.

* Improve ubuntu fonts.

* Best server selection to download updates.

* Save selection.

* Put selector or slider.

* When package selection installed, unselect all boxes or hold them? By now, hold. Unselection commented.

* Implement code to generate new apps automatically to save a bunch of code lines.

* Add more sounds to system.

* Load saved configurations of personalized user installations.

* Snap, AppImage, PPA (updated), flatpack.

* Backup user folder

* Run scripts selector.

* Integer terminal on a widget. Recover mainwindows focus.

* Put apps in alphabetical order.

* Uninstall packages.

* Regroup files to clean main directory.

* First add all selected ppas. Then apt-fast -y update and finally install all selected packages. So, more quick.

* Save user configuration for use it when you re-open app.

* Create a category to personal scripts.

* Disable keyring.

DONE
=============================================

* 16.04 compatible, but not 100%.

* Show hidden startup items, disable login sound.

* Disable lock session.

* Grub customizer launch button.

* Translate app to Spanish.

* Download updated database about ppas each time you open app independent of app version. You push "update scripts button" and it does it.

If you want to use PPA
=============================================

* Not updated to latest version yet, don't use for now. It will be fixed when I know how...

`sudo add-apt-repository -y ppa:adgellida/ubunsys`

`sudo apt-get -y update`

`sudo apt-get -y install ubunsys`

Be care
=============================================

Be careful! These initial versions has a lot of bugs and disabled functionalities.

If you want to help on this dev, say to me.

If you need help about compilation and packaging I have basic notions, ask me.

I'm not a senior programmer, nor junior. I program as a hobby. So I'm not following professional coding practises.

I know that my code is horrifying and not good implemented. With patience I'll go to cleaning and improving it. 

All experienced help are welcome.

Credits and thanks to
=============================================

[Bernar Novalyi](https://thenounproject.com/bernar.novalyi/) from Noun Project that creates the app [icon](https://thenounproject.com/term/terminal/715962/) used here. Beautiful!