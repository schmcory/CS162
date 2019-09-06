/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "university.hpp" is the University class header file
 *********************************************************************/

//include guards
#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP

//header files
#include <string>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

//"building.hpp" is the Building class header file
#include "building.hpp"
//"person.hpp" is the Person class header file
#include "person.hpp"

class University {
public:
    string name;
    vector<Person*>persons;
    vector<Building>buildings;
    void printBuildings();          //function prints all the info about the buildings
    void printPeople();             //function prints all the info about the people
};


#endif /* university_hpp */
