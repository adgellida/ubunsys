#!/bin/bash

url=https://github.com/adgellida/ubuntupackages
file1=~/.ubunsys/updates/ubuntupackages_check_version/now_check_commit_version.txt
file2=~/.ubunsys/updates/ubuntupackages_check_version/last_check_commit_version.txt
message="ubuntupackages are in the latest version. No updates required. 2/3 ok"

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

	echo Updating ubuntupackages. Please wait... Stage 2/3
	#sleep 2
	echo " "

	wget https://github.com/adgellida/ubuntupackages/archive/master.zip -O ~/.ubunsys/master.zip && rm -Rf ~/.ubunsys/downloads/ubuntupackages-master && unzip ~/.ubunsys/master.zip -d ~/.ubunsys/downloads &>/dev/null && chmod 777 -R ~/.ubunsys/downloads/ubuntupackages-master && rm ~/.ubunsys/master.zip && echo ubuntupackages downloaded ok. 2/3 ok >> ~/.ubunsys/updates/updateLog.log || echo Error downloading. Holding your ubuntupackages version. 2/3 fail >> ~/.ubunsys/updates/updateLog.log # && sleep 1

fi

#Rename file && "
mv "$file1" "$file2"