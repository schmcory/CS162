CXXFLAGS = -std=c++0x

war: main.o Die.o LoadedDie.o Games.o 
	g++ ${CXXFLAGS} main.o Die.o LoadedDie.o Games.o -o war

main.o: main.cpp
	g++ ${CXXFLAGS} -c main.cpp

Die.o: Die.cpp Die.hpp
	g++ ${CXXFLAGS} -c Die.cpp

LoadedDie.o: LoadedDie.cpp LoadedDie.hpp
	g++ ${CXXFLAGS} -c LoadedDie.cpp

Games.o: Games.cpp Games.hpp
	g++ ${CXXFLAGS} -c Games.cpp

clean:
	rm *.o war
