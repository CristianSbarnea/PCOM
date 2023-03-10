CC=g++
CFLAGS=-Wall -Wextra

all: deserialize myCat

deserialize: deserialize.o
	$(CC) $(CFLAGS) -o deserialize deserialize.o

deserialize.o: deserialize.cpp
	$(CC) $(CFLAGS) -c deserialize.cpp

myCat: myCat.o
	$(CC) $(CFLAGS) -o myCat myCat.o

myCat.o: myCat.cpp
	$(CC) $(CFLAGS) -c myCat.cpp

clean:
	rm *.o deserialize myCat