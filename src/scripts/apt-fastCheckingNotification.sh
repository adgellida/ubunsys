#!/bin/bash

#apt-fastCheckingNotification

if [ $(dpkg-query -W -f='${Status}' apt-fast 2>/dev/null | grep -c "ok installed") -eq 0 ]
then

sqlite3 ~/.ubunsys/configurations/config.db <<END_SQL
.timeout 2000
UPDATE config SET status = "false" WHERE name = "apt-fastInstalled";
END_SQL

else
	
sqlite3 ~/.ubunsys/configurations/config.db <<END_SQL
.timeout 2000
UPDATE config SET status = "true" WHERE name = "apt-fastInstalled";
END_SQL

fi