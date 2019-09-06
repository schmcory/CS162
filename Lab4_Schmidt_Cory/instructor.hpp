/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "instructor.hpp" is the Instructor class header file
 *********************************************************************/

//include guards
#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP

//header files
#include <string>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

//"person.hpp" is the Person class header file
#include "person.hpp"

class Instructor : public Person {
private:
    double rating;
    
public:
    int hours;
    double getRating();                //get function to get student's GPA
    void setRating(double);            //set function sets student's GPA in the program
    virtual void do_work();         //do_work function
    void personInfo();                 //personInfo function prints student's info
};


#endif /* instructor_hpp */
