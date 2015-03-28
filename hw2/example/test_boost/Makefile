BOOST = /home/tbonza/opensource/cplusplus/library/boost_1_57_0/

CC = g++
CFLAGS = -g -Wall
CFLAGS += -I $(BOOST)

all: example

clean:
	rm example

example: example.cpp
	$(CC) $(CFLAGS) example.cpp -o example
