/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 11/8/2017
 ** Description: "ant.hpp" is the Ant class header file.
 *********************************************************************/

#ifndef ANT_HPP
#define ANT_HPP

//enum variable Direction, offering north, south, east and west
enum Direction {north, south, east, west};

//Ant class holds private and public data members
class Ant
{
//private data members
private:
    Direction direc;
    char Color;
    int aRow, aCol, bRow, bCol;
    
public:
    Ant();                              //Default constructor
    Ant(int r, int c);                  //Overloaded constructor
    
    Direction getDirection();           //enum function call, gets Direction from the user
    
    //void function call, setter functions
    void setDirection(Direction d);
    void setColor(char co);
    void setARow(int ar);
    void setACol(int ac);
    void setBRow(int br);
    void setBCol(int bc);
    
    //getter functions
    //int function call
    int getARow();
    int getACol();
    int getBRow();
    int getBCol();
    //char function call
    char getColor();
};

#endif /* ant_hpp */
