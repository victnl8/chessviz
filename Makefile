CFLAGS = -Wall -Werror
CC = gcc

.PHONY: all clean

all: folder bin/main

folder:
		mkdir bin build -p

bin/main: build/main.o build/board_print_plain.o build/board.o
		$(CC) $(CFLAGS) $^ -o $@

build/main.o: scr/main.c
		$(CC) -c $(CFLAGS) $^ -o $@

build/board.o: scr/board.c
		$(CC) -c $(CFLAGS) $^ -o $@


build/board_print_plain.o: scr/board_print_plain.c
		$(CC) -c $(CFLAGS) $^ -o $@

clean:
		rm build/*.o



