OUTPUT = cloud9_server

$(OUTPUT) : main.o
	cc -o $(OUTPUT) main.o

main.o : main.c
	cc -c main.c -Wall

clean :
	rm -rf $(OUTPUT) *.o
