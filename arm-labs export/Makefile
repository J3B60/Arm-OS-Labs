CC=gcc
CFLAGS=-Wall -O2 -pg
LDFLAGS=-pg

main_fib : main_fib.o ffib.o

ffib.o: ffib.s
	gcc $(CFLAGS) -c ffib.s

ffib.s:
	gcc $(CFLAGS) -S ffib.c

clean:
	rm -f *.o
