/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 01/21/2018
 ** Description: Letters.hpp is the letters (count, output) functions header file
 *********************************************************************/

//include guards
#ifndef LETTERS_HPP
#define LETTERS_HPP

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Function prototypes
void count_letters(ifstream &, int*);
void output_letters(ofstream &, int*);

#endif /* letters_hpp */
