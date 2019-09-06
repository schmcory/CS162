/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "person.hpp" is the Person class header file
 *********************************************************************/

//include guards
#ifndef PERSON_HPP
#define PERSON_HPP

//header files
#include <string>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
    
public:
    void setName(string);
    void setAge(int);
    
    virtual void do_work();
    virtual void personInfo();
};

#endif /* person_hpp */
