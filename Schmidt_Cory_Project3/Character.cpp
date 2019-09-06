/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "Character.cpp" is the class Character implementation file
 ** Class Description:
 *********************************************************************/

//"Character.hpp" is the Character class header file
#include "Character.hpp"

//header files
#include <string>
using namespace std;


Character::~Character() {
}

int Character::getArmor() {
    return armor;
}

int Character::getStrength() {
    return strength;
}

string Character::getName() {
    return name;
}

int Character::attack() {
    int damage = attackRoll();
    return damage;
}

int Character::defense(int d) {
    int defense = defenseRoll();
    return defense;
}

bool Character::isDead() {
    return dead;
}

void Character::setData() {
    name = "Character";
    armor = 0;
    strength = 1;
    dead = false;
}

int Character::attackRoll() {
    int roll = 0;
    return roll;
}

int Character::defenseRoll() {
    int roll = 0;
    return roll;
}


