LIBS = -L/usr/lib/x86_64-linux-gnu
LIBSO = -lsqlite3

a : main.o disks_manager.o
	cc $(LIBS) -o a main.o disks_manager.o $(LIBSO)

main.o : main.c disks_management/disks_manager.h
	cc -c main.c -Wall

disks_manager.o : disks_management/disks_manager.c disks_management/disks_manager.h
	cc -c disks_management/disks_manager.c -Wall

clean :
	rm -rf a *.o *.db
