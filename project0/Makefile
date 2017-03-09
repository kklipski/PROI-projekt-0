CC=g++


CCFLAGS=-c -Wall


release: program


debug: CCFLAGS += -g
debug: program


program: main.o
	$(CC) main.o -o program


main.o: main.cpp
	$(CC) $(CCFLAGS) main.cpp


clean:
	rm -f *.o
