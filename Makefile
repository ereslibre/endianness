all: main.c
	gcc -o endianness main.c

clean:
	rm endianness
