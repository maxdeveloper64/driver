obj-m += ldd.obj

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -t)/build M=$(PWD) clean