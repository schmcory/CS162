CXXFLAGS = -std=c++0x

containers: Queue.o Stack.o main.o
	g++ ${CXXFLAGS} Queue.o Stack.o main.o -o containers

Queue.o: Queue.cpp Queue.hpp
	g++ ${CXXFLAGS} -c Queue.cpp

Stack.o: Stack.cpp Stack.hpp
	g++ ${CXXFLAGS} -c Stack.cpp

main.o: main.cpp
	g++ ${CXXFLAGS} -c main.cpp

clean:
	rm *.o containers
