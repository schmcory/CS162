/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "student.hpp" is the Student class header file
 *********************************************************************/

//include guards
#ifndef STUDENT_HPP
#define STUDENT_HPP

//header files
#include <string>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

//"person.hpp" is the Person class header file
#include "person.hpp"

class Student : public Person {
private:
    double gpa;
    
public:
    int hours;
    double getGpa();                   //get function to get student's GPA
    void setGpa(double);               //set function sets student's GPA in the program
    virtual void do_work();         //do_work function
    void personInfo();                 //personInfo function prints student's info
};

#endif /* student_hpp */
