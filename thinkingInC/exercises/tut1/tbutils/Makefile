CC = g++
CFLAGS = -g -O2 -Wall

all: tbutils.o tbutils_test

clean:
	rm tbutils.o tbutils_test

tbutils.o: tbutils.cpp tbutils.h
	$(CC) $(CFLAGS) -c tbutils.cpp

tbutils_test: tbutils.o tbutils_test.cpp
	$(CC) $(CFLAGS) tbutils.o tbutils_test.cpp -o tbutils_test
