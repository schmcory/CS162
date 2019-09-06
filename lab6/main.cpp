/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "main.cpp" is the main function file
 *********************************************************************/

//"doublylinkedlist.hpp" is the class DoublyLinkedList header file
#include "doublylinkedlist.hpp"

//header files
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    
    //list is an instance of the DoublyLinkedList class
    DoublyLinkedList list;
    char choice;
    
    //while loop when the choice is not to exit the program
    while(choice != '9') {
        
        cout << "1. Add a new node to the head." << endl;
        cout << "2. Add a new node to the tail." << endl;
        cout << "3. Delete the first node in the list." << endl;
        cout << "4. Delete the last node in the list." << endl;
        cout << "5. Traverse the list reversely." << endl;
        cout << "6. Traverse the list." << endl;
        cout << "7. Print the value the of the node the head is pointing to." << endl;
        cout << "8. Print the value the of the node the tail is pointing to." << endl;
        cout << "9. Exit the program" << endl;
        
        cout << "Please choose an option between 1 and 9." << endl;
        cin >> choice;
        
        //Adds a new node to the head
        if(choice == '1') {
            int number1 = 0;
            int val1;
            bool input1 = true;
        
            //while loop for input validation
            //prevents user from entering a non positive integer
            while(input1 = true) {
            cout << "Please enter a positive integer." << endl;
            
                if(!(cin >> number1 && number1 > 0)) {
                    cout << "Invalid input." << endl << endl;
                    cin.clear();
                    cin.ignore();
                }
                
                else {
                    val1 = number1;
                    list.addHead(val1);
                    list.traverse();
                    cout << endl;
                    break;
            }
        }
        }
        
        //Adds a new node the tail
        else if(choice == '2') {
            int number2 = 0;
            int val2;
            bool input2 = true;
            
            //while loop for input validation
            //prevents user from entering a non positive integer
            while(input2 = true) {
            cout << "Please enter a positive integer." << endl;
            
                if(!(cin >> number2 && number2 > 0)) {
                    cout << "Invalid input." << endl << endl;
                    cin.clear();
                    cin.ignore();
                }
            
                else {
                    val2 = number2;
                    list.addTail(val2);
                    list.traverse();
                    cout << endl;
                    break;
            }
        }
        
        }
        
        //Removes the first node from the head
        else if(choice == '3') {
            int val3;
            val3 = list.removeHead();
            
            if(val3 == -1) {
                cout << "The list is empty." << endl << endl;
            }
            
            else {
                list.traverse();
                cout << endl;
            }
            
        }
        
        //removes the last node from the tail
        else if(choice == '4') {
            int val4;
            val4 = list.removeTail();
            
            if(val4 == -1) {
                cout << "The list is empty." << endl << endl;
            }
            
            else {
                list.traverse();
                cout << endl;
            }
            
        }
        
        //prints the list of Nodes in reverse
        else if(choice == '5') {
            list.traverseReverse();
            cout << endl;
        }
        
        //prints the list of Nodes
        else if(choice == '6') {
            list.traverse();
            cout << endl;
        }
        
        //prints the Node the head is pointing to
        else if(choice == '7') {
            int headValue;
            headValue = list.getHeadValue();
            
            if(headValue == -1) {
                cout << "The list is empty." << endl << endl;
            }
            
            else {
                cout << "The value of the node the head is pointing to is " << headValue << "." << endl << endl;
            }
        }
        
        //prints the Node the tail is pointing to
        else if(choice == '8') {
            int tailValue;
            tailValue = list.getTailValue();
            
            if(tailValue == -1) {
                cout << "The list is empty." << endl << endl;
            }
            
            else {
                cout << "The value of the node the tail is pointing to is " << tailValue << "." << endl << endl;
            }
        }
        
        //exits the program
        else if(choice == '9') {
            cout << "Goodbye!" << endl;
        }
        
        //input validation
        else {
            cout << "Please only choose a number between 1 and 7." << endl << endl;
        }
    }
}
