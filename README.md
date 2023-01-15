Краєвький Артур РЕ-22


To create main.o:

	gcc -c main.c

To create lib.o:

	gcc -c lib.c
  
To create Binary.exe:

	gcc -o Binary.exe main.o lib.o
	
To compile:

	./Binary.exe

clean: 

	rm -f *.o Binary.exe
