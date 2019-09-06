/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "HarryPotter.hpp" is the class HarryPoter header file
 ** Class Description:
 *********************************************************************/

//include guards
#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

//"Character.hpp" is the Character class header file
#include "Character.hpp"

//header files
#include <string>

class HarryPotter : public Character {
private:
    int hogwarts;               //variable for special ability
public:
    ~HarryPotter();             //Deconstructor
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

#endif /* HarryPotter_hpp */
