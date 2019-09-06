/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "university.cpp" is the University class implementation file
 *********************************************************************/

//"university.hpp" is the University class header file
#include "university.hpp"

//header files
#include <string>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

void University::printBuildings() {
    cout << "Buildings Info: " << endl;
    for (int i = 0; i < buildings.size(); i++) {
        buildings[i].buildingInfo();
    }
}

void University::printPeople() {
    cout << "People Info: " << endl;
    for(int i = 0; i < persons.size(); i++) {
        persons[i]->personInfo();
    }
}




