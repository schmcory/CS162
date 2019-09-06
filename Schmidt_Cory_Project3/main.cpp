
//"Character.hpp" is the class Character header file
#include "Character.hpp"

//"Game.hpp" is the class Game header file
#include "Game.hpp"

//"Vampire.hpp" is the class Vampire header file
#include "Vampire.hpp"

//"Barbarian.hpp" is the class Barbarian header file
#include "Barbarian.hpp"

//"BlueMen.hpp" is the class BlueMen header file
#include "BlueMen.hpp"

//"Medusa.hpp" is the class Medusa header file
#include "Medusa.hpp"

//"HarryPotter.hpp" is the class HarryPoter header file
#include "HarryPotter.hpp"

#include <iostream>
using namespace std;

int main() {
    Game g;
    int choice;
    
    cout << "-----------------FANTASY COMBAT-----------------" << endl;
    
    do {
        //calls the menu function
        //displays the menu to the user
        g.showMenu();
        choice = g.getChoice();
        
        /* SWITCH STATEMENT: BEGIN MENU CHOICE */
        switch(choice) {
        /* BEGIN CASE 1: SHOW RULES */
            case 1: {
                g.showRules();
                break;
            }
        /* END CASE 1: SHOW RULES */
                
        /* BEGIN CASE 2: SET PLAYERS */
            case 2: {
                int player1, player2;
                int damage;
                Character *character1;
                Character *character2;
                player1 = g.getCharacter1();
                player2 = g.getCharacter2();
                
            //PLAYER ONE//
            if(player1 == 1) {
                character1 = new Vampire;
            }
        
            else if(player1 == 2) {
                character1 = new Barbarian;
            }
        
            else if(player1 == 3) {
                character1 = new BlueMen;
            }

            else if(player1 == 4) {
                character1 = new Medusa;
            }
        
            else if(player1 == 5) {
                character1 = new HarryPotter;
            }
            //END PLAYER ONE//
            
            //PLAYER TWO//
            if(player2 == 1) {
                character2 = new Vampire;
            }
                
            else if(player2 == 2) {
                character2 = new Barbarian;
            }
                
            else if(player2 == 3) {
                character2 = new BlueMen;
            }
                
            else if(player2 == 4) {
                character2 = new Medusa;
            }
                
            else if(player1 == 5) {
                character2 = new HarryPotter;
            }
            //END PLAYER TWO//
                
                character1->setData();
                character2->setData();
                
                int x;
                
                cout << "Player 1 is playing: " << character1->getName() << endl;
                cout << "Armor: " << character1->getArmor() << endl;
                cout << "Strengh: " << character1->getStrength() << endl;
                cout << "Player 2 is playing: " << character2->getName() << endl;
                cout << "Armor: " << character2->getArmor() << endl;
                cout << "Strengh: " << character2->getStrength() << endl << endl;
                
                cout << "Which player should start first?" << endl;
                cout << "1. Player 1" << endl;
                cout << "2. Player 2" << endl;
                cout << "Please enter 1 or 2" << endl;
                cin >> x;
                
                bool p1Dead = false;
                bool p2Dead = false;
                
                if(x == 1) {
                    while(p1Dead == false && p2Dead == false) {
                        cout << "Player 1 attack: " << endl;
                        damage = character1->attack();
                        cout << "Player 2 defense: " << endl;
                        character2->defense(damage);
                        cout << endl;
                        
                        p2Dead = character2->isDead();
                        
                        if(p2Dead == false) {
                            cout << "Player 2 attack: " << endl;
                            damage = character2->attack();
                            cout << "Player 1 defense: " << endl;
                            character1->defense(damage);
                            cout << endl;
                        }
                        
                        p1Dead = character1->isDead();
                        
                    }
                }
                else if(x == 2) {
                    while(p1Dead == false && p2Dead == false) {
                        cout << "Player 2 attack: " << endl;
                        damage = character2->attack();
                        cout << "Player 1 defense: " << endl;
                        character1->defense(damage);
                        cout << endl;
                        
                        p1Dead = character1->isDead();
                        
                        if(p1Dead == false) {
                            cout << "Player 2 attack: " << endl;
                            damage = character2->attack();
                            cout << "Player 1 defense: " << endl;
                            character1->defense(damage);
                            cout << endl;
                        }
                        p2Dead = character2->isDead();
                    }
                }
                
                else {
                    cout << "Please only enter 1 or 2." << endl << endl;
                }
                
                if(p1Dead == true) {
                    cout << "Game Over! Player 2 won!" << endl << endl;
                }
                
                else if(p2Dead == true) {
                    cout << "Game Over! Player 1 won!" << endl << endl;
                }
                break;
            }
         /* END CASE 2: SET PLAYERS */
              
            case 3: {
                g.showTestMenu(); // show testing menu
                int tChoice;
                tChoice = g.getTestChoice(); // get choice of testing menu
                
                // if statements here to run each test possibility
                g.testProgram(tChoice);
            }
         
            /*CASE 4: QUIT GAME */
            case 4: {
                break;
            }
            /* END CASE 4: QUIT GAME */
    }
/* SWITCH STATEMENT: END MENU CHOICE */
} //END  DO
    while(choice != 4);
        cout << "Goodbye!" << endl;
        return 0;
    
} //END MAIN FUNCTION
