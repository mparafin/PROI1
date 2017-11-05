Projekt1: main.o klasy.o
	g++ main.o klasy.o -o Projekt1

main.o: main.cpp klasy.hpp
	g++ -c main.cpp

klasy.o: klasy.hpp klasy.cpp
	g++ -c klasy.cpp

clean:
	rm *.o