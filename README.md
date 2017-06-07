# ubunsys
=============================================

<img src="https://raw.githubusercontent.com/adgellida/ubunsys/master/images/ubunsys.ico" width="80">

Configurable app designed for Ubuntu 17.04 (zesty) referent to packages, updates and configurations.

Built with Qt 5.7.1. This way it gets libraries from official repositories.

<img src="http://i.imgur.com/rOZY92b.png" width="500">

<img src="http://i.imgur.com/Wy6Tv4b.png" width="500">

<img src="http://i.imgur.com/omnhGYV.png" width="500">

<img src="http://i.imgur.com/rympo8x.png" width="500">

Para Español pulsar [aqui](https://github.com/adgellida/ubunsys/blob/master/README.md#Español)

Download
=============================================

* https://github.com/adgellida/ubunsys/releases


What this program do
=============================================

##### Packages

* You can select a lot of apps and install them clicking only a button.

* Load a preconfigured selection (on future you can select yours)

##### Tweaks

* Enable-disable sudo without pass. For security when you exec sudo a password is prompted, but is tedious to put pass each time you executed an elevated permission action, So I recommend
to push this button when you don't need this security and want speed. Then disable this function to restore security on your system.

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

Tutorial
=============================================

Recommended steps:

1. Push on 'Update scripts' button each time you open app. This way you get the latest scripts version.

This button is near the program version (green up arrow).

2. Push on 'Backup sudoers file'.

3. Then push on 'Enable sudo without pass'.

This way you can execute commands without asking your sudo pass each time. More quick so.

You always can go to default pushing 'Import sudoers file' and selecting your backuped file before.

4. Install packages you want.

5. Execute all tweaks, system actions or reparations you want.

TO DO
=============================================

* Support make install, 16.04.

* Show hidden startup items, disable login sound.

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

* Disable keyring.

DONE
=============================================

* Disable lock session.

* Grub customizer launch button.

* Translate app to Spanish.

* Download updated database about ppas each time you open app independent of app version. You push "update scripts button" and it does it.

If you want to use PPA
=============================================

* Not updated to latest version yet, don't use for now. It will be fixed when I know how.

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

Release notes
=============================================

You can check it [here](https://github.com/adgellida/ubunsys/releases)


##### ESPAÑOL

Descarga
=============================================

* https://github.com/adgellida/ubunsys/releases


Qué hace este programa
=============================================

##### Paquetes

* Puedes seleccionar un montón de apps e instalarlas clickando sólo un botón.

* Cargar una selección preconfigurada (en un futuro podrás cargar la tuya).

##### Mejoras

* Habilitar-deshabilitar sudo sin contraseña. Por seguridad cuando ejecutas sudo una contraseña es preguntada, pero es todioso ponerla cada vez que ejecutas una acción de permisos elevados, por eso recomiendo
pulsar este botón cuando no se necesita esta seguridad y se requiere velocidad. Después deshabilita esta función para restaurar la seguridad en tu sistema.

* Habilitar-deshabilitar asteriscos cuando pones contraseña en un terminal, hibernación, firewall.

* Abrir sources.list.d, arhivop sudoers (exportar e importar).

* Instalar más contenido en Nuevo - Submenú de documento (botón secundario del ratón).

* Reducir el tiempo de espera del pc cuando se apaga, no recomendado por ahora usarlo.

##### Sistema

* Actualización de listado de paquetes y actualización del sistema, actualizar listado y paquetes de repositorios, ejecutar script de instalación para usaurio normal de git, limpieza por defecto del sistema.

* Actualización inteligente del sistema, limpiar kernels antiguos, actualizar a la último versión estable del SO., instalar último kernel principal (no recomendado, posibles incompatibilidades).

* Actualizar a la última versión inestable del SO (no recomendado, errores).

##### Reparar

* Comprobar la integridad del sistema, reparar la red, claves GPG perdidas.

Tutorial
=============================================

Pasos recomendados:

1. Pulsar en el botón de 'Actualizar scripts' cada vez que se abra la app. De esta manera tendrás la última versión de los scripts. Este paso ya no es necesario, esto se hace al iniciar el programa.

Este botón está al lado de la versión del programa (flecha arriba verde).

2. Pulsa en 'Copia de seguridad de archivo sudoers'.

3. Después pulsa en 'Habilitar sudo sin contraseña'.

De esta manera, puedes ejecutar comandos sin preguntar tu contraseña de susdo cada vez. Más rápido entonces.

Tú siempre puedes ir a como estaba antes pulsando en 'Importar fichero sudoers' y seleccionando tu fichero de copia de seguridad anterior.

4. Instala los paquetes que quieras.

5. Ejecutar todas las mejoras, acciones del sistema y repaciones que tú quieras.

POR HACER
=============================================

* Habilitar soporte a make install, 16.04.

* Mostrar items ocultos de inicio, deshabilitar sonido de inicio.

* Caja de búsqueda.

* Mejorar las fuentes de Ubuntu.

* Mejor selección de servidor para descargar actualizaciones.

* Guardar selección.

* Poner un selector o "slider".

* Cuando una selección de paquete está instalado, deseleccionar todas las cajas o mantenerlas? Por ahora, mantener. Deselección comentada.

* Implementar códido para generar nuevas apps automáticamente para ahorrar un montón de líneas.

* Añadir más sonidos al sistema.

* Cargar configuraciones guardadas de instalaciones de instalaciones personalizadas de usuarios.

* Snap, AppImage, PPA (actualizado), flatpack.

* Copia de seguridad de la carpeta de usuario.

* Ejecutar selector de scripts.

* Integrar terminal en un widget. Recuperar foco de las ventanas personales.

* Poner apps en orden alfabético.

* Desinstalar paquetes.

* Reagrupar ficheros para limpiar el directorio principal.

* Primero añadir todas las ppas seleccionadas. Después apt-fast -y update y finalmente instalar los paquetes seleccionados. Por eso, más rápido.

* Deshabilitar depósito de claves.

HECHO
=============================================

* Deshabilitar bloqueo de sesión.

* Botón que ejecute Grub customizer.

* Traducir app al Español.

* Descarga de la base de datos actualizada de los PPAs cada vez que se abra la app independentemente del la versión de la app. Tú pulsas "botón de actualizar los scripts" y lo hace.

Si quieres usar PPA
=============================================

* No actualizada a la última versón aún, no usar por ahora. Se reparará cuando se sepa como...

`sudo add-apt-repository -y ppa:adgellida/ubunsys`

`sudo apt-get -y update`

`sudo apt-get -y install ubunsys`

Ten cuidado
=============================================

Cuidado! Estas versiones iniciales tienen un montón de fallos y funcionalidades desactivadas.

Si quieres ayudar en este desarrollo, dímelo.

Si tú necesitas ayuda a cerca de compilar y empaquetar tengo nociones básicas, pregúntame.

No soy un programador senior, ni junior. Programo como hobby. No estoy siguiendo prácticas de código profesionales.

Sé que mi código es horrible y no está bien implementado. Con paciencia lo iré limpiando y mejorando. 

Toda buena ayuda será bienvenida.

Créditos y gracias a
=============================================

* [Bernar Novalyi](https://thenounproject.com/bernar.novalyi/) de Noun Project que creó de la app el [icono](https://thenounproject.com/term/terminal/715962/) usado aquí. Precioso!

Notas de la versión
=============================================

Puedes comprobarlas [aquí](https://github.com/adgellida/ubunsys/releases)

