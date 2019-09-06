/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 01/28/2018
 ** Description: "Games.cpp" is the Games class implementation file
 *********************************************************************/

//Games.hpp is the Games class header file
#include "Games.hpp"

//Die.hpp is the Die class header file
#include "Die.hpp"

//LoadedDie.hpp is the LoadedDie class header file
#include "LoadedDie.hpp"

//headerfiles
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//constructor sets
Game::Game() {
    d1 = d2 = NULL;
}

//menu function for introduction
void Game::menu()
{
    
    cout << "This is a game of War. It is played through dice." << endl;
    cout << "The player who rolls the higher number gets 1 point. If both players roll the same numer, it is considered a draw and no one gets a point." << endl << endl;
    
    while(quit == true) {
        cout << "Would you like to play the game or exit?\n1. Start Game of War.\n2. Exit.\nPlease enter 1 or 2." << endl << endl;
        cin >> response;
        
        //if user enters 1, the program breaks out of the while loop to play the game
        if (response == '1') {
            break;
        }
        
        //if user enters 2, the game quits
        else if (response == '2') {
            cout << "Goodbye!" << endl << endl;
        }
        
        //if user enters anything other than 1 or 2
        else {
            cout << "Please only enter '1' or '2'." << endl;
        }
        
    }
    
    cout << endl;
    
    //Introduction
    cout << "The Game of War" << endl <<endl;
    
    //Player 1
    cout << "Ready Player 1." << endl;
    
    //get the number of sides from the user
    cout << "How many sides should your dice have?" << endl;
    cin >> numSides;
    cout << endl;
    
    //while loop with input validation for loaded die v. regular die
    while (userChoice = true) {
    cout << "Would you like to play with a loaded die? Enter 'yes' or 'no'." << endl;
    cin >> choice;
    if(choice.compare("yes") == 0) {
        d1 = new LoadedDie(numSides);
        break;
    }
    
    else if(choice.compare("no") == 0) {
        d1 = new Die(numSides);
        break;
    }
    
    else {
        cout << "Please only enter 'yes' or 'no'." << endl << endl;
    }
    }
    
    cout << endl;
    
    //Player 2
    cout << "Ready Player 2." << endl;
    
    //get the number of sides from the user
    cout << "How many sides should your dice have?" << endl;
    cin >> numSides;
    
    //while loop with input validation for loaded die v. regular die
    while(userChoice = true) {
    cout << "Would you like to play with a loaded die? Enter 'yes' or 'no'." << endl;
    cin >> choice;
    if(choice.compare("yes") == 0) {
        d2 = new LoadedDie(numSides);
        break;
    }
    
    else if(choice.compare("no") == 0) {
        d2 = new Die(numSides);
        break;
    }
    
    else {
        cout << "Please only enter 'yes' or 'no'." << endl;
    }
    }
    
    cout << endl;
    
    //How many rounds would you like to play
    cout << "How many rounds would you like to play?" << endl;
    cin >> numRounds;
    cout << endl;
}


//void function for game play to generate number of rounds
void Game::play() {
    for(int i = 0; i < numRounds; i++)
    {
        rounds[i][0] = d1 -> roll();
        rounds[i][1] = d2 -> roll();
    }
}


//void function to print results, display winner based on points gained
void Game::results() {
    int points1 = 0;
    int points2 = 0;
    cout << "Number of rounds played: " << numRounds << endl;
    cout << "Player 1 chose: " << d1 ->getType() << " with " << d1 -> getSides() << " sides" << endl;
    cout << "Player 2 chose: " << d2 ->getType() << " with " << d2 -> getSides() << " sides" << endl;
    
    cout << "Player 1 \t Player 2 \t" << endl << endl;
    
    for(int i = 0; i < numRounds; i++) {
        cout << rounds[i][0] << "\t\t\t" << rounds[i][1] << endl;
    
        if(rounds[i][0] > rounds[i][1]) {
            points1++;
        }
        
        
        else if(rounds[i][0] < rounds[i][1]) {
            points2++;
        }
    }

    if (points1 > points2) {
        cout << "Player 1 won!" << endl;
    }
    
    else if (points2 > points1) {
        cout << "Player 2 won!" << endl;
    }
    
    else {
        cout << "It's a draw!" << endl;
    }
}






