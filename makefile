all: MyApp

MyApp: printString.o
	gcc -o MyApp printString.o

printString.o: printString.c
	gcc -c printString.c

clean:
	rm printString.o MyApp
