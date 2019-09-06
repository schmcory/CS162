/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 01/14/2018
 ** Description: Main function file for Lab 1
 *********************************************************************/

#include <iostream>
#include <string>
using namespace std;

//readMatrix.hpp is the readMatrix function header file
#include "readMatrix.hpp"

int main() {

	//Variable stores the matrix size selection
	char selection;
	//Variable stores the size the of the matrix
	int size; 

	//Ask the users to choose the size of the matrix (2x2 or 3x3)
	cout << "Please choose the size of the matrix." << endl;
	cout << "A. 2x2 matrix" << endl;
	cout << "B. 3x3 matrix" << endl;
	cin >> selection;

	//'Selection' determines the value assigned to 'size'
	//If user types A or a then the value assigned to 'size' is 2
	if(selection == 'A' || selection == 'a'){
		size = 2;
	}

	//Else if the user types B or b the value assigned to 'size' is 3
	else if(selection == 'B' || selection == 'b'){
		size = 3;
	}

	//Else user types any other value besides A, a, B, or b.
	//Program prints error message
	else {
		cout << "Invalid selection. You may only enter A, a, B, or b." << endl;
		return 0;
	}

	//If user types 2 or 3, program displays the size of the matrix
	cout << "The size of the matrix is " << size << "x" << size << endl;

    //Initalization of the pointer array
    int** matrix = new int*[size];
    for(int i = 0; i < size; i++){
        matrix[i] = new int[size];
    }

    //Function call sets up the matrix by taking input from the user
    readMatrix(matrix, size);
    //Function call calculates the determinant of the matrix
    int calc = determinant(matrix, size);
    
    //Displays the matrix for the user
    cout << "The " << size << "x" << size << " matrix is: " << endl;
    for(int row = 0; row < size; row++) {
        for(int col = 0; col < size; col++){
            cout << matrix[row][col] << "\t";
        }
        cout << "\n";
    }
    
    //Deletes stored data
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
        delete[] matrix;
    
    cout << "The determinant of the matrix is: " << calc << endl;
    
    return 0;
    }


