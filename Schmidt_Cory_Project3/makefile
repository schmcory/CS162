CXXFLAGS = -std=c++0x

game: main.o Character.o Barbarian.o BlueMen.o Medusa.o Vampire.o HarryPotter.o Game.o
	g++ ${CXXFLAGS} main.o Character.o Barbarian.o BlueMen.o Medusa.o Vampire.o HarryPotter.o Game.o -o game

main.o: main.cpp
	g++ ${CXXFLAGS} -c main.cpp

Character.o: Character.hpp Character.cpp
	g++ ${CXXFLAGS} -c Character.cpp

Barbarian.o: Barbarian.hpp Barbarian.cpp
	g++ ${CXXFLAGS} -c Barbarian.cpp

BlueMen.o: BlueMen.hpp BlueMen.cpp
	g++ ${CXXFLAGS} -c BlueMen.cpp

Medusa.o: Medusa.hpp Medusa.cpp
	g++ ${CXXFLAGS} -c Medusa.cpp

Vampire.o: Vampire.hpp Vampire.cpp
	g++ ${CXXFLAGS} -c Vampire.cpp

HarryPotter.o: HarryPotter.hpp HarryPotter.cpp
	g++ ${CXXFLAGS} -c HarryPotter.cpp

Game.o: Game.hpp Game.cpp
	g++ ${CXXFLAGS} -c Game.cpp

clean:
	rm *.o game
