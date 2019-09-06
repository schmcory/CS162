/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 01/28/2018
 ** Description: "Dice.hpp" is the Dice header header file
 *********************************************************************/

#ifndef DIE_HPP
#define DIE_HPP

//header files
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Die {
protected:
    //represents the number of sides on the individual die
    int sides;
    string type;

public:
    //default constructor
    Die();
    
    //overloaded constructor
    Die(int N);
    
    //function returns a random number 1 and N after rolling die once
    int roll();
    
    //getter functions
    string getType();       //gets the type of die to be played with from each user
    int getSides();         //gets the number of sides on each die to be played with from each user
};

#endif /* Dice_hpp */
