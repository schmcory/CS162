/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "Vampire.cpp" is the class Vampire implementation file
 ** Class Description:
 *********************************************************************/

//"Vampire.hpp" is the class Vampire header file
#include "Vampire.hpp"

//header files
#include <iostream>
#include <cstdlib>
using namespace std;

//SET DATA FUNCTION SETS NAME, ARMOR, STRENGTH and DEAD
//NAME IS SET TO VAMPIRE
//ARMOR IS DEFAULT SET TO 1
//STRENGTH IS DEFAULT SET TO 18
//DEAD IS DEFAULT SET TO FALSE
void Vampire::setData() {
    name = "Vampire";
    armor = 1;
    strength = 18;
    dead = false;
}

//ATTACK
int Vampire::attack() {
    int damage = attackRoll();
    cout << "Vampire attacked!" << endl;
    cout << "Damage points: " << damage << endl;
    return damage;
}

//DEFENSE - SPECIAL ABiLITY (CHARM)
int Vampire::defense(int d) {
    //Begin charm (special ability)
    int charm = rand() % 2 + 1;
    
    if(charm == 1) {
        cout << "Vampire used his charm. No damage was done!" << endl;
        cout << "Armor points: " << armor << endl;
        cout << "Strength points: " << strength << endl;
    }
    //End charm
    
    //Vampire attempts a defense
    else {
        int defense = defenseRoll();
        int damage;
    
        if(d != 999) {
            cout << "Vampire attempts a defense." << endl;
            cout << "Defense points: " << defense << "." << endl;
            damage = d - defense;
        }
        
        else {
            damage = d;
        }
        
        //Vampire defended himself
        if(damage <= 0) {
            cout << "Vampire defends himself against the attack!" << endl;
            cout << "Armor points: " << armor << endl;
            cout << "Strength points: " << strength << endl;
        }
        
        //Vampire used his armor
        else if(damage == armor) {
            armor -= damage;
            cout << "Vampire used his armor." << endl;
            cout << "Armor points: " << armor << endl;
            cout << "Strength points: " << strength << endl;
        }
        
        //Vampire dies
        else if(damage == 999) {
            cout << "Medusa's eyes turned Vampire to stone." << endl;
            cout << "Armor points: 0" << endl;
            cout << "Strength points: 0" << endl;
            dead = true;
        }
        
        //Vampire either survives the attack or dies
        else if(damage > armor) {
            damage -= armor;
            strength -= damage;
            armor = 0;
            
            if(strength > 0) {
                cout << "Vampire survived the attack!" << endl;
                cout << "Armor points: " << armor << endl;
                cout << "Strength points: " << strength << endl;
            }
            
            else if(strength <= 0) {
                cout << "Vampire died!" << endl;
                cout << "Armor points: " << armor << endl;
                cout << "Strength points: " << strength << endl;
                dead = true;
            }
            
        }
    }
}

    //ATTACK ROLL
    int Vampire::attackRoll() {
        //Generate a random number within 12 (1 die)
        int roll = rand() % 12 + 1;
        return roll;
    }

    //DEFENSE ROLL
    int Vampire::defenseRoll() {
        //Generate a random number within 6 (1 die)
        int roll = rand() % 6 + 1;
        return roll;
    }

    //DECONSTRUCTOR
    Vampire::~Vampire() {
    }

//VIRTUAL FUNCTIONS REDEFINED
string Vampire::getName() {
    return name;
}

int Vampire::getArmor() {
    return armor;
}

int Vampire::getStrength() {
    return strength;
}

bool Vampire::isDead() {
    return dead;
}
//END VIRTUAL FUNCTIONS
