CXXFLAGS = -std=c++0x
CXXFLAGS = -g

game: main.o animal.o tiger.o penguin.o turtle.o zoo.o
	g++ ${CXXFLAGS} main.o animal.o tiger.o penguin.o turtle.o zoo.o -o game

main.o: main.cpp
	g++ ${CXXFLAGS} -c main.cpp

animal.o: animal.hpp animal.cpp
	g++ ${CXXFLAGS} -c animal.cpp

tiger.o: tiger.hpp tiger.cpp
	g++ ${CXXFLAGS} -c tiger.cpp

penguin.o: penguin.hpp penguin.cpp
	g++ ${CXXFLAGS} -c penguin.cpp

turtle.o: turtle.hpp turtle.cpp
	g++ ${CXXFLAGS} -c turtle.cpp

zoo.o: zoo.hpp zoo.cpp
	g++ ${CXXFLAGS} -c zoo.cpp

clean:
	rm *.o game
