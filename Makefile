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
		rm build/*.o

test: folder testlib bin/test

testlib:
	g++ -std=c++11 -isystem ${GTEST_DIR}/include -I${GTEST_DIR} \
    -pthread -c ${GTEST_DIR}/src/gtest-all.cc -o build/test/gtest-all.o
	ar -rv build/test/libgtest.a build/test/gtest-all.o

bin/test: build/test/test.o  $(obj2)
	g++ -std=c++11 -isystem ${GTEST_DIR}/include -pthread $^ \
	build/test/libgtest.a -o $@

build/test/test.o: test/test.cpp
		$(CC) -c $(CFLAGS) $^ -o $@

