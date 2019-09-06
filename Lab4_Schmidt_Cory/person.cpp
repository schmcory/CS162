/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "person.cpp" is the Person class implementation file
 *********************************************************************/

//"person.hpp" is the Person class header file
#include "person.hpp"

//header files
#include <string>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

void Person::setName(string n) {
    name = n;
}

void Person::setAge(int a) {
    age = a;
}

void Person::do_work() {
   //parent class, implemented in child classes
}

void Person::personInfo() {
    //parent class, implemented in child classes
}
