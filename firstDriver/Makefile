# Makefile

#if KERNELRELEASE is not defined, we've been called from command line
#Invoke kernel build system

ifeq ($(KERNELRELEASE),)

	KERNEL_SOURCE := /lib/modules/$(shell uname -r)/build
	PWD := $(shell pwd)


default:

	$(MAKE) -C $(KERNEL_SOURCE) M=$(PWD) modules


clean:

	$(MAKE) -C $(KERNEL_SOURCE) M=$(PWD) clean

#Otherwise KERNELRELEASE is defined, we've been called from the
#kernel build system and can use its language

else

	obj-m := firstDriver.o

endif