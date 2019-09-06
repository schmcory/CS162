/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 03/05/2018
 ** File Description: bubbleSort.cpp is the bubbleSort function implementation file
 ** Sources: Sort-Bubble.mp4
 *********************************************************************/

//bubbleSort.hpp is the bubbleSort function header file
#include "bubbleSort.hpp"

#include <iostream>
using namespace std;

void bubbleSort (int *array, int size) {
    bool swap;
    
    do {
        swap = false;
        for(int index = 0; index < size - 1; index++) {
            if(array[index] > array[index + 1]) {
                int temp = array[index];
                array[index] = array[index+1];
                array[index + 1] = temp;
                swap = true;
            }
        }
    }while (swap);
};

void printArray(int *array, int size) {
    for(int i = 0; i < size - 1; i++) {
        cout << array[i] << ", ";
    }
    
    if(size > 0) {
        cout << array[size - 1];
    }
    cout << endl;
};
