CXXFLAGS = -std=c++0x

osu:	main.o university.o building.o person.o student.o instructor.o
	g++ ${CXXFLAGS} main.o university.o building.o person.o student.o instructor.o -o osu

main.o:	main.cpp
	g++ ${CXXFLAGS} -c main.cpp

university.o:	university.cpp university.hpp 
		g++ ${CXXFLAGS} -c university.cpp

building.o:	building.cpp building.hpp 
		g++ ${CXXFLAGS} -c building.cpp

person.o:	person.cpp person.hpp 
		g++ ${CXXFLAGS} -c person.cpp 

student.o:	student.cpp student.hpp 
		g++ ${CXXFLAGS} -c student.cpp

instructor.o: 	instructor.cpp instructor.hpp 
		g++ ${CXXFLAGS} -c instructor.cpp 

clean:
	rm *.o osu