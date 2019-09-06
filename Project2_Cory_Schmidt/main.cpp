/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 01/21/2018
 ** Description: Main function file for Project 1
 *********************************************************************/

//header files
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//"ant.hpp" is the Ant class header file
#include "ant.hpp"

int main()
{
    int Rows, Cols, steps, row, col;
    char Start, choice;
    bool getStartingLocation1 = true;
    bool getStartingLocation2 = true;
    bool quit = true;
    
    cout << "This program implements a simulation of Langton's Ant.\n" << endl;
    
    while(quit == true)
    {
        char choice;
        cout << "Would you like to play?\n1. Start Langton’s Ant simulation.\n2. Quit.\nPlease enter 1 or 2.\n";
        cin >> choice;
        
        if(choice == '1')
        {
            break;
        }
        
        else if(choice == '2')
        {
            cout << "Goodbye!";
            return 0;
        }
        
        //if the user enters anything other than p or q, the program displays an error message
        else
        {
            cout << "Please only enter '1' or '2'." << endl;
            cin.clear();
            cin.ignore();
        }
    }

    
    //get board rows
    while (getStartingLocation1 == true)
    {
        cout << "Enter the number of rows for the board size: \n";
        cin >> Rows;
        if (Rows > 0)
        {
            getStartingLocation1 = false;
        }
        else
        {
            cout << "Please enter a number greater than zero.\n" << endl;
            cin.clear();
            cin.ignore();
        }
    }
    
    //get board columns from the user
    getStartingLocation1 = true;
    while (getStartingLocation1 == true)
    {
        cout << "Enter the number of columns for the board size: \n";
        cin >> Cols;
        if (Cols > 0)
        {
            getStartingLocation1 = false;
        }
        else
        {
            cout << "Please enter a number greater than zero.\n" << endl;
            cin.clear();
            cin.ignore();
        }
    }
    
    //get number of steps from the user
    getStartingLocation1 = true;
    while (getStartingLocation1 == true)
    {
        cout << "Enter the number of steps that you want the ant to take (number must be greater than zero): \n";
        cin >> steps;
        if (steps > 0)
        {
            getStartingLocation1 = false;
        }
        else
        {
            cout << "Please enter a number greater than zero.\n" << endl;
            cin.clear();
            cin.ignore();
        }
    }
 
    
    //ask user if they want a random starting location from the user
    getStartingLocation1 = true;
    while (getStartingLocation2 == true)
    {
        cout << "Would you like to choose a random starting location for the ant? Type 'y' for yes or 'n' for no.\n";
        cin >> Start;
        
        //if user selects random starting location
        //Citation for srand() function, time: http://www.bogotobogo.com/cplusplus/RandomNumbers.php
        if (Start=='Y' || Start=='y')
        {
            //seed the random number with the computer's clock, generate random numbers
            srand(time(0));
            row = (rand()% Rows);
            col = (rand()% Cols);
            getStartingLocation2 = false;
            
            //if user wants to choose the position the ant will start at (no random location)
        }
        else if (Start == 'N' || Start =='n')
        {
            while (getStartingLocation1 == true){
                cout << "Which row would you like the ant to start at (less than or equal to chosen number of rows, > 0): \n";
                cin >> row;
                if (row <= Rows && row > 0)
                {
                    row -= 1;
                    getStartingLocation1 = false;
                }
                else
                {
                    cout << "Please enter a number less than or equal to rows specified and greater than zero.\n" << endl;
                    cin.clear();
                    cin.ignore();
                }
        }
            while (getStartingLocation1 == false)
            {
                cout << "Which column would you like the ant to start at (less than or equal to chosen number of columns, > 0): \n";
                cin >> col;
                if (col <= Cols && col > 0)
                {
                    col -= 1;
                    getStartingLocation1 = true;
                }
                else
                {
                    cout << "Please enter a number less than or equal to columns specified and greater than zero.\n" << endl;
                    cin.clear();
                    cin.ignore();
                }
            }
            getStartingLocation2 = false;
            
        //if user enters anything or than 'y' or 'n', program displays an error message
    }
        else
        {
            cout << "Please enter 'y' or yes or 'n' for no." << endl;
            cin.clear();
            cin.ignore();
        }
    }
    
    Ant ant(row, col); //create an ant object
    
    cout << "Press enter to begin the game.";
    cin.ignore();
    cin.get();
    
    //creates board
    char **board = new char*[Rows];
        for (int i = 0; i < Rows; i++)
            board[i] = new char[Cols];

 
    //initializes board to blank
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            board[i][j] = ' ';
        }
        
        
    }
    //creates the ant object at the starting location chosen by the user or randomly generated by the program
    board[row][col] = '*';
    
    
    //prints out board to screen
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
    
    //for loop for the number of steps that was input by user
    for (int i = steps; i > 0 ; i--)
    {
        
        //if the color is white then the ant changes direction
        if (ant.getColor() == ' ')
        {
            board[ant.getARow()][ant.getACol()] = '#';
            
            if(ant.getDirection() == north)
            {
                ant.setDirection(east);
                col = ant.getBCol();
                col = col + 1;
                
                if (col >= Cols)
                    col = 0;
                ant.setBCol(col);
                
                if (board[ant.getBRow()][ant.getBCol()] == ' ')
                {
                    ant.setColor(' ');
                }
                
                else
                {
                    ant.setColor('#');
                }
                
                board[ant.getBRow()][ant.getBCol()] = '*';
            }
            else if(ant.getDirection() == east)
            {
                ant.setDirection(south);
                row = ant.getBRow();
                row = row + 1;
                
                if (row >= Rows)
                    row = 0;
        
                ant.setBRow(row);
                if (board[ant.getBRow()][ant.getBCol()] == ' ')
                {
                    ant.setColor(' ');
                }
                
                else
                {
                    ant.setColor('#');
                }
                board[ant.getBRow()][ant.getBCol()] = '*';
            }
            else if(ant.getDirection() == south)
            {
                ant.setDirection(west);
                col = ant.getBCol();
                col = col - 1;
                
                if (col < 0)
                    col = Cols - 1;
                ant.setBCol(col);
                
                if (board[ant.getBRow()][ant.getBCol()] == ' ')
                {
                    ant.setColor(' ');
                }
                
                else
                {
                    ant.setColor('#');
                }
                board[ant.getBRow()][ant.getBCol()] = '*';
            }
            else if(ant.getDirection() == west)
            {
                ant.setDirection(north);
                row = ant.getBRow();
                row = row - 1;
                
                if (row < 0)
                    row = Rows - 1;
                ant.setBRow(row);
                
                if (board[ant.getBRow()][ant.getBCol()] == ' ')
                {
                    ant.setColor(' ');
                    
                }
                else
                {
                    ant.setColor('#');
                }
                board[row][col] = '*';
            }
        }
        else if(ant.getColor() == '#')
        {
            board[row][col] = ' ';
            
            if(ant.getDirection() == north)
            {
                ant.setDirection(west);
                col = ant.getBCol();
                col = col - 1;
                if (col < 0)
                    col = Cols - 1;
                ant.setBCol(col);
                if (board[ant.getBRow()][ant.getBCol()] == ' ')
                {
                    ant.setColor(' ');
                }
                else
                {
                    ant.setColor('#');
                }
                board[ant.getBRow()][ant.getBCol()] = '*';
        }
        
        else if(ant.getDirection() == east)
        {
                ant.setDirection(north);
                row = ant.getBRow();
                row = row - 1;
                if (row < 0)
                    row = Rows - 1;
                ant.setBRow(row);
                if (board[ant.getBRow()][ant.getBCol()] == ' '){
                    ant.setColor(' ');
                }
                else
                {
                    ant.setColor('#');
                }
                board[row][col] = '*';
        }
            
        else if(ant.getDirection() == south)
        {
                ant.setDirection(east);
                col = ant.getBCol();
                col = col + 1;
                if (col >= Cols)
                    col = 0;
                ant.setBCol(col);
                if (board[ant.getBRow()][ant.getBCol()] == ' '){
                    ant.setColor(' ');
                }
                else
                {
                    ant.setColor('#');
                }
                board[ant.getBRow()][ant.getBCol()] = '*';
        }
            
        else if(ant.getDirection() == west)
        {
                ant.setDirection(south);
                row = ant.getBRow();
                row = row + 1;
                if (row >= Rows)
                    row = 0;
                ant.setBRow(row);
                if (board[ant.getBRow()][ant.getBCol()] == ' '){
                    ant.setColor(' ');
                }
                else
                {
                    ant.setColor('#');
                }
                board[ant.getBRow()][ant.getBCol()] = '*';
        }
    }
        
     
        //nested for loop, prints out board to screen
        for (int i = 0; i < Rows; i++)
        {
            for (int j = 0; j < Cols; j++)
            {
                cout << board[i][j];
            }
            cout << endl;
        }
        
        ant.setARow(row);
        ant.setACol(col);
        
        //prompt asks user if they would like to play again
        while(quit == true)
        {
            char choice;
            cout << "Would you like to play again?\n1. Start Langton’s Ant simulation.\n2. Quit.\nPlease enter 1 or 2.\n";
            cin >> choice;
            
            if(choice == '1')
            {
                break;
            }
            
            else if(choice == '2')
            {
                cout << "Goodbye!";
                return 0;
            }
            
            //if the user enters anything other than p or q, the program displays an error message
            else
            {
                cout << "Please only enter '1' or '2'." << endl;
                cin.clear();
                cin.ignore();
            }
        }
    }
    
    //prevents memory leak
    for (int i = 0; i < Rows; i++)
        delete [] board[i];
    delete [] board;

    cout << endl;
    cout << endl;
    
    return 0;
}
                          
        
