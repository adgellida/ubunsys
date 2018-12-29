#!/bin/bash

url=https://github.com/adgellida/ubunsys
message1="ubunsys are in the latest version. No updates required. 4/4 ok."
message2="ubunsys outdated. Push upper red button to update it via PPA. 4/4 ok."

#Getting remote version

remote_version_with_v="$(git ls-remote --tags "$url" | awk -F'/' '/[0-9].[0-9].[0-9].*/ { print $3}' | sort -nr | head -n1)"

#We go to quit "v" from versionName

remote_version_no_v=${remote_version_with_v/v/}

remote_version=$remote_version_no_v

#Getting installed version

installed_version_with_v="$(dpkg -s ubunsys | grep -i version)"

#We go to quit latest characters from versionName

installed_version_cleaned_characters1=${installed_version_with_v/~ubuntu*/}
installed_version=${installed_version_cleaned_characters1/Version: /}

#Comparing

if [ "$remote_version" == "$installed_version" ]; then
	
echo "$message1"
echo "$message1" >> ~/.ubunsys/updates/updateLog.log
sqlite3 ~/.ubunsys/configurations/config.db <<END_SQL
.timeout 2000
UPDATE config SET status = "false" WHERE name = "appUpdatePresent";
END_SQL

else

echo "$message2"	
sqlite3 ~/.ubunsys/configurations/config.db <<END_SQL
timeout 2000
UPDATE config SET status = "true" WHERE name = "appUpdatePresent";
END_SQL

fi