/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "Barbarian.hpp" is the class Barbarian header file
 ** Class Description:
 *********************************************************************/

//include guards
#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

//"Character.hpp" is the Character class header file
#include "Character.hpp"

//header files
#include <string>

class Barbarian : public Character {    
public:
    ~Barbarian();               //Deconstructor
    void setData();             //Set data function
    int attack();               //Attack
    int defense(int d);         //Defense
    int attackRoll();           //Attack roll (2 die - 6 sided each)
    int defenseRoll();          //Defense roll (2 die - 6 sided each)
    
    string getName();
    int getArmor();
    int getStrength();
    bool isDead();
};

#endif /* Barbarian_hpp */
