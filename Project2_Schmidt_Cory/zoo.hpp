/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "zoo.hpp" is the Zoo class header file
 *********************************************************************/

//include guards
#ifndef ZOO_HPP
#define ZOO_HPP

//"animal.hpp" is the Animal class header file
#include "animal.hpp"
//"tiger.hpp" is the Tiger class header file
#include "tiger.hpp"
//"penguin.hpp" is the Penguin class header file
#include "penguin.hpp"
//"turtle.hpp" is the Turtle class header file
#include "turtle.hpp"

#include <iostream>
using namespace std;

class Zoo {
private:
    Tiger *tigers;
    Penguin *penguins;
    Turtle *turtles;
    
    double budget;
    bool bankrupt;
    
    int days;
    double dayFoodCost;
    
    int numTigers;
    int numPenguins;
    int numTurtles;

public:
    Zoo();
    ~Zoo();
    int &getDays();
    double &getBudget();
    double getDayFoodCost();
    bool getBank();
    void setBank(bool);
    
    void printPayoff(int);
    void subtractFoodCost();
    void incrementAge();
    
    Tiger &getTiger(int);
    void addTiger();
    void removeTiger(int);
    void printTigers();
    int getNumOfTigers();
    
    Penguin &getPenguin(int);
    void addPenguin();
    void removePenguin(int);
    void printPenguins();
    int getNumOfPenguins();
    
    Turtle &getTurtle(int);
    void addTurtle();
    void removeTurtle(int);
    void printTurtle();
    int getNumOfTurtles();
};

#endif /* zoo_hpp */
