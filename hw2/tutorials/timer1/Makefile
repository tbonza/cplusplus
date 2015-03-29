BOOST = /home/tbonza/opensource/cplusplus/library/boost_1_57_0/

CC = g++
CFLAGS = -g -Wall
CFLAGS += -I $(BOOST)
CFLAGS += -lboost_system

all: asio

clean:
	rm asio

asio: asio.cpp
	$(CC) $(CFLAGS) asio.cpp -o asio
