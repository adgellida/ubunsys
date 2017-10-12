#!/bin/bash

#apt-fastCheckingNotification

if [ $(dpkg-query -W -f='${Status}' apt-fast 2>/dev/null | grep -c "ok installed") -eq 0 ]
then
	rm ~/.ubunsys/configurations/apt-fastInstalled.txt

else
	touch ~/.ubunsys/configurations/apt-fastInstalled.txt
fi