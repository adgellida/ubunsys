#!/bin/bash

message1="apt-fast not installed, installing it... Stage 3/4."
message2="apt-fast attempted to install, check if ok. 3/4 ok."
message3="apt-fast was already installed. No installation required. 3/4 ok."

#echo "Checking if apt-fast installed. Please wait...Stage 3/4"
#sleep 2
#echo " "

if [ $(dpkg-query -W -f='${Status}' apt-fast 2>/dev/null | grep -c "ok installed") -eq 0 ]
then
	echo "$message1"
	#sleep 2
	test -f /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-zesty.list || sudo rm /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-zesty.list
	test -f /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-zesty.list || sudo rm /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-zesty.list.save
	test -f /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-xenial.list || sudo rm /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-xenial.list
	test -f /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-xenial.list || sudo rm /etc/apt/sources.list.d/saiarcot895-ubuntu-myppa-xenial.list.save
	#x-terminal-emulator -e echo "Put sudo password if proceed:" && sh ~/.ubunsys/downloads/ubuntupackages-master/apps1/apt-fast
	#x-terminal-emulator -e echo " "
	x-terminal-emulator -e sh ~/.ubunsys/downloads/ubuntupackages-master/apps1/apt-fast
	echo "$message2"
	echo "$message2" >> ~/.ubunsys/updates/updateLog.log
	#sleep 2

else
	echo "$message3"
	echo "$message3" >> ~/.ubunsys/updates/updateLog.log
	#sleep 2
fi