/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/12/2018
 ** File Description: "secondRecursiveFunction.cpp" is the function implementation file
 ** Function Description: The function recursively calculates the sum of an array of ints
 ** Parameters: int[] a, int n
 *********************************************************************/

//"secondRecursiveFunction.hpp" is the function header file
#include "secondRecursiveFunction.hpp"

#include <iostream>
using namespace std;

//The function recursively calculates the sum of an array of ints
int secondRecursiveFunction(int array[], int length){
    if(length == 1) {
        return array[0];
    }
    
    else {
        return array[0] + secondRecursiveFunction(array+1, length-1);
    }
}
