#This is a makefile for 3 source files: main.c, add.c, hello.c
#Save the file with name "Makefile"

#**** Method 1***
#target as final
#final:
	#gcc main.c add.c hello.c -o final

#***** Method 2*****
#by mentioning the variable names and multiple target

#$(CC) = gcc
#final:
	#$(CC) main.c add.c hello.c -o final

#Clean:
	#rm *.o final
#**** Method 3 *****

# Using variable names and muiltiple target

$(CC) = gcc

final: main.o add.o hello.o
	$(CC) main.o add.o hello.o -o final

main.o: main.c header.h
	$(CC) -c main.c

hello.o: hello.c header.h
	$(CC) -c hello.c

add.o: add.c header.h
	$(CC) -c add.c

clean:
	rm *.o final
