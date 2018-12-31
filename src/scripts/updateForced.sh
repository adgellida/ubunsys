#!/bin/bash

message2="Updating packages & scripts forcedly. Please wait..."
message31="Packages were updated to latest version."
message41="Error downloading. Holding packages."
message32="Scripts were updated to latest version."
message42="Error downloading. Holding scripts."

test -d ~/.ubunsys || mkdir -p ~/.ubunsys
test -d ~/.ubunsys/downloads || mkdir -p ~/.ubunsys/downloads

echo "$message2"
#sleep 2
echo " "

wget https://github.com/adgellida/ubuntupackages/archive/master.zip -O ~/.ubunsys/master.zip && rm -Rf ~/.ubunsys/downloads/ubuntupackages-master && unzip ~/.ubunsys/master.zip -d ~/.ubunsys/downloads &>/dev/null && chmod 777 -R ~/.ubunsys/downloads/ubuntupackages-master && rm ~/.ubunsys/master.zip && echo "$message31" >> ~/.ubunsys/updates/updateLog.log || echo "$message41" >> ~/.ubunsys/updates/updateLog.log # && sleep 1
wget https://github.com/adgellida/ubuntuScripts/archive/dev.zip -O ~/.ubunsys/dev.zip && rm -Rf ~/.ubunsys/downloads/ubuntuScripts-dev && unzip ~/.ubunsys/dev.zip -d ~/.ubunsys/downloads &>/dev/null && chmod 777 -R ~/.ubunsys/downloads/ubuntuScripts-dev && rm ~/.ubunsys/dev.zip && echo "$message32" >> ~/.ubunsys/updates/updateLog.log || echo "$message42" >> ~/.ubunsys/updates/updateLog.log # && sleep 1