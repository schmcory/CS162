/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 01/28/2018
 ** Description: "Die.cpp" is the Die class implementation file
 *********************************************************************/

//"Die.hpp" is the Die class header file
#include "Die.hpp"

//header files
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//default constructor
Die::Die() {
    //If the user doesn't choose sides of the die, it defaults to six
    sides = 6;
}

//overloaded constructor
Die::Die(int N) {
    sides = N;
    type = "Regular Die";
}

//returns a random number for the number sides on the die
int Die::roll() {
    return rand() % sides + 1;
}

//gets the type of die to be played with from each user
string Die::getType() {
    return type;
}

//gets the number of sides on each die to be played with from each user
int Die::getSides() {
    return sides;
}


