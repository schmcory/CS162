/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 03/05/2018
 ** File Description: main.cpp is the main function file
 *********************************************************************/

//linearSearch.hpp is the linearSearch function header file
#include "linearSearch.hpp"

//bubbleSort.hpp is the bubbleSort function header file
#include "bubbleSort.hpp"

//binarySearch.hpp is the binarySearch function header file
#include "binarySearch.hpp"

//header files
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int choice;
    string fileName;
    ifstream ifs;
    ofstream ofs;
    int *array;
    int val;
    int search;
    int size = 0;
    
    cout << "This program allows you to test 3 algrorithims." << endl << endl;
    cout << "Enter a number between 1 and 4 to test an algorithim or quit the program." << endl;
    cout << "1. Linear Search." << endl;
    cout << "2. Bubble Sort." << endl;
    cout << "3. Binary Search." << endl;
    cout << "4. Quit." << endl;
    cin >> choice;
        
    if(choice != 4) {
        cout << "Enter a file to work with." << endl;
        cin.ignore();
        //do while loop to open the file, prints error message if file is not found in directory
        do {
            getline(cin, fileName);
            ifs.open(fileName.c_str());
            if(!ifs) {
                cout << "File could not be opened. Try again." << endl;
            }
        }while (!ifs);
        
        //count the number of integers in the file to get the size of the array
        while(ifs >> val) {
            size++;
        }
        
        //create new array to hold the number of integers from the file
        array = new int[size];
    
        ifs.clear();
        int index = 0;
        
        //loop to store each integer value in the new array
        while (ifs >> val) {
            array[index++] = val;
        }
        
        switch (choice) {
            
            //CASE 1
            case 1: {
                cout << "Enter an integer." << endl;
                search = getInt();
                cout << "Searching for " << search << "." << endl;
                val = linearSearch(array, size, search);
            
                if(val == -1) {
                    cout << fileName.c_str() << ": target value not found." << endl;
                }
            
                else {
                    cout << fileName.c_str() << ": target value found." << endl;
                }
            break;
            }
            //END CASE 1
            
            //CASE 2
            case 2: {
            bubbleSort(array, size);
            printArray(array, size);
            cout << "Enter a name for the output file where to store the sorted array. The program will add the .txt extension." << endl;
            fileName = "";
            
            while(fileName == "") {
                getline(cin, fileName);
            }
            
            fileName += ".txt.";
            ofs.open(fileName.c_str());
            
            for(int index = 0; index < size; index++) {
                ofs << array[index] << " ";
            }
                
            cout << "Sorted array stored in " << fileName << "." << endl;
            break;
            }
            //END CASE 2
        
            //END CASE 3
            case 3: {
            bubbleSort(array, size);
            printArray(array, size);
            
            cout << "Enter an integer." << endl;
            search = getInt();
            cout << "Searching for " << search << "." << endl;
            val = binarySearch(array, size, search);
            
            if(val < 0) {
                cout << fileName.c_str() << ": target value not found." << endl;
            }
            
            else {
                cout << fileName.c_str() << ": target value found." << endl;
            }
            break;
            }
            //END CASE 3
                
        }//END SWITCH STATEMENT
        
        delete array;
    }//END IF STATEMENT
        
        else if (choice == 4) {
            cout << "Goodbye!" << endl;
        }
    
        else {
            cout << "Please only enter a number between 1 and 4." << endl;
        }
    
    return 0;
};
