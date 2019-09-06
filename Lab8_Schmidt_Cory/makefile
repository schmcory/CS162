CXXFLAGS = -std=c++0x

function: linearSearch.o bubbleSort.o binarySearch.o main.o
	g++ ${CXXFLAGS} linearSearch.o bubbleSort.o binarySearch.o main.o -o function

linearSearch.o: linearSearch.cpp linearSearch.hpp
	g++ ${CXXFLAGS} -c linearSearch.cpp

bubbleSort.o: bubbleSort.cpp bubbleSort.hpp
	g++ ${CXXFLAGS} -c bubbleSort.cpp

binarySearch.o: binarySearch.cpp binarySearch.hpp
	g++ ${CXXFLAGS} -c binarySearch.cpp

main.o: main.cpp
	g++ ${CXXFLAGS} -c main.cpp

clean:
	rm *.o function
