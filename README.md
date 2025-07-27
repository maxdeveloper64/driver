# driver

This is my driver repository

VM setup:

sudo apt update

sudo apt upgrade -y

sudo nano /etc/ssh/sshd_config

sudo systemctl daemon-reload

sudo service ssh restart

sudo apt install -y build-essential linux-headers-$(uname -r) kmod

git clone git@github.com:TheUser/TheProject.git -key "~/.ssh/<ssh key>"

sudo insmod "modname".ko

sudo rmmod "modname".ko

sudo lsmod

modinfo "modname".ko

sudo dmesg

sudo dmesg -c
