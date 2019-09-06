/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "Character.hpp" is the class Character header file
 ** Class Description:
 *********************************************************************/

//include guards
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

//header files
#include <string>
using namespace std;

class Character {
protected:
    string name;
    int armor;
    int strength;
    bool dead;

public:
    virtual ~Character() = 0;
    virtual string getName() = 0;
    virtual int getArmor() = 0;
    virtual int getStrength() = 0;
    virtual bool isDead() = 0;
    virtual void setData() = 0;
    virtual int attack() = 0;
    virtual int defense(int d) = 0;
    virtual int attackRoll() = 0;
    virtual int defenseRoll() = 0;
};

#endif /* Character_hpp */
