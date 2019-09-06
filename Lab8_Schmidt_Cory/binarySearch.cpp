/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 03/05/2018
 ** File Description: binarySearch.cpp is the binarySearch function implementation file
 *********************************************************************/

//binarySearch.hpp is the binarySearch function header file
#include "binarySearch.hpp"

int binarySearch (int *array, int size, int target) {
    int first = 0;
    int last = size - 1;
    int middle;
    int position = -1;
    while(position == -1 && first <= last) {
        middle = (last + first)/2;
        
        if(array[middle] == target) {
            position = middle;
        }
        
        else if(array[middle] > target) {
            last = middle - 1;
        }
        
        else {
            first = middle + 1;
        }
    }
    return position;
};
