/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 01/14/2018
 ** Description: "readMatrix.cpp" is the readMatrix function implementation file.
 *********************************************************************/

//header files
#include <iostream>
#include <string>
using namespace std;

//readMatrix.hpp is the readMatrix function header file
#include "readMatrix.hpp"

//determinant.hpp is the determinant function header file
#include "determinant.hpp"

//void function readMatrix asks user to enter either 4 or 9 integers
void readMatrix(int** matrix, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << "Enter the integer for row " << i+1 << " and column " << j+1 << ": ";
            cin >> matrix[i][j];
        }
    }
          cout << "\n";
}

