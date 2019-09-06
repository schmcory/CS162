/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/12/2018
 ** File Description: "main.cpp" is the recursive function main function file
 ** Function Description: 
 **         a. Provides user choices to select one of the three functions
 **             i. firstRecursiveFunction - menu prompts user to enter string, program recursively prints
 **             ii. secondRecursiveFunction - menu prompts user to enter number of integers, and then enter a series of integers, program recursively prints sum of the integers
 **             iii. thirdRecusiveFunction - menu prompts user to enter integer, program prints triangular number of that integer
 **         b. While loop to go back to through the menu or quit
 *********************************************************************/

//"firstRecursiveFunction.hpp" is the firstRecursiveFunction header file
#include "firstRecursiveFunction.hpp"

//"secondRecursiveFunction.hpp" is the function header file
#include "secondRecursiveFunction.hpp"

//"thirdRecursiveFunction.hpp" is the function header file
#include "thirdRecursiveFunction.hpp"

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
using namespace std;

//firstRecursiveFunction prototype
string firstRecursiveFunction(string);

//secondRecursiveFunction prototype
int secondRecursiveFunction(int a[], int l);

//thirdRecursiveFunction prototype
int thirdRecursiveFunction(int N);

int main() {

char choice;
bool quit = true;

cout << "Hello! This program allows you to choose between three functions, which do different things." << endl << endl;
cout << "The first function will print a string of characters backwards." << endl;
cout << "The second function will calculate the sum of integers you enter." << endl;
cout << "The third function will calculate the triangular number of an integer you enter, between 1 and 10, (i.e. if you enter 3, the function will output 6 (1 + 2 + 3 = 6) or if you enter 5, the function will output 15 (1 + 2 + 3 + 4 + 5 = 15))." << endl << endl;

//while loop prints menu to ask user which function they wish to call
while(quit = true) {
    cout << "Would you like to call a function or quit the program?" << endl;
    cout << "1. Call first function." << endl;
    cout << "2. Call the second function." << endl;
    cout << "3. Call the third function." << endl;
    cout << "4. Quit." << endl;
    cout << "Please enter a number based on the menu above (between 1 and 4)." << endl;
    cin >> choice;
    cout << endl;
    
    //This choice calls the first function
    if(choice == '1') {
        //function asks user for a string and then returns the reverse
        string s;
        
        cout << "Enter a string of characters and this program will print those characters in reverse." << endl << endl;
        cin.ignore();
        getline (cin, s);
        
        cout << firstRecursiveFunction(s) << endl;
        return 0;
    }
    
    else if(choice == '2') {
        int l;
        cout << "How many integers would you like to enter?" << endl;
        cin >> l;
        int *a = new int [l];
        cout << endl;
    
        cout << "Enter a series of " << l << " integers. If you enter more than " << l << " integers, the program will only add the first " << l << " integers." << endl << endl;
        for(int i = 0; i < l; i++) {
            cin >> *(a+i);
        }
    
        cout << "The sum of the array is: " << secondRecursiveFunction(a, l) << endl;
        return 0;

    }
    
    else if(choice == '3') {
    
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << endl;
    
    int triangle = thirdRecursiveFunction(n);
    
    cout << "The triangular number of " << n << " is " << triangle << "." << endl << endl;
    return 0;
    
    }
    
    else if(choice == '4') {
        cout << "Goodybe!" << endl << endl;
        break;
    }
    
    else {
        cout << "Please only enter an integer between 1 and 4." << endl << endl;
    }
    
}
}
