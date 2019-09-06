/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "BlueMen.hpp" is the class BlueMen header file
 ** Class Description:
 *********************************************************************/

//include guards
#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

//"Character.hpp" is the Character class header file
#include "Character.hpp"

//header files
#include <string>

class BlueMen : public Character {
protected:
    int mobDie;               //variable for special ability (Mob)
public:
    ~BlueMen();                 //Deconstructor
    void setData();             //Set data function
    int attack();               //Attack
    int defense(int d);         //Defense
    int attackRoll();           //Attack roll (2 die - 10 sided each)
    int defenseRoll();          //Defense roll (2 die - 6 sided each)
    
    string getName();
    int getArmor();
    int getStrength();
    bool isDead();
};

#endif /* BlueMen_hpp */
