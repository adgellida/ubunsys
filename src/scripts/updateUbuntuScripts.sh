#!/bin/bash

url=https://github.com/adgellida/ubuntuScripts/archive/dev.zip
message2="Updating ubuntuscripts. Please wait... Stage 1/4."
message3="ubuntuscripts was updated to latest version. 1/4 ok."
message4="Error downloading. Holding your ubuntuScripts version. 1/4 fail."

wget "$url" -O ~/.ubunsys/dev.zip && rm -Rf ~/.ubunsys/downloads/ubuntuScripts-dev && unzip ~/.ubunsys/dev.zip -d ~/.ubunsys/downloads &>/dev/null && chmod 777 -R ~/.ubunsys/downloads/ubuntuScripts-dev && rm ~/.ubunsys/dev.zip && echo "$message3" >> ~/.ubunsys/updates/updateLog.log || echo "$message4" >> ~/.ubunsys/updates/updateLog.log # && sleep 1

#Rename file
mv "$file1" "$file2"