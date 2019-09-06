/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/12/2018
 ** File Description: "firstRecursiveFunction.cpp" is the function implementation file
 ** Function Description: The function prints a string of characters in reverse
 ** Parameters: string
 *********************************************************************/

//"firstRecursiveFunction.hpp" is the firstRecursiveFunction header file
#include "firstRecursiveFunction.hpp"

#include <string>
#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

string firstRecursiveFunction(string s) {
    if(s.length() == 1) {
        return s;
    }
    
    else {
        return firstRecursiveFunction(s.substr(1, s.length())) + s.at(0);
    }
}
