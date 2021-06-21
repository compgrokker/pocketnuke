# pocketnuke
sudo-like tool for when sudo isn't available

After compiling, it needs to be owned by the root user and have the suid bit set.

Takes the full path of the file you wish to run as the only argument, ie: pocketnuke /usr/bin/whoami
