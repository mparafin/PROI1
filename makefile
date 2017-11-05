Projekt1: main.o Date.o
	g++ main.o Date.o -o Projekt1

main.o: main.cpp Date.hpp
	g++ -c main.cpp

klasy.o: Date.hpp Date.cpp
	g++ -c Date.cpp

clean:
	rm *.o