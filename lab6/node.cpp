/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "node.cpp" is the class Node implementation file
 *********************************************************************/

//"node.hpp" is the class Node header file
#include "node.hpp"

#include <cstdlib>

//Overloaded consructor initializes value
Node::Node(int val) {
    value = val;
    
}

//Default constructor to next/prev to NULL
Node::Node() {
    next = NULL;
    prev = NULL;
}
