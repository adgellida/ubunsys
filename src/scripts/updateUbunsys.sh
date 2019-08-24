#!/bin/bash

url=https://github.com/adgellida/ubunsys
file1=~/.ubunsys/updates/ubunsys_check_version/latest_version.txt
file2=~/.ubunsys/updates/ubunsys_check_version/installed_version.txt
file3=~/.ubunsys/updates/ubunsys_check_version/latest_version2.txt
message1="ubunsys are in the latest version. No updates required. 4/4 ok."
message2="ubunsys outdated. Push upper red button to update it via PPA. 4/4 ok."

#Getting Github version

ubunsysGithubVersion=$(git ls-remote --tags "$url" | awk -F'/' '/[0-9].[0-9].[0-9].*/ { print $3}' | sort -nr | head -n1)

echo $ubunsysGithubVersion

ubunsysGithubVersion2=$(echo "$ubunsysGithubVersion" | sed 's/v//' )

ubunsysGithubVersion="$ubunsysGithubVersion2"

#ubunsysGithubVersion=2019.01.01											#Tests. Forcing a new version

echo "$ubunsysGithubVersion"

sqlite3 ~/.ubunsys/configurations/config.db <<END_SQL
.timeout 2000
UPDATE config SET status = "$ubunsysGithubVersion" WHERE name = "ubunsysGithubVersion";
END_SQL

#Getting installed version

ubunsysInstalledVersion=$(dpkg -s ubunsys | grep -i version)

ubunsysInstalledVersion=$(echo "$ubunsysInstalledVersion" | sed 's/Version: //g' | sed 's/~ubuntu.*//g')

echo "$ubunsysInstalledVersion"

sqlite3 ~/.ubunsys/configurations/config.db <<END_SQL
.timeout 2000
UPDATE config SET status = "$ubunsysInstalledVersion" WHERE name = "ubunsysInstalledVersion";
END_SQL

#Comparing

if [ "$ubunsysGithubVersion" == "$ubunsysInstalledVersion" ]; then		#If are the same
	echo "$message1"
	echo "$message1" >> ~/.ubunsys/updates/updateLog.log
	
sqlite3 ~/.ubunsys/configurations/config.db <<END_SQL
.timeout 2000
UPDATE config SET status = "false" WHERE name = "appUpdatePresent";		#No notification about new version
END_SQL

else																	#If are the different
	echo "$message2"	

sqlite3 ~/.ubunsys/configurations/config.db <<END_SQL
.timeout 2000
UPDATE config SET status = "true" WHERE name = "appUpdatePresent";		#Flag appUpdate up
END_SQL


fi

#read