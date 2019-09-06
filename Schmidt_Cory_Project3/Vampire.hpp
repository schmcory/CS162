/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "Vampire.hpp" is the class Vampire header file
 ** Class Description:
 *********************************************************************/

//include guards
#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

//"Character.hpp" is the Character class header file
#include "Character.hpp"

//header files
#include <string>

//Class Vampire inherits from Character
class Vampire : public Character {
public:
    ~Vampire();                 //Deconstructor
    void setData();             //Set data function
    int attack();               //Attack
    int defense(int d);         //Defense
    int attackRoll();           //Attack roll (1 die - 12 sided)
    int defenseRoll();          //Defense roll (1 die - 6 sided)
    
    //virtual functions
    string getName();
    int getArmor();
    int getStrength();
    bool isDead();
};

#endif /* Vampire_hpp */
