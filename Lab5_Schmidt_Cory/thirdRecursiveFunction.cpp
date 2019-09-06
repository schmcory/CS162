/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/12/2018
 ** File Description: "thirdRecursiveFunction.cpp" is the function implementation file
 ** Function Description: The function recursively calculations the triangular number of and int
 ** Parameters: int
 *********************************************************************/

//"thirdRecursiveFunction.hpp" is the function header file
#include "thirdRecursiveFunction.hpp"

#include <iostream>
using namespace std;

int thirdRecursiveFunction(int N) {
    if(N <= 0) {
        return -1;
    }
    
    else{
        return thirdRecursiveFunction(N-1)+N;
    }
}
