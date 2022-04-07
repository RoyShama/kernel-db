ccflags-y := -o3 $(CCFLAGS)
obj-m +=	db.o

.PHONY: dev

all:
	$(MAKE) -C '$(LINUX_DIR)' M='$(M)'

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
