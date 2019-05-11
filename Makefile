CFLAGS = -Wall -Werror
CC = g++
GTEST_DIR = thirdparty/googletest

.PHONY: all clean

all: folder bin/main

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
		rm build/test/*.o build/*.o bin/* 

test: folder bin/test

bin/test: build/test/test.o
	g++ -std=c++11 -isystem thirdparty/googletest/include -pthread $^ \
	build/test/libgtest.a -o $@

build/test/test.o: test/test.cpp
		$(CC) -c $(CFLAGS) $^ -o $@