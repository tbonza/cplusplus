BOOST = /home/tbonza/opensource/cplusplus/library/boost_1_57_0/

CC = g++
CFLAGS = -g -Wall -std=c++11
CFLAGS += -I $(BOOST)
CFLAGS += -lboost_system
CFLAGS += -lboost_thread

all: TestBoost TestThread

clean:
	rm TestBoost TestThread

TestBoost: TestBoost.cpp
	$(CC) $(CFLAGS) TestBoost.cpp -o TestBoost

CFLAGS = -g -Wall -std=c++11
CFLAGS += -pthread

TestThread: TestThread.cpp
	$(CC) $(CFLAGS) TestThread.cpp -o TestThread
