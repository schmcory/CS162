/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "tiger.cpp" is the Tiger class implementation file
 *********************************************************************/

//"animal.hpp" is the Animal class header file
#include "animal.hpp"
//"tiger.hpp is the Tiger class header file
#include "tiger.hpp"

#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

Tiger::Tiger() {
    setAge(1);
    setCost(10000);
    setNumberOfBabies(1);
    setPayoff(200);
    setFoodCost(50.00);
}


