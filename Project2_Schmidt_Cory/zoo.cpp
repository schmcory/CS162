/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "zoo.cpp" is the Zoo class implementation file
 *********************************************************************/

#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

//"zoo.hpp" is the Zoo class header file
#include "zoo.hpp"

int tigerPayoff;

//default constructor
Zoo::Zoo() {
    days = 0;
    budget = 100000;
    dayFoodCost = 10;
    bankrupt = false;
    
    numTigers = 0;
    numPenguins = 0;
    numTurtles = 0;
    
    tigers = new Tiger[numTigers];
    penguins = new Penguin[numPenguins];
    turtles = new Turtle[numTurtles];
}

//destructor
Zoo::~Zoo() {
    delete[] tigers;
    delete[] penguins;
    delete[] turtles;
}

int &Zoo::getDays() {
    return days;
}

double &Zoo::getBudget() {
    return budget;
}

double Zoo::getDayFoodCost() {
    return dayFoodCost;
}

bool Zoo::getBank() {
    return bankrupt;
}

void Zoo::setBank(bool x) {
    if(x == false) {
        bankrupt = false;
    }
    
    if (x == true) {
        bankrupt = true;
    }
}


/* TIGERS */
Tiger & Zoo::getTiger(int t) {
    return tigers[t];
}

//void function adds tigers to the zoo
void Zoo::addTiger() {
    int i;
    Tiger temp_array[numTigers];
    for(int i = 0; i < numTigers; i++) {
        temp_array[i] = tigers[i];
    }
    
    numTigers += 1;
    //deletes the old array
    delete[] tigers;
    tigers = new Tiger[numTigers];
    
    for(i = 0; i < numTigers - 1; i++) {
        tigers[i].setAge(temp_array[i].getAge());
        tigers[i].setCost(temp_array[i].getCost());
        tigers[i].setNumberOfBabies(temp_array[i].getNumberOfBabies());
        tigers[i].setFoodCost(temp_array[i].getFoodCost());
        tigers[i].setPayoff(temp_array[i].getPayoff());
    }
}

void Zoo::removeTiger(int r) {
    Tiger temp_array[numTigers];
    for(int i = 0; i < r; i++) {
        temp_array[i] = tigers[i];
    }
    
    for(int i = r + 1; i < numTigers; i++) {
        temp_array[i - 1] = tigers[i];
    }
    
    numTigers--;
    delete[] tigers;
    tigers = new Tiger[numTigers];
    cout << tigers << endl;
    
    for(int i = 0; i < numTigers; i++) {
        tigers[i].setAge(temp_array[i].getAge());
        tigers[i].setCost(temp_array[i].getCost());
        tigers[i].setNumberOfBabies(temp_array[i].getNumberOfBabies());
        tigers[i].setFoodCost(temp_array[i].getFoodCost());
        tigers[i].setPayoff(temp_array[i].getPayoff());
    }
}

int Zoo::getNumOfTigers() {
    return numTigers;
}

/* END TIGERS */

/* PENGUINS */
Penguin & Zoo::getPenguin(int t) {
    return penguins[t];
}

//void function adds tigers to the zoo
void Zoo::addPenguin() {
    int i;
    Penguin temp_array[numPenguins];
    for(int i = 0; i < numPenguins; i++) {
        temp_array[i] = penguins[i];
    }
    
    numPenguins += 1;
    //deletes the old array
    delete[] penguins;
    penguins = new Penguin[numPenguins];
    
    for(i = 0; i < numPenguins - 1; i++) {
        penguins[i].setAge(temp_array[i].getAge());
        penguins[i].setCost(temp_array[i].getCost());
        penguins[i].setNumberOfBabies(temp_array[i].getNumberOfBabies());
        penguins[i].setFoodCost(temp_array[i].getFoodCost());
        penguins[i].setPayoff(temp_array[i].getPayoff());
    }
}

void Zoo::removePenguin(int r) {
    Penguin temp_array[numPenguins];
    for(int i = 0; i < r; i++) {
        temp_array[i] = penguins[i];
    }
    
    for(int i = r + 1; i < numPenguins; i++) {
        temp_array[i - 1] = penguins[i];
    }
    
    numPenguins--;
    delete[] penguins;
    penguins = new Penguin[numPenguins];
    cout << penguins << endl;
    
    for(int i = 0; i < numPenguins; i++) {
        penguins[i].setAge(temp_array[i].getAge());
        penguins[i].setCost(temp_array[i].getCost());
        penguins[i].setNumberOfBabies(temp_array[i].getNumberOfBabies());
        penguins[i].setFoodCost(temp_array[i].getFoodCost());
        penguins[i].setPayoff(temp_array[i].getPayoff());
    }
}

