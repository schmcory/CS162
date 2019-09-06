/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "BlueMen.cpp" is the class BlueMen implementation file
 ** Class Description:
 *********************************************************************/

//"BlueMen.hpp" is the class BlueMen header file
#include "BlueMen.hpp"

//"Character.hpp" is the Character class header file
#include "Character.hpp"

//header files
#include <iostream>
#include <cstdlib>
using namespace std;

//SET DATA FUNCTION SETS NAME, ARMOR, STRENGTH and DEAD
//NAME IS SET TO BLUE MEN
//ARMOR IS DEFAULT SET TO 3
//STRENGTH IS DEFAULT SET TO 12
//DEAD IS DEFAULT SET TO FALSE
//MOB DIE - SPECIAL ABILITY TO 0
void BlueMen::setData() {
    name = "Blue Men";
    armor = 3;
    strength = 12;
    dead = false;
    mobDie = 0;
}

//ATTACK
int BlueMen::attack() {
    int damage = attackRoll();
    cout << "Blue Men attacked!" << endl;
    cout << "Damage points: " << damage << endl;
    return damage;
}

//DEFENSE - SPECIAL ABILITY (MOB)
int BlueMen::defense(int d) {
    int defense = defenseRoll();
    int damage;
    
    //BlueMen attempts a defense
    if(d != 999) {
        cout << "Blue Men attempts a defense." << endl;
        cout << "Defense points: " << defense << "." << endl;
        damage = d - defense;
    }
    
    else {
        damage = d;
    }
    
    //BlueMen defended himself
    if(damage <= 0) {
        cout << "Blue Men defend themselves against the attack!" << endl;
        cout << "Armor points: " << armor << endl;
        cout << "Strength points: " << strength << endl;
    }
    
    //BlueMen used his armor
    else if(damage > 0 && damage <= armor) {
        armor -= damage;
        cout << "Blue Men used their armor." << endl;
        cout << "Armor points: " << armor << endl;
        cout << "Strength points: " << strength << endl;
    }
    
    //BlueMen dies
    else if(damage == 999) {
        cout << "Medusa's eyes turned the Blue Men to stone." << endl;
        cout << "Armor points: 0" << endl;
        cout << "Strength points: 0" << endl;
        dead = true;
    }
    
    //BlueMen either survives the attack or dies
    else if(damage > armor) {
        damage -= armor;
        strength -= damage;
        armor = 0;
        
        if(strength > 0) {
            cout << "Blue Men survived the attack!" << endl;
            cout << "Armor points: " << armor << endl;
            cout << "Strength points: " << strength << endl;
        }
        
        else if(strength <= 0) {
            cout << "Blue Men died!" << endl;
            cout << "Armor points: " << armor << endl;
            cout << "Strength points: " << strength << endl;
            dead = true;
        }
    }
    
    //MOB - FOR EVERY 4 POINTS OF DAMAGE THEY LOSE ONE DEFENSE DIE
    if(strength <= 8 && strength > 4) {
        mobDie = 1;
    }
    
    else if(strength <4 && strength > 0) {
        mobDie = 2;
    }
}

//ATTACK ROLL
int BlueMen::attackRoll() {
    //Generate a random number within 10 (2 dies)
    int roll = rand() % 10 + 1;
    roll += rand() % 10 + 1;
    return roll;
}

//DEFENSE ROLL
int BlueMen::defenseRoll() {
    int roll;
    if(mobDie == 0) {
    //Generate a random number within 6 (3 dies)
    roll = rand() % 6 + 1;
    roll += rand() % 6 + 1;
    roll += rand() % 6 + 1;
    }
    
    else if(mobDie == 1) {
    //Generate a random number within 6 (2 dies)
        roll = rand() % 6 + 1;
        roll += rand() % 6 + 1;
    }
    
    else if(mobDie == 2) {
    //Generate a random number within 6 (1 die)
        roll = rand() % 6 + 1;
    }
    return roll;
}

//DECONSTRUCTOR
BlueMen::~BlueMen() {
}

//VIRTUAL FUNCTIONS REDEFINED
string BlueMen::getName() {
    return name;
}

int BlueMen::getArmor() {
    return armor;
}

int BlueMen::getStrength() {
    return strength;
}

bool BlueMen::isDead() {
    return dead;
}
//END VIRTUAL FUNCTIONS



