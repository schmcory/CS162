/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 01/28/2018
 ** Description: "LoadedDie.cpp" is the LoadedDie class implementation file
 *********************************************************************/

//LoadedDie.hpp is the LoadedDie class header file
#include "LoadedDie.hpp"

//Die.hpp is the Die class header file
#include "Die.hpp"

//header files
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

LoadedDie::LoadedDie() {
    sides = 6;
}

LoadedDie::LoadedDie(int N) : Die(N) {
    turn = 1;
    type = "Loaded Die";
}

//
int LoadedDie::roll() {
    int val=turn==1?sides:Die::roll();
    turn = (turn+1)%2;
    return val;
}
