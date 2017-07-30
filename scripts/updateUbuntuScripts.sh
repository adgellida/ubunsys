#!/bin/bash

url=https://github.com/adgellida/ubuntuScripts
file1=~/.ubunsys/updates/ubuntuScripts_check_version/now_check_commit_version.txt
file2=~/.ubunsys/updates/ubuntuScripts_check_version/last_check_commit_version.txt
message="ubuntuScripts are in the latest version. No updates required. 1/3 ok."

#Getting commit version && "

git ls-remote "$url" | head -1 | cut -f 1 > "$file1"

#Comparing and executing

if diff "$file1" "$file2"
then
    echo "$message"
    echo "$message" >> ~/.ubunsys/updates/updateLog.log
    #sleep 1
else
    test -d ~/.ubunsys || mkdir -p ~/.ubunsys
	test -d ~/.ubunsys/downloads || mkdir -p ~/.ubunsys/downloads

	echo Trying to downloading and updating necessary files for ubunsys. Please wait... Stage 1/3
	#sleep 2
	echo " "

	wget https://github.com/adgellida/ubuntuScripts/archive/master.zip -O ~/.ubunsys/master.zip && rm -Rf ~/.ubunsys/downloads/ubuntuScripts-master && unzip ~/.ubunsys/master.zip -d ~/.ubunsys/downloads &>/dev/null && chmod 777 -R ~/.ubunsys/downloads/ubuntuScripts-master && rm ~/.ubunsys/master.zip && echo ubuntuscripts downloaded ok. 1/3 ok >> ~/.ubunsys/updates/updateLog.log || echo Error downloading. Holding your ubuntuscripts version. 1/3 fail >> ~/.ubunsys/updates/updateLog.log # && sleep 1

fi

#Rename file && "
mv "$file1" "$file2"