#!/bin/bash

message1="apt-fast not installed, installing it... Stage 3/4."
message2="apt-fast attempted to install, check if ok. 3/4 ok."
message3="apt-fast was already installed. No installation required. 3/4 ok."

if [ $(dpkg-query -W -f='${Status}' apt-fast 2>/dev/null | grep -c "ok installed") -eq 0 ]; then

qlite3 ~/.ubunsys/configurations/config.db <<END_SQL
.timeout 2000
UPDATE config SET status = "false" WHERE name = "apt-fastInstalled";
END_SQL
echo "$message1"

test -f /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-zesty.list || sudo rm /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-zesty.list
test -f /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-zesty.list || sudo rm /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-zesty.list.save
test -f /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-xenial.list || sudo rm /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-xenial.list
test -f /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-xenial.list || sudo rm /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-xenial.list.save

x-terminal-emulator -e sh ~/.ubunsys/downloads/ubuntupackages-master/apps1/apt-fast
echo "$message2"
echo "$message2" >> ~/.ubunsys/updates/updateLog.log

sqlite3 ~/.ubunsys/configurations/config.db <<END_SQL
.timeout 2000
UPDATE config SET status = "true" WHERE name = "apt-fastInstalled";
END_SQL

else

echo "$message3"
echo "$message3" >> ~/.ubunsys/updates/updateLog.log

sqlite3 ~/.ubunsys/configurations/config.db <<END_SQL
.timeout 2000
UPDATE config SET status = "true" WHERE name = "apt-fastInstalled";
END_SQL

fi