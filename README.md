Краєвький Артур РЕ-22


To create main.o:

main.o: main.c
	  gcc -c main.c

To create lib.o:

	gcc -c lib.c
  
To compile:

gcc -o Binary.exe main.o lib.o

clean: 

	rm -f *.o Binary.exe
