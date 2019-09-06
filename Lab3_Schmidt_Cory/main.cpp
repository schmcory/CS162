/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 01/28/2018
 ** Description: "main.cpp" is the War game main function file
 *********************************************************************/

//Die.hpp is the Die class header file
#include "Die.hpp"

//LoadedDie.hpp is the LoadedDie class header file
#include "LoadedDie.hpp"

//Games.gpp is the Games class header file
#include "Games.hpp"

//main function
int main()
{
    Game g;
    
    //function calls to menu, play and results from Game class
    g.menu();
    g.play();
    g.results();
}
