#
# Regular cron jobs for the ubunsys package
#
0 4	* * *	root	[ -x /usr/bin/ubunsys_maintenance ] && /usr/bin/ubunsys_maintenance
