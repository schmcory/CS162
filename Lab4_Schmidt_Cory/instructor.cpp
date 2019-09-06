/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "instructor.cpp" is the Instructor class implementation file
 *********************************************************************/

//"instructor.hpp" is the Instructor class header file
#include "instructor.hpp"

//header files
#include <string>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

//get function to get instructor's rating
double Instructor::getRating() {
    return rating;
}

//set function sets instructor's rating in the program
void Instructor::setRating(double r) {
    rating = r;
}

//do_work function
void Instructor::do_work() {
    hours = rand()%20;
    cout << name << " graded papers for " << hours << " hours." << endl;
}

//personInfo function prints student's info
void Instructor::personInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Rating: " << getRating() << endl;
}
