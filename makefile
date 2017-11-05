CC=g++

Projekt1: main.o Date.o Calendar.o
	$(CC) main.o Date.o Calendar.o -o Projekt1

main.o: main.cpp Date.hpp Calendar.hpp
	$(CC) -c main.cpp

Date.o: Date.hpp Date.cpp
	$(CC) -c Date.cpp

Calendar.o: Calendar.hpp Calendar.cpp
	$(CC) -c Calendar.cpp

clean:
	rm *.o