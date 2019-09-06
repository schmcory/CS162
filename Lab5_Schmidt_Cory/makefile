function: main.o firstRecursiveFunction.o secondRecursiveFunction.o thirdRecursiveFunction.o
	g++ main.o firstRecursiveFunction.o secondRecursiveFunction.o thirdRecursiveFunction.o -o function

main.o: main.cpp
	g++ -c main.cpp

firstRecursiveFunction.o: firstRecursiveFunction.cpp firstRecursiveFunction.hpp
	g++ -c firstRecursiveFunction.cpp

secondRecursiveFunction.o: secondRecursiveFunction.cpp secondRecursiveFunction.hpp
	g++ -c secondRecursiveFunction.cpp

thirdRecursiveFunction.o: thirdRecursiveFunction.cpp thirdRecursiveFunction.hpp
	g++ -c thirdRecursiveFunction.cpp

clean:
	rm *.o function
