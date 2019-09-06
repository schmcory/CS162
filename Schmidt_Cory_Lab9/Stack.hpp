/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 03/05/2018
 ** File Description: Stack.hpp is the Stack class header file
 *********************************************************************/

//include guards
#ifndef STACK_HPP
#define STACK_HPP

#include <stack>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

class Stack {
private:
    stack<char> bucket;

public:
    void palindrome();
};

#endif /* Stack_hpp */
