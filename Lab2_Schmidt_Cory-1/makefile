letters: main.o letters.o
	g++ main.o letters.o -o letters

main.o: main.cpp
	g++ -c main.cpp

letters.o: letters.cpp letters.hpp
	g++ -c letters.cpp

clean:
	rm *.o letters
