CXXFLAGS = -std=c++0x

list: main.o doublylinkedlist.o node.o
	g++ ${CXXFLAGS} main.o doublylinkedlist.o node.o -o list

main.o: main.cpp
	g++ ${CXXFLAGS} -c main.cpp

doublylinkedlist.o: doublylinkedlist.cpp
	g++ ${CXXFLAGS} -c doublylinkedlist.cpp

node.o: node.hpp node.cpp
	g++ ${CXXFLAGS} -c node.cpp

clean:
	rm *.o list
