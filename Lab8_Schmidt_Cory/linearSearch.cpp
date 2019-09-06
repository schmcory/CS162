/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 03/05/2018
 ** File Description: linearSearch.cpp is the linearSearch function implementation file
 *********************************************************************/

//linearSearch.hpp is the linearSearch function header file
#include "linearSearch.hpp"

//header files
#include <iostream>
#include <limits>
using namespace std;

int linearSearch(int *array, int size, int target) {
    int index = 0;
    int position = -1;
    bool found = false;
    while (index < size && !found) {
        if(array[index] == target) {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
};

int getInt(int minSize, int maxSize) {
    int userInt;
    bool isValid = false;
    
    while(!isValid) {
        if(cin >> userInt && userInt >= minSize && userInt <= maxSize) {
            isValid = true;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        else {
            cout << "Invalid input. Please enter an integer between " << minSize << " and " << maxSize << "." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return userInt;
};
