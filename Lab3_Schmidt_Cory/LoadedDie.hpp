/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 01/28/2018
 ** Description: "LoadedDie.hpp" is the LoadedDie class header file
 *********************************************************************/

#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP

//header files
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//"Die.hpp"
#include "Die.hpp"

class LoadedDie : public Die {
private:
    int turn;
    
public:
    LoadedDie();
    LoadedDie(int N);
    int roll();
};


#endif /* LoadedDie_hpp */
