#!/bin/bash

url=https://github.com/adgellida/ubunsys
file1=~/.ubunsys/updates/ubunsys_check_version/latest_version.txt
file2=~/.ubunsys/updates/ubunsys_check_version/installed_version.txt
message1="ubunsys are in the latest version. No updates required. 4/4 ok."
message2="ubunsys outdated. Push upper red button to update it via PPA. 4/4 ok."

#Getting remote version

git ls-remote --tags "$url" | awk -F'/' '/[0-9].[0-9].[0-9].*/ { print $3}' | sort -nr | head -n1 > "$file1"

sed 's/v//' "$file1" > "$file1"

#Getting installed version

dpkg -s ubunsys | grep -i version > "$file2"

#Comparing

latest_version=`cat ~/.ubunsys/updates/ubunsys_check_version/latest_version.txt`
echo "$latest_version"

if grep -q "$latest_version" "$file2"; then
	echo "$message1"
	echo "$message1" >> ~/.ubunsys/updates/updateLog.log
else
	echo "$message2"
	echo "$message2" >> ~/.ubunsys/updates/updateLog.log
fi

#read

#Remove files
rm "$file1" "$file2"