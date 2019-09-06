/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "animal.cpp" is the Animal class implementation file
 *********************************************************************/

//"animal.hpp" is the Animal class header file
#include "animal.hpp"

#include <iostream>
using namespace std;

Animal::Animal() {
    //Default constructor
}

//function returns the age of the animal
int Animal::getAge() {
    return age;
}

//function returns the cost of the animal
int Animal::getCost() {
    return cost;
}

//function returns babies of the animal
int Animal::getNumberOfBabies() {
    return numberOfBabies;
}

//function returns the food cost
double Animal::getFoodCost() {
    return baseFoodCost;
}

//function returns the payoff at the end of the zoo day
double Animal::getPayoff() {
    return payoff;
}

//function sets the age of an animal
void Animal::setAge (int a) {
    age = a;
}

//function sets the cost of an animal
void Animal::setCost(double c) {
    cost = c;
}

//function sets babies of an animal
void Animal::setNumberOfBabies (int nob) {
    numberOfBabies = nob;
}

//sets the food cost of an animal
void Animal::setFoodCost (double bfc) {
    baseFoodCost = bfc;
}

//function sets the payoff at the end of the zoo day
void Animal::setPayoff(int p) {
    payoff = p;
}

//function adds babies
void Animal::addBabies(int b) {
    numberOfBabies += b;
}

