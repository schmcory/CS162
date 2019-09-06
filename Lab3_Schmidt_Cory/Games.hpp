/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 01/28/2018
 ** Description: "Games.hpp" is the Games header header file
 *********************************************************************/

#ifndef GAMES_HPP
#define GAMES_HPP

//Die.hpp is the Die class header file
#include "Die.hpp"

//LoadedDie.hpp is the LoadedDie class header file
#include "LoadedDie.hpp"

//header files 
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Game {
private:
//dice for the two players
    Die *d1, *d2;

//this array holds the result of each roll for 2 players
//holds up to 10000 rounds
    int rounds[10000][2];

    int numRounds;
    int numSides;
    string choice;
    char response;
    int points1, points2;
    bool quit = true;
    bool userChoice = true;

public:
//default constructor
    Game();
//menu function asks the user to play or exit
    void menu();
//play function generates number of rounds
    void play();
//results function generates/prints results of the game
    void results();
};

#endif /* Games_hpp */
