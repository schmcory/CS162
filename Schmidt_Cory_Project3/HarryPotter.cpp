/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "HarryPotter.cpp" is the class HarryPoter implementation file
 ** Class Description:
 *********************************************************************/

//"HarryPotter.hpp" is the class HarryPoter header file
#include "HarryPotter.hpp"

//header files
#include <iostream>
#include <cstdlib>
using namespace std;

//SET DATA FUNCTION SETS NAME, ARMOR, STRENGTH and DEAD
//NAME IS SET TO HARRY POTTER
//ARMOR IS DEFAULT SET TO 0 - NO ARMOR
//STRENGTH IS DEFAULT SET TO 10
//DEAD IS DEFAULT SET TO FALSE
//HOGWARTS - SPECIAL ABILITY TO 1
void HarryPotter::setData() {
    name = "Harry Potter";
    armor = 0;
    strength = 10;
    dead = false;
    hogwarts = 1; 
}

//ATTACK
int HarryPotter::attack() {
    int damage = attackRoll();
    cout << "Harry Potter attacked!" << endl;
    cout << "Damage points: " << damage << "." << endl;
    return damage;
}

//DEFENSE - NO SPECIAL ABILITY
int HarryPotter::defense(int d) {
    int defense = defenseRoll();
    int damage;
    
    //HarryPotter attempts a defense
    if(d != 999) {
        cout << "Harry Potter attempts a defense." << endl;
        cout << "Defense points: " << defense << "." << endl;
        damage = d - defense;
    }
    
    else {
        damage = d;
    }
    
    //HarryPotter defended himself
    if(damage <= 0) {
        cout << "Harry Potter defended himself against the attack!" << endl;
        cout << "Armor points: " << armor << endl;
        cout << "Strength points: " << strength << endl;
    }
    
    //HOGWARTS
    //Harry Potter dies but he recovered with his special ability
    else if(damage == 999 && hogwarts == 1) {
        cout << "Medusa's eyes turned Harry Potter to stone." << endl;
        cout << "Harry Potter recovered from the attack. 20 strength points!" << endl;
        hogwarts = 0;
        strength = 20;
        cout << "Armor points: " << armor << endl;
        cout << "Strength points: " << strength << endl;
    }
    //END HOGWARTS
    
    //Harry Potter dies
    else if(damage == 999 && hogwarts == 0) {
        cout << "Medusa's eyes turned Harry Potter to stone." << endl;
        strength = 0;
        cout << "Armor points: " << armor << endl;
        cout << "Strength points: " << strength << endl;
        dead = true;
    }
    
    //Harry Potter either survives the attack or dies
    else if(damage > armor) {
        damage -= armor;
        strength -= damage;
        armor = 0;
        
        if(strength > 0) {
            cout << "Harry Potter survived the attack!" << endl;
            cout << "Armor points: " << armor << endl;
            cout << "Strength points: " << strength << endl;
        }
        
        //HOGWARTS
        else if(strength <= 0 && hogwarts == 1) {
            cout << "Harry Potter died!" << endl;
            cout << "Harry Potter recovered from the attack. 20 strength points!" << endl;
            hogwarts = 0;
            strength = 20;
            cout << "Armor points: " << armor << endl;
            cout << "Strength points: " << strength << endl;
        }
        //END HOGWARTS
        
        else if(strength <= 0 && hogwarts == 0) {
            cout << "Harry Potter died!" << endl;
            cout << "Armor points: " << armor << endl;
            cout << "Strength points: " << strength << endl;
            dead = true;
        }
    }
}

//ATTACK ROLL
int HarryPotter::attackRoll() {
    //Generate a random number within 6 (2 dies)
    int roll = rand() % 6 + 1;
    roll += rand() % 6 + 1;
    return roll;
}

//DEFENSE ROLL
int HarryPotter::defenseRoll() {
    //Generate a random number within 6 (2 dies)
    int roll = rand() % 6 + 1;
    roll += rand() % 6 + 1;
    return roll;
}

//DECONSTRUCTOR
HarryPotter::~HarryPotter() {
}

//VIRTUAL FUNCTIONS REDEFINED
string HarryPotter::getName() {
    return name;
}

int HarryPotter::getArmor() {
    return armor;
}

int HarryPotter::getStrength() {
    return strength;
}

bool HarryPotter::isDead() {
    return dead;
}
//END VIRTUAL FUNCTIONS

