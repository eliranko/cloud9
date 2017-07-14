a : disks_manager.o
	cc -o a disks_manager.o

disks_manager.o : disks_management/disks_manager.c disks_management/disks_manager.h
	cc -c disks_management/disks_manager.c

clean : rm a disks_manager.o