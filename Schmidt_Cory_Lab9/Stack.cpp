/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 03/05/2018
 ** File Description: Stack.cpp is the Stack class implementation file
 *********************************************************************/

//Stack.hpp is the Stack class header file
#include "Stack.hpp"

//header files
#include <iostream>
using namespace std; 

void Stack::palindrome() {
    string userInput;
    string reverse;
    
    cout << "Enter a string." << endl;
    getline(cin, userInput);
    getline(cin, userInput);
    
    for(int i=0; i<userInput.length(); i++) {
        bucket.push(userInput[i]);
    }
    
    for(int i=0; i<userInput.length(); i++) {
        reverse += bucket.top();
        bucket.pop();
    }
    
    cout << reverse << endl;
}
