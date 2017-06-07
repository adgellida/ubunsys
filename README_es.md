# ubunsys
=============================================

<img src="https://raw.githubusercontent.com/adgellida/ubunsys/master/images/ubunsys.ico" width="80">

**For English push [here](https://github.com/adgellida/ubunsys/blob/master/README.md)**

App configurable diseñada para Ubuntu (17.04 zesty, por ahora) referente a paquetes, actualizaciones y configuraciones.

Construido con Qt 5.7.1. De esta manera obtiene las librerias de los repositorios oficiales.

<img src="http://i.imgur.com/rOZY92b.png" width="500">

<img src="http://i.imgur.com/Wy6Tv4b.png" width="500">

<img src="http://i.imgur.com/omnhGYV.png" width="500">

<img src="http://i.imgur.com/rympo8x.png" width="500">

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