/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 11/8/2017
 ** Description: "ant.hpp" is the Ant class implementation file.
 *********************************************************************/

#include "ant.hpp"
#include <iostream>
using namespace std;

//Default constructor
Ant::Ant(){
}

//Overloaded constructor
Ant::Ant(int r, int c){
    setDirection(north);
    setColor(' ');
    setARow(r);
    setACol(c);
    setBRow(r);
    setBCol(c);
}

//setter functions
void Ant::setDirection(Direction d){
    direc = d;
}

void Ant::setColor(char co){
    Color = co;
}

void Ant::setARow(int ar){
    aRow = ar;
}

void Ant::setACol(int ac){
    aCol = ac;
}

void Ant::setBRow(int br){
    bRow = br;
}

void Ant::setBCol(int bc){
    bCol = bc;
}
//end setter functions

//getter functions
Direction Ant::getDirection(){
    return direc;
}

char Ant::getColor(){
    return Color;
}

int Ant::getARow(){
    return aRow;
}

int Ant::getACol(){
    return aCol;
}

int Ant::getBRow(){
    return bRow;
}

int Ant::getBCol(){
    return bCol;
}
//end getter functions
