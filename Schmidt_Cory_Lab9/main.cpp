/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/26/2018
 ** File Description: main.cpp is the main function file for the Queue/Stack program
 *********************************************************************/

//Queue.hpp is the Queue class header file
#include "Queue.hpp"

//Stack.hpp is the Stack class header file
#include "Stack.hpp"

//header files
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    int num = 0;
    Queue queue;
    Stack stack;
    
    while(choice != 3) {
        cout << "Enter 1 to simulate the Queue program." << endl;
        cout << "Enter 2 to simulate the Stack program." << endl;
        cout << "Enter 3 to quit." << endl;
        cin >> choice;
        
        if(choice == 1) {
            queue.outputQueue();
        }
        
        else if(choice == 2) {
            stack.palindrome();
        }
        
        else if(choice == 3) {
            cout << "Goodybe!" << endl;
            break;
        }
        
        else {
            cout << "Please only enter a number between 1 and 4." << endl;
        }
    }
}
