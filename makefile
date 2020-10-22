all: main.o mystring.o
	gcc -o mystring main.o mystring.o

main.o: main.c mystring.o
	gcc -c main.c

mystring.o: mystring.c mystring.h
	gcc -c mystring.c
