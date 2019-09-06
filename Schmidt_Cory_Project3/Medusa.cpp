/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "Medusa.cpp" is the class Medusa implementation file
 ** Class Description:
 *********************************************************************/

//"Medusa.hpp" is the class Medusa header file
#include "Medusa.hpp"

//header files
#include <iostream>
#include <cstdlib>
using namespace std;

//SET DATA FUNCTION SETS NAME, ARMOR, STRENGTH and DEAD
//NAME IS SET TO MEDUSA
//ARMOR IS DEFAULT SET TO 3
//STRENGTH IS DEFAULT SET TO 8
//DEAD IS DEFAULT SET TO FALSE
void Medusa::setData() {
    name = "Medusa";
    armor = 3;
    strength = 8;
    dead = false;
}

//ATTACK - SPECIAL ABILITY (GLARE)
int Medusa::attack() {
    int damage = attackRoll();
    if(damage == 12) {
        cout << "Medusa used her Glare power and turned her opponent to stone." << endl;
        damage = 999;
    }
    
    else if(damage != 12) {
        cout << "Medusa attacked!" << endl;
        cout << "Damage: " << damage << "." << endl;
    }
    return damage;
}

//DEFENSE
int Medusa::defense(int d) {
    int defense = defenseRoll();
    int damage;
    
    //Medusa attempts a defense
    if(d != 999) {
        cout << "Medusa attempts a defense." << endl;
        cout << "Defense points: " << defense << "." << endl;
        damage = d - defense;
    }
    
    else {
        damage = d;
    }
    
    //Medusa defended himself
    if(damage <= 0) {
        cout << "Medusa defend themselves against the attack!" << endl;
        cout << "Armor points: " << armor << endl;
        cout << "Strength points: " << strength << endl;
    }
    
    //Medusa used his armor
    else if(damage > 0 && damage <= armor) {
        armor -= damage;
        cout << "Medusa used her armor." << endl;
        cout << "Armor points: " << armor << endl;
        cout << "Strength points: " << strength << endl;
    }
    
    //Medusa dies
    else if(damage == 999) {
        cout << "Medusa's eyes turned the Blue Men to stone." << endl;
        cout << "Armor points: 0" << endl;
        cout << "Strength points: 0" << endl;
        dead = true;
    }
    
    //Medusa either survives the attack or dies
    else if(damage > armor) {
        damage -= armor;
        strength -= damage;
        armor = 0;
        
        if(strength > 0) {
            cout << "Medusa survived the attack!" << endl;
            cout << "Armor points: " << armor << endl;
            cout << "Strength points: " << strength << endl;
        }
        
        else if(strength <= 0) {
            cout << "Medusa died!" << endl;
            cout << "Armor points: " << armor << endl;
            cout << "Strength points: " << strength << endl;
            dead = true;
        }
    }
}

//ATTACK ROLL
int Medusa::attackRoll() {
    //Generate a random number within 6 (2 dies)
    int roll = rand() % 6 + 1;
    roll += rand() % 6 + 1;
    return roll;
}

//DEFENSE ROLL
int Medusa::defenseRoll() {
    //Generate a random number within 6 (1 die)
    int roll = rand() % 6 + 1;
    return roll;
}

//DECONSTRUCTOR
Medusa::~Medusa() {
}

//VIRTUAL FUNCTIONS REDEFINED
string Medusa::getName() {
    return name;
}

int Medusa::getArmor() {
    return armor;
}

int Medusa::getStrength() {
    return strength;
}

bool Medusa::isDead() {
    return dead;
}
//END VIRTUAL FUNCTIONS
