all: sieve.c main.c
	gcc main.c

run:
	./a.out
	make clear

clear:
	rm a.out
