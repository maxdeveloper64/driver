# driver

This is my driver repository

VM setup:

sudo apt update

sudo apt upgrade -y

sudo apt install -y build-essential linux-headers-$(uname -r) kmod

sudo insmod "modname".ko

sudo rmmod "modname"

sudo dmesg
