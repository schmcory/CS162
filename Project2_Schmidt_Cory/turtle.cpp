/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "turtle.cpp" is the Turtle class implementation file
 *********************************************************************/

//"animal.hpp" is the Animal class header file
#include "animal.hpp"
//"turtle.hpp is the turtle class header file
#include "turtle.hpp"

#include <iostream>
using namespace std;

Turtle::Turtle() {
    setAge(1);
    setCost(100);
    setNumberOfBabies(0);
    setPayoff(5.00);
    setFoodCost(5.00);
}

