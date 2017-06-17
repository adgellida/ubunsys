# ubunsys
=============================================

<img src="https://raw.githubusercontent.com/adgellida/ubunsys/master/images/ubunsys.ico" width="80">

**For English click [here](https://github.com/adgellida/ubunsys/blob/master/README.md)**

Software instalador de una lista de paquetes útiles, capaz de hacer cambios en la configuración del sistema, actualizaciones, ejecutar mejoras, arreglos, ejecutando acciones a golpe de click de ratón.

Específico para Ubuntu 16.04, 17.04 x64.

**App muy peligrosa en algunos puntos, si no sabes donde estás tocando o cómo arreglarlo, no lo hagas. Hecha con motivos de aprendizaje y testeo. No pretende ser estable de momento.**

Construido con Qt 5.7.1. para 17.04 zesty zapus. Construido con Qt 5.5.1. para 16.04 xenial xerus. De esta manera obtiene las librerias de los repositorios oficiales.

Alimentado con [ubuntupackages](https://github.com/adgellida/ubuntupackages) y [ubuntuScripts](https://github.com/adgellida/ubuntuScripts).

Apps basadas en él:

* [winsys](https://github.com/adgellida/winsys).

Descarga
=============================================

* https://github.com/adgellida/ubunsys/releases

<img src="http://i.imgur.com/rOZY92b.png" width="500">

<img src="http://i.imgur.com/Wy6Tv4b.png" width="500">

<img src="http://i.imgur.com/omnhGYV.png" width="500">

<img src="http://i.imgur.com/rympo8x.png" width="500">

Qué hace este programa
=============================================

##### Paquetes

* Puedes seleccionar un montón de apps e instalarlas clickando sólo un botón.

* Cargar una selección preconfigurada (en un futuro podrás cargar la tuya).

##### Mejoras

* Habilitar-deshabilitar sudo sin contraseña. Por seguridad cuando ejecutas sudo una contraseña es preguntada, pero es todioso ponerla cada vez que ejecutas una acción de permisos elevados, por eso recomiendo
pulsar este botón cuando no se necesita esta seguridad y se requiere velocidad. **Después deshabilita esta función para restaurar la seguridad en tu sistema.**

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

Y más...

Tutorial
=============================================

Pasos recomendados:

1. Pulsa en 'Habilitar sudo sin contraseña'.

De esta manera, puedes ejecutar comandos sin preguntar tu contraseña de sudo cada vez. Por ello ganas rapidez.

Puedes dejarlo como estaba pulsando en 'Importar fichero sudoers' y seleccionando tu fichero de copia de seguridad anterior.

2. Instala los paquetes que quieras.

3. Ejecutar todas las mejoras, acciones del sistema y reparaciones que quieras.

POR HACER
=============================================

* Habilitar soporte a make install.

* Caja de búsqueda.

* Mejorar las fuentes de Ubuntu.

* Mejor selección de servidor para descargar actualizaciones.

* Guardar selección.

* Poner un selector o "slider".

* Cuando una selección de paquete está instalado, deseleccionar todas las cajas o mantenerlas? Por ahora, mantener. Deselección comentada.

* Implementar códido para generar nuevas apps automáticamente para ahorrar un montón de líneas.

* Añadir más sonidos al sistema.

* Cargar configuraciones guardadas de instalaciones personalizadas de usuarios.

* Snap, AppImage, PPA (actualizado), flatpack.

* Copia de seguridad de la carpeta de usuario.

* Ejecutar selector de scripts.

* Integrar terminal en un widget. Recuperar foco de las ventanas personales.

* Poner apps en orden alfabético.

* Desinstalar paquetes.

* Reagrupar ficheros para limpiar el directorio principal.

* Primero añadir todas las ppas seleccionadas. Después apt-fast -y update y finalmente instalar los paquetes seleccionados. Por eso, más rápido.

* Guardar la configuración del usuario para usarla cuando se reabra la app.

* Crear apartado de scripts personales.

* Deshabilitar depósito de claves.

HECHO
=============================================

* Compatible con 16.04, pero no al 100%.

* Mostrar items ocultos de inicio, deshabilitar sonido de inicio.

* Deshabilitar bloqueo de sesión.

* Botón que ejecute Grub customizer.

* Traducir app al Español.

* Descarga de la base de datos actualizada de los PPAs cada vez que se abra la app independentemente del la versión de la app. Tú pulsas "botón de actualizar los scripts" y lo hace.

Si quieres usar PPA - NO ACTUALIZADA
=============================================

* No actualizada a la última versón aún, no usar por ahora. Se reparará cuando se sepa como... Necesito ayuda.

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