int Zoo::getNumOfPenguins() {
    return numPenguins;
}

/* END PENGUINS */

/* TURTLES */
Turtle & Zoo::getTurtle(int t) {
    return turtles[t];
}

//void function adds tigers to the zoo
void Zoo::addTurtle() {
    int i;
    Turtle temp_array[numTurtles];
    for(int i = 0; i < numTurtles; i++) {
        temp_array[i] = turtles[i];
    }
    
    numTurtles += 1;
    //deletes the old array
    delete[] turtles;
    turtles = new Turtle[numTurtles];
    
    for(i = 0; i < numTurtles - 1; i++) {
        turtles[i].setAge(temp_array[i].getAge());
        turtles[i].setCost(temp_array[i].getCost());
        turtles[i].setNumberOfBabies(temp_array[i].getNumberOfBabies());
        turtles[i].setFoodCost(temp_array[i].getFoodCost());
        turtles[i].setPayoff(temp_array[i].getPayoff());
    }
}

void Zoo::removeTurtle(int r) {
    Turtle temp_array[numTurtles];
    for(int i = 0; i < r; i++) {
        temp_array[i] = turtles[i];
    }
    
    for(int i = r + 1; i < numTurtles; i++) {
        temp_array[i - 1] = turtles[i];
    }
    
    numTurtles--;
    delete[] turtles;
    turtles = new Turtle[numTurtles];
    cout << turtles << endl;
    
    for(int i = 0; i < numTurtles; i++) {
        turtles[i].setAge(temp_array[i].getAge());
        turtles[i].setCost(temp_array[i].getCost());
        turtles[i].setNumberOfBabies(temp_array[i].getNumberOfBabies());
        turtles[i].setFoodCost(temp_array[i].getFoodCost());
        turtles[i].setPayoff(temp_array[i].getPayoff());
    }
}

int Zoo::getNumOfTurtles() {
    return numTurtles;
}

/* END TURTLES */

void Zoo::subtractFoodCost() {
    double tigerFoodCost;
    double penguinFoodCost;
    double turtleFoodCost;
    
    tigerFoodCost = (dayFoodCost*tigers[0].getFoodCost()*numTigers);
    penguinFoodCost = (dayFoodCost*penguins[0].getFoodCost()*numTigers);
    turtleFoodCost = (dayFoodCost*turtles[0].getFoodCost()*numTigers);
    
    budget -= (tigerFoodCost+penguinFoodCost+turtleFoodCost);
}

//function incremements each animal up 1 per day
void Zoo::incrementAge() {
    days++;
    for(int i = 0; i < numTigers; i++) {
        tigers[i].setAge(tigers[i].getAge() + 1);
    }
    
    for(int i = 0; i < numPenguins; i++) {
        penguins[i].setAge(penguins[i].getAge() + 1);
    }
    
    for(int i = 0; i < numTurtles; i++) {
        turtles[i].setAge(turtles[i].getAge() + 1);
    }
}

//void function prints the payoff for the day, with or without the bonus applied
void Zoo::printPayoff(int bonus) {
    srand(time(NULL));
    int penguinPayoff;
    int turtlePayoff;
    int tigerPayoff;
    int tigerBonus;

    if(bonus == 1) {
        tigerPayoff = ((tigers[0].getPayoff())*numTigers);
        penguinPayoff = ((penguins[0].getPayoff())*numPenguins);
        turtlePayoff = ((turtles[0].getPayoff())*numTurtles);
        budget += (tigerPayoff+penguinPayoff+turtlePayoff);
    }
    
    if(bonus == 2) {
        tigerPayoff = ((tigers[0].getPayoff())*numTigers) + ((rand()%250)+250);
        penguinPayoff = ((penguins[0].getPayoff())*numPenguins);
        turtlePayoff = ((turtles[0].getPayoff())*numTurtles);
        budget += (tigerPayoff+penguinPayoff+turtlePayoff);
    }
   
}
    
