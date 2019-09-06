/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "Medusa.hpp" is the class Medusa header file
 ** Class Description:
 *********************************************************************/

//include guards
#ifndef MEDUSA_HPP
#define MEDUSA_HPP

//"Character.hpp" is the Character class header file
#include "Character.hpp"

//header files
#include <string>

class Medusa : public Character {
public:
    ~Medusa();                  //Deconstructor
    void setData();             //Set data function
    int attack();               //Attack
    int defense(int d);         //Defense
    int attackRoll();           //Attack roll (2 die - 6 sided each)
    int defenseRoll();          //Defense roll (1 die - 6 sided)
    
    string getName();
    int getArmor();
    int getStrength();
    bool isDead();
};

#endif /* Medusa_hpp */
