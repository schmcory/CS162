/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "penguin.cpp" is the Penguin class implementation file
 *********************************************************************/

//"animal.hpp" is the Animal class header file
#include "animal.hpp"
//"penguin.hpp" is the Penguin class header file
#include "penguin.hpp"

#include <iostream>
using namespace std;

//Default constructor the penguin class
Penguin::Penguin() {
    setAge(1);
    setCost(1000);
    setNumberOfBabies(0);
    setPayoff(100);
    setFoodCost(10);
}


