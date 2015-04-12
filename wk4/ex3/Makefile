CC = g++
CFLAGS = -g -Wall -std=c++11 
CFLAGS += -lboost_system -pthread

all: blocking_tcp_echo_client blocking_tcp_echo_server

clean:
	rm blocking_tcp_echo_client blocking_tcp_echo_server 

blocking_tcp_echo_client: blocking_tcp_echo_client.cpp
	$(CC) $(CFLAGS) blocking_tcp_echo_client.cpp -o \
	blocking_tcp_echo_client

# add flags for server

CFLAGS += -lboost_thread


blocking_tcp_echo_server: blocking_tcp_echo_server.cpp
	$(CC) $(CFLAGS) blocking_tcp_echo_server.cpp -o \
	blocking_tcp_echo_server
