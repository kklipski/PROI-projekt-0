CC=g++


CCFLAGS=-c -Wall


release: program


debug: CCFLAGS += -g
debug: program


program: main.o funkcje1.o
	$(CC) main.o funkcje1.o -o program


main.o: main.cpp funkcje1.hpp
	$(CC) $(CCFLAGS) main.cpp


funkcje1.o: funkcje1.cpp funkcje1.hpp
	$(CC) $(CCFLAGS) funkcje1.cpp


clean:
	rm -f *.o
