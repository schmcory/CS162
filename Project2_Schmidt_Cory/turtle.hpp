/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "turtle.hpp" is the Turtle class header file
 *********************************************************************/

//include guards
#ifndef TURTLE_HPP
#define TURTLE_HPP

//"animal.hpp" is the Animal class header file
#include "animal.hpp"

#include <iostream>
using namespace std;

class Turtle : public Animal {
private:
public:
    Turtle();
};

#endif /* turtle_hpp */
