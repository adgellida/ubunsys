#!/bin/bash

url=https://github.com/adgellida/ubuntuScripts
message1="ubuntuScripts are in the latest version. No updates required. 1/4 ok."
message2="Updating ubuntuscripts. Please wait... Stage 1/4."
message3="ubuntuscripts was updated to latest version. 1/4 ok."
message4="Error downloading. Holding your ubuntuScripts version. 1/4 fail."

#Getting commit version

actual_commit_version="$(git ls-remote "$url" | head -1 | cut -f 1)"

#saving actual commit version

sqlite3 ~/.ubunsys/configurations/config.db <<END_SQL
.timeout 2000
UPDATE config SET status = "$actual_commit_version" WHERE name = "ubuntuScripts_now_check_commit_version";
END_SQL

#getting previous commit version

last_commit_version=`sqlite3 ~/.ubunsys/configurations/config.db "SELECT status FROM config WHERE name = 'ubuntuScripts_last_check_commit_version'" `

#echo $last_commit_version

#Comparing and executing

if diff "$actual_commit_version" "$last_commit_version"
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

	wget https://github.com/adgellida/ubuntuScripts/archive/master.zip -O ~/.ubunsys/master.zip && rm -Rf ~/.ubunsys/downloads/ubuntuScripts-master && unzip ~/.ubunsys/master.zip -d ~/.ubunsys/downloads &>/dev/null && chmod 777 -R ~/.ubunsys/downloads/ubuntuScripts-master && rm ~/.ubunsys/master.zip && echo "$message3" >> ~/.ubunsys/updates/updateLog.log || echo "$message4" >> ~/.ubunsys/updates/updateLog.log # && sleep 1

fi

#Put actual commit version to last to compare next time

sqlite3 ~/.ubunsys/configurations/config.db <<END_SQL
.timeout 2000
UPDATE config SET status = "$actual_commit_version" WHERE name = "ubuntuScripts_last_check_commit_version";
END_SQL

read