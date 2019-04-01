CFLAGS = -Wall -Werror
CC = g++

.PHONY: all clean

all: folder bin/main

folder:
		mkdir bin build -p

bin/main: build/main.o build/board_print_plain.o build/board.o
		$(CC) $(CFLAGS) $^ -o $@

build/main.o: src/main.cpp
		$(CC) -c $(CFLAGS) $^ -o $@

build/board.o: src/board.cpp
		$(CC) -c $(CFLAGS) $^ -o $@


build/board_print_plain.o: src/board_print_plain.cpp
		$(CC) -c $(CFLAGS) $^ -o $@

clean:
		rm build/*.o



