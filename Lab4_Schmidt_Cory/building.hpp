/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "building.hpp" is the Building class header file
 *********************************************************************/

//include guards
#ifndef BUILDING_HPP
#define BUILDING_HPP

//header files
#include <string>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Building {
public:
    string name;
    int size;
    string address;
    void buildingInfo();     //BuildingInfo() function prints building name and address
};

#endif /* building_hpp */
