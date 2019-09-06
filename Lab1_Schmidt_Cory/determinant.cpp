/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 01/14/2018
 ** Description: "Determinant.cpp" is the determinant function implementation file.
 *********************************************************************/

//header files
#include <iostream>
#include <string>

//readMatrix.hpp is the readMatrix function header file
#include "readMatrix.hpp"

//determinant.hpp is the determinant function header file
#include "determinant.hpp"

using namespace std;


int determinant(int** matrix, int size){
    //Determinant calculation variable
    int detmcalc;
    
    //If statement determines which formula to use, 2x2 or 3x3 matrix
    //detmalc variable is set based on the calculation of a, b, c, d
    //Determining the determinant of a matrix
//2x2
    if(size == 2) {
        int a = matrix[0][0];
        int b = matrix[0][1];
        int c = matrix[1][0];
        int d = matrix[1][1];
    
        detmcalc = (a*d) - (b*c);
}

//3x3
else{
    int a = matrix[0][0];
    int b = matrix[0][1];
    int c = matrix[1][0];
    int d = matrix[1][1];
    int e = matrix[1][1];
    int f = matrix[1][2];
    int g = matrix[2][0];
    int h = matrix[2][1];
    int i = matrix[2][2];
    
    detmcalc = a*(e*i - f*h) - b*(d*i - f*g) + c*(d*h - e*g);
    }
    return detmcalc;
}

