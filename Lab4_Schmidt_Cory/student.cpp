/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "student.cpp" is the Student class implementation file
 *********************************************************************/

//"student.hpp" is the Student class header file
#include "student.hpp"

//header files
#include <string>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

//get function to get student's GPA
double Student::getGpa() {
    return gpa;
}

//set function sets student's GPA in the program
void Student::setGpa(double g) {
    gpa = g;
}

//do_work function
void Student::do_work() {
    hours = rand()%20;
    cout << name << " did " << hours << " hours of homework." << endl;
}

//personInfo function prints student's info
void Student::personInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << getGpa() << endl;
}
