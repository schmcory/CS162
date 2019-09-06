/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "Barbarian.cpp" is the class Barbarian implementation file
 ** Class Description:
 *********************************************************************/

//"Barbarian.hpp" is the class Barbarian header file
#include "Barbarian.hpp"

//header file
#include <iostream>
#include <cstdlib>
using namespace std;

//SET DATA FUNCTION SETS NAME, ARMOR, STRENGTH and DEAD
//NAME IS SET TO BARBARIAN
//ARMOR IS DEFAULT SET TO 0
//STRENGTH IS DEFAULT SET TO 12
//DEAD IS DEFAULT SET TO FALSE
void Barbarian::setData() {
    name = "Barbarian";
    armor = 0;                  //Barbarian has no armor
    strength = 12;
    dead = false;
}

//ATTACK
int Barbarian::attack() {
    int damage = attackRoll();
    cout << "Barbarian attacked!" << endl;
    cout << "Damage points: " << damage << endl;
    return damage;
}

//DEFENSE - NO SPECIAL ABILITY
int Barbarian::defense(int d) {
        int defense = defenseRoll();
        int damage;
    
        //Barbarian attempts a defense
        if(d != 999) {
            cout << "Barbarian attempts a defense." << endl;
            cout << "Defense points: " << defense << "." << endl;
            damage = d - defense;
        }
        
        else {
            damage = d;
        }
        
        //Barbarian defended himself
        if(damage <= 0) {
            cout << "Barbarian defends himself against the attack!" << endl;
            cout << "Armor points: " << armor << endl;
            cout << "Strength points: " << strength << endl;
        }
        
        //Barbarian dies
        else if(damage == 999) {
            cout << "Medusa's eyes turned Barbarian to stone." << endl;
            cout << "Armor points: 0" << endl;
            cout << "Strength points: 0" << endl;
            dead = true;
        }
    
        //Barbarian either survives the attack or dies
        else if(damage > armor) {
            damage -= armor;
            strength -= damage;
            armor = 0;
            
            if(strength > 0) {
                cout << "Barbarian survived the attack!" << endl;
                cout << "Armor points: " << armor << endl;
                cout << "Strength points: " << strength << endl;
            }
            
            else if(strength <= 0) {
                cout << "Barbarian died!" << endl;
                cout << "Armor points: " << armor << endl;
                cout << "Strength points: " << strength << endl;
                dead = true;
            }
            
        }
}

//ATTACK ROLL
int Barbarian::attackRoll() {
    //Generate a random number within 6 (2 dies)
    int roll = rand() % 6 + 1;
    roll += rand() % 6 + 1;
    return roll;
}

//DEFENSE ROLL
int Barbarian::defenseRoll() {
    //Generate a random number within 6 (2 dies)
    int roll = rand() % 6 + 1;
    roll += rand() % 6 + 1;
    return roll;
}

//DECONSTRUCTOR
Barbarian::~Barbarian() {
}

//VIRTUAL FUNCTIONS REDEFINED
string Barbarian::getName() {
    return name;
}

int Barbarian::getArmor() {
    return armor;
}

int Barbarian::getStrength() {
    return strength;
}

bool Barbarian::isDead() {
    return dead;
}
//END VIRTUAL FUNCTIONS

