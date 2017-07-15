a : main.o disks_manager.o
	cc -o a main.o disks_manager.o

main.o : main.c disks_management/disks_manager.h
	cc -c main.c

disks_manager.o : disks_management/disks_manager.c disks_management/disks_manager.h
	cc -c disks_management/disks_manager.c -lsqlite3

clean : 
	rm a *.o