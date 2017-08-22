LIBS = -L/usr/lib/x86_64-linux-gnu

a : main.o disks_manager.o
	cc -o a main.o disks_manager.o

main.o : main.c disks_management/disks_manager.h
	cc -c main.c -Wall

disks_manager.o : disks_management/disks_manager.c disks_management/disks_manager.h
	cc -c $(LIBS) -lsqlite3 disks_management/disks_manager.c -Wall

clean :
	rm a *.o
