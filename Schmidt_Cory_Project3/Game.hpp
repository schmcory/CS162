/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "HarryPotter.cpp" is the class HarryPoter implementation file
 ** Class Description:
 *********************************************************************/

//include guards
#ifndef GAME_HPP
#define GAME_HPP

//"Character.hpp" is the Character class header file
#include "Character.hpp"

class Game {
protected:
    int t;
public:
    void showMenu();
    int getChoice();
    void showRules();
    int getCharacter1();
    int getCharacter2();
    
    //TESTING PROGRAM
    void showTestMenu();
    int getTestChoice();
    void testProgram(int t);
};


#endif /* Game_hpp */
