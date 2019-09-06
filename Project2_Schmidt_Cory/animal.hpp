/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/04/2018
 ** Description: "animal.hpp" is the Animal class header file
 *********************************************************************/

//include guards
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

//header files
#include <iostream>
using namespace std;

class Animal {
//protected member variables
protected:
    int age;
    double cost;
    int numberOfBabies;
    double baseFoodCost;
    int payoff;
    
//public member functions
public:
    Animal();
    int getAge();
    int getCost();
    int getNumberOfBabies();
    double getFoodCost();
    double getPayoff();
    
    void setAge(int);
    void setCost(double);
    void setNumberOfBabies(int);
    void setFoodCost(double);
    void setPayoff(int);
    
    void addBabies(int);
};

#endif /* animal_hpp */
