#!/bin/bash

url=https://github.com/adgellida/ubuntupackages
message1="ubuntupackages are in the latest version. No updates required. 2/4 ok."
message2="Updating ubuntupackages. Please wait... Stage 2/4."
message3="ubuntupackages was updated to latest version. 2/4 ok."
message4="Error downloading. Holding your ubuntupackages version. 2/4 fail."
updateStatus="NoIntentToInstallYet"

#getting remote commit version

remote_commit_version="$(git ls-remote "$url" | head -1 | cut -f 1)"

#saving remote commit version

sqlite3 ~/.ubunsys/configurations/config.db <<END_SQL
.timeout 2000
UPDATE config SET status = "$remote_commit_version" WHERE name = "ubuntupackages_remote_commit_version";
END_SQL

#getting previous saved commit version

previous_commit_version=`sqlite3 ~/.ubunsys/configurations/config.db "SELECT status FROM config WHERE name = 'ubuntupackages_previous_commit_version'" `

#comparing and executing

if [ "$previous_commit_version" == "$remote_commit_version" ]; then
    echo "$message1"
    echo "$message1" >> ~/.ubunsys/updates/updateLog.log
else
    test -d ~/.ubunsys || mkdir -p ~/.ubunsys
	test -d ~/.ubunsys/downloads || mkdir -p ~/.ubunsys/downloads
	echo "$message2"

	wget https://github.com/adgellida/ubuntupackages/archive/master.zip -O ~/.ubunsys/master.zip &&
	rm -Rf ~/.ubunsys/downloads/ubuntupackages-master &&
	unzip ~/.ubunsys/master.zip -d ~/.ubunsys/downloads &>/dev/null &&
	chmod 777 -R ~/.ubunsys/downloads/ubuntupackages-master &&
	rm ~/.ubunsys/master.zip &&
	echo "$message3" >> ~/.ubunsys/updates/updateLog.log || echo "$message4" >> ~/.ubunsys/updates/updateLog.log
fi