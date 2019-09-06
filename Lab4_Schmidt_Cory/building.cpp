/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "building.cpp" is the Building class implementation file
 *********************************************************************/

//"building.hpp" is the Building class header file
#include "building.hpp"

//header files
#include <string>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

//BuildingInfo() function prints building name and address
void Building::buildingInfo() {
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
}



