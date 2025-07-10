obj-m += ldd.o

all:
	make -C /lib/modules/6.8.0-63-generic/build M=$(PWD) modules

clean:
	make -C /lib/modules/6.8.0-63-generic/build M=$(PWD) clean