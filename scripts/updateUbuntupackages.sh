#!/bin/bash

url=https://github.com/adgellida/ubuntupackages
file1=~/.ubunsys/updates/ubuntupackages_check_version/now_check_commit_version.txt
file2=~/.ubunsys/updates/ubuntupackages_check_version/last_check_commit_version.txt
message1="ubuntupackages are in the latest version. No updates required. 2/4 ok."
message2="Updating ubuntupackages. Please wait... Stage 2/4."
message3="ubuntupackages was updated to latest version. 2/4 ok."
message4="Error downloading. Holding your ubuntupackages version. 2/4 fail."

#Getting commit version

git ls-remote "$url" | head -1 | cut -f 1 > "$file1"

#Comparing and executing

if diff "$file1" "$file2"
then
    echo "$message1"
    echo "$message1" >> ~/.ubunsys/updates/updateLog.log
    #sleep 1
else
	test -d ~/.ubunsys || mkdir -p ~/.ubunsys
	test -d ~/.ubunsys/downloads || mkdir -p ~/.ubunsys/downloads

	echo "$message2"
	#sleep 2
	echo " "

	wget https://github.com/adgellida/ubuntupackages/archive/master.zip -O ~/.ubunsys/master.zip && rm -Rf ~/.ubunsys/downloads/ubuntupackages-master && unzip ~/.ubunsys/master.zip -d ~/.ubunsys/downloads &>/dev/null && chmod 777 -R ~/.ubunsys/downloads/ubuntupackages-master && rm ~/.ubunsys/master.zip && echo "$message3" >> ~/.ubunsys/updates/updateLog.log || echo "$message4" >> ~/.ubunsys/updates/updateLog.log # && sleep 1

fi

#Rename file
mv "$file1" "$file2"