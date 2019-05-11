CFLAGS = -Wall -Werror
CC = g++

.PHONY: all clean

all: folder bin/main test

folder:
		mkdir bin build build/test -p

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

test: folder test/lib bin/test/test.o

test/lib:
		$(CC) -I thirdparty src -c test/board_test.c -o build/test/board_test.o

bin/test/test.o: test/test.cpp
		$(CC) -c $(CFLAGS) $^ -o $@

