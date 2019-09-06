/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "HarryPotter.cpp" is the class HarryPoter implementation file
 ** Class Description:
 *********************************************************************/

//header files
#include <iostream>
#include <iomanip>
using namespace std;

//"Game.hpp" is the Game header file
#include "Game.hpp"

//"Character.hpp" is the Character class header file
#include "Character.hpp"

//"Vampire.hpp" is the Vampire class header file
#include "Vampire.hpp"

//"Barbarian.hpp" is the Barbarian class header file
#include "Barbarian.hpp"

//"BlueMen.hpp" is the BlueMen class header file
#include "BlueMen.hpp"

//"Medusa.hpp" is the Medusa class header file
#include "Medusa.hpp"

//"HarryPotter.hpp" is the HarryPotter class header file
#include "HarryPotter.hpp"

void Game::showMenu() {
    cout << endl;
    cout << "------MAIN MENU------" << endl;
    cout << "1. View the game rules and descriptions of the characters." << endl;
    cout << "2. Start the game." << endl;
    cout << "3. Test Driver Program." << endl;
    cout << "4. Exit the program." << endl;
}

int Game::getChoice() {
    bool getData = true;
    int userInput;
    
    while(getData == true) {
        cout << "Enter a number between 1 and 3." << endl;
        cin >> userInput;
        
        if(userInput > 0 && userInput <= 4) {
            getData = false;
        }
        
        else {
            cout << "Please only enter a number between 1 and 3." << endl;
            cin.clear();
            cin.ignore();
        }
    }
    return userInput;
}

void Game::showRules() {
    int y;
    bool rulesData = true;
    
    cout << endl;
    cout << "------GAME RULES------" << endl;
    cout << "This 2-player game allows two characters to fight one another." << endl;
    cout << "Each combat between two characters ends when one of the characters die." << endl;
    cout << "Each round consists of two attacks, one for each character. For each attack, attacker and defender both generate dice rolls." << endl << endl;
    
    while(rulesData == true) {
    cout << "------CHARACTER MENU------" << endl;
    cout << "The playable characters are listed below: " << endl;
    cout << "1. Vampire" << endl;
    cout << "2. Barbarian" << endl;
    cout << "3. Blue Men" << endl;
    cout << "4. Medusa" << endl;
    cout << "5. Harry Potter" << endl;
    cout << "To see one of the characters attributes, enter a number between 1 and 5." << endl;
    cout << "To return to the main menu, enter the number 6" << endl;
    cin >> y;
    cout << endl;
    
    if(y == 1) {
        cout << "VAMPIRE" << endl;
        cout << "Armor Level: 1" << endl;
        cout << "Strength Points: 18" << endl;
        cout << "Description: Suave, debonair, but vicious and surprinsgly resilent." << endl;
        cout << "Special Ability: Vampires can CHARM an opponent into not attacking. For a given attack there is a 50% chance that their oppponent does not actually attack them." << endl << endl;
    }
    
    else if(y == 2) {
        cout << "BARBARIAN" << endl;
        cout << "Armor Level: 0" << endl;
        cout << "Strength Points: 12" << endl;
        cout << "Description: Think Conan or Hercules from the movies. Big sword, big muscles, bare torso." << endl;
        cout << "Special Ability: None" << endl << endl;
    }
    
    else if(y == 3) {
        cout << "BLUE MEN" << endl;
        cout << "Armor Level: 3" << endl;
        cout << "Strength Points: 12" << endl;
        cout << "Description: They are small, 6 inch tall, but fast and tough. They are hard to hit so they can take some damage. They can also do a LOT of damage when they crawl inside enemies' armour or clothing." << endl;
        cout << "Special Ability: Blue Men are actually a swarm of small individuals. For every 4 points of damage, they lose on defense die." << endl << endl;
    }
    
    else if(y == 4) {
        cout << "MEDUSA" << endl;
        cout << "Armor Level: 3" << endl;
        cout << "Strength Points: 8" << endl;
        cout << "Description: Scrawny lady with snakes for hair which helps her during comat. Just don't look at her!" << endl;
        cout << "Special Ability: If Medusa rolls a 12 when attacking when the target instatly gets turned into stone and Medusa wins!" << endl;
        cout << "Note: If Medusa uses her GLARE on Harry Potter on his first life, then Poter comes back to life." << endl << endl;
    }
    
    else if(y == 5) {
        cout << "HARRY POTTER" << endl;
        cout << "Armor: 0" << endl;
        cout << "Strength Points: 10" << endl;
        cout << "Description: He's a wizard." << endl;
        cout << "Special Ability: If Harry Potter's strength reaches 0 or below, he immediately recovers and his total strength becomes 20. If he were to die again, then he's dead." << endl << endl;
    }
        
    else if(y == 6) {
        break;
    }
    
    else {
        cout << "Please only enter a number between 1 and 5." << endl << endl;
    }
}
}

int Game::getCharacter1() {
    cout << "Ready Player 1" << endl;
    cout << "Which character would you like to play?" << endl;
    cout << "1. Vampire" << endl;
    cout << "2. Barbarian" << endl;
    cout << "3. Blue Men" << endl;
    cout << "4. Medusa" << endl;
    cout << "5. Harry Potter" << endl << endl;
    
    bool getData = true;
    int userInput;
    
    while (getData == true) {
        cout << "Enter a number between 1 and 5 to choose a character to play." << endl;
        cin >> userInput;
        if(userInput > 0 && userInput <= 5) {
            getData = false;
        }
        
        else {
            cout << "Pleae enter a number between 1 and 5." << endl;
            cin.clear();
            cin.ignore();
        }
    }
    
    return userInput;
}

int Game::getCharacter2() {
    cout << "Ready Player 2" << endl;
    cout << "Which character would you like to play?" << endl;
    cout << "1. Vampire" << endl;
    cout << "2. Barbarian" << endl;
    cout << "3. Blue Men" << endl;
    cout << "4. Medusa" << endl;
    cout << "5. Harry Potter" << endl << endl;
    
    bool getData = true;
    int userInput;
    
    while (getData == true) {
        cout << "Enter a number between 1 and 5 to choose a character to play." << endl;
        cin >> userInput;
        
        if(userInput > 0 && userInput <= 5) {
            getData = false;
        }
        
        else {
            cout << "Pleae enter a number between 1 and 5." << endl;
            cin.clear();
            cin.ignore();
        }
    }
    
    return userInput;
}

void Game::showTestMenu() {
    cout << "-----TESTING DRIVER PROGRAM----" << endl;

    cout << "Please select one of the following options:"<< endl;
    cout << "1. Vampire vs. Vampire" << endl;
    cout << "2. Vampire vs. Barbarian" << endl;
    cout << "3. Vampire vs. Blue Men" << endl;
    cout << "4. Vampire vs. Medusa" << endl;
    cout << "5. Vampire vs. Harry Potter" << endl;
    cout << "6. Barbarian vs. Barbarian" << endl;
    cout << "7. Barbarian vs. Blue Men" << endl;
    cout << "8. Barbarian vs. Medusa" << endl;
    cout << "9. Barbarian vs. Harry Potter" << endl;
    cout << "10. Blue Men vs. Blue Men" << endl;
    cout << "11. Blue Men vs. Medusa" << endl;
    cout << "12. Blue Men vs. Harry Potter" << endl;
    cout << "13. Medusa vs. Medusa" << endl;
    cout << "14. Medusa vs. Harry Potter" << endl;
    cout << "15. Harry Potter vs. Harry Potter" << endl;
    cout << "16. Return to main menu" << endl;
}
int Game::getTestChoice() {
    bool getData = true;
    int userInput;
    
    while (getData == true) {
        cout << "Enter a number between 1 and 15 to test attack or enter 16 to return to main menu." << endl;
        cin >> userInput;
        
        if (userInput > 0 && userInput <= 16) {
            getData = false;
        }
        else {
            cout << "Please only enter a number between 1 and 16." << endl;
            cin.clear();
            cin.ignore();
        }
    }
    return userInput;
}

void Game::testProgram(int t) {
    int damage;
    Character *character1;
    Character *character2;
    
    if (t == 1) {
        character1 = new Vampire;
        character2 = new Vampire;
        
        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack:" << endl;
            damage = character1->attack();
            cout << "Player 2 defense:" << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack:" << endl;
                damage = character2->attack();
                cout << "Player 1 defense:" << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }
      
        if (p1Dead == true) {
            cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
           cout << "Game Over! Player 1 Won!" << endl;
            
            delete character1;
            delete character2;
        }
        
    }
    else if (t == 2) {
        character1 = new Vampire;
        character2 = new Barbarian;

        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack:" << endl;
            damage = character1->attack();
            cout << "Player 2 defense:" << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack:" << endl;
                damage = character2->attack();
                cout << "Player 1 defense:" << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }
   
        if (p1Dead == true) {
             cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
              cout << "Game Over! Player 1 Won!" << endl;
            
            delete character1;
            delete character2;
        }
        
    }
    else if (t == 3) {
        character1 = new Vampire;
        character2 = new BlueMen;
        
        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack:" << endl;
            damage = character1->attack();
            cout << "Player 2 defense:" << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack:" << endl;
                damage = character2->attack();
                cout << "Player 1 defense:" << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }
    
        if (p1Dead == true) {
             cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
            cout << "Game Over! Player 1 Won!" << endl;
            
            delete character1;
            delete character2;
        }
        
    }
    else if (t == 4) {
        character1 = new Vampire;
        character2 = new Medusa;
        
        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack:" << endl;
            damage = character1->attack();
            cout << "Player 2 defense:" << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack:" << endl;
                damage = character2->attack();
                cout << "Player 1 defense:" << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }

        if (p1Dead == true) {
             cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
              cout << "Game Over! Player 1 Won!" << endl;
            
            delete character1;
            delete character2;
        }
        
    }
    else if (t == 5) {
        character1 = new Vampire;
        character2 = new HarryPotter;
        
        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack:" << endl;
            damage = character1->attack();
            cout << "Player 2 defense:" << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack:" << endl;
                damage = character2->attack();
                cout << "Player 1 defense:" << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }
     
        if (p1Dead == true) {
           cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
              cout << "Game Over! Player 1 Won!" << endl;
        
            delete character1;
            delete character2;
        }
        
    }
    else if (t == 6) {
        character1 = new Barbarian;
        character2 = new Barbarian;
        
        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack:" << endl;
            damage = character1->attack();
            cout << "Player 2 defense:" << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack:" << endl;
                damage = character2->attack();
                cout << "Player 1 defense:" << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }
    
        if (p1Dead == true) {
          cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
              cout << "Game Over! Player 1 Won!" << endl;

            delete character1;
            delete character2;
        }
        
    }
    else if (t == 7) {
        character1 = new Barbarian;
        character2 = new BlueMen;
        
        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack: " << endl;
            damage = character1->attack();
            cout << "Player 2 defense: " << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack: " << endl;
                damage = character2->attack();
                cout << "Player 1 defense: " << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }
       
        if (p1Dead == true) {
              cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
             cout << "Game Over! Player 1 Won!" << endl;
            
            delete character1;
            delete character2;
        }
        
    }
    else if (t == 8) {
        character1 = new Barbarian;
        character2 = new Medusa;
        
        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack: " << endl;
            damage = character1->attack();
            cout << "Player 2 defense: " << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack: " << endl;
                damage = character2->attack();
                cout << "Player 1 defense: " << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }
    
        if (p1Dead == true) {
              cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
              cout << "Game Over! Player 2 Won!" << endl;
            
            delete character1;
            delete character2;
        }
        
    }
    else if (t == 9) {
        character1 = new Barbarian;
        character2 = new HarryPotter;
        
        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack: " << endl;
            damage = character1->attack();
            cout << "Player 2 defense: " << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack: " << endl;
                damage = character2->attack();
                cout << "Player 1 defense: " << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }
      
        if (p1Dead == true) {
              cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
              cout << "Game Over! Player 1 Won!" << endl;
            
            delete character1;
            delete character2;
        }
        
    }
    else if (t == 10) {
        character1 = new BlueMen;
        character2 = new BlueMen;
        
        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack: " << endl;
            damage = character1->attack();
            cout << "Player 2 defense: " << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack: " << endl;
                damage = character2->attack();
                cout << "Player 1 defense: " << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }
        
        if (p1Dead == true) {
             cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
             cout << "Game Over! Player 1 Won!" << endl;
            
            delete character1;
            delete character2;
        }
        
    }
    else if (t == 11) {
        character1 = new BlueMen;
        character2 = new Medusa;
        
        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack: " << endl;
            damage = character1->attack();
            cout << "Player 2 defense: " << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack:" << endl;
                damage = character2->attack();
                cout << "Player 1 defense:" << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }
        
        if (p1Dead == true) {
             cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
              cout << "Game Over! Player 1 Won!" << endl;
            
            delete character1;
            delete character2;
        }
        
    }
    else if (t == 12) {
        character1 = new BlueMen;
        character2 = new HarryPotter;
        
        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack:" << endl;
            damage = character1->attack();
            cout << "Player 2 defense:" << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack:" << endl;
                damage = character2->attack();
                cout << "Player 1 defense:" << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }
      
        if (p1Dead == true) {
           cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
              cout << "Game Over! Player 1 Won!" << endl;
            
            delete character1;
            delete character2;
        }
        
    }
    else if (t == 13) {
        character1 = new Medusa;
        character2 = new Medusa;
        
        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack: " << endl;
            damage = character1->attack();
            cout << "Player 2 defense: " << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack: " << endl;
                damage = character2->attack();
                cout << "Player 1 defense: " << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }
      
        if (p1Dead == true) {
             cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
              cout << "Game Over! Player 1 Won!" << endl;
            
            delete character1;
            delete character2;
        }
        
    }
    else if (t == 14) {
        character1 = new Medusa;
        character2 = new HarryPotter;
        
        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack: " << endl;
            damage = character1->attack();
            cout << "Player 2 defense:"  << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack:" << endl;
                damage = character2->attack();
                cout << "Player 1 defense:" << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }
        
        if (p1Dead == true) {
              cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
              cout << "Game Over! Player 1 Won!" << endl;
            
          
            delete character1;
            delete character2;
        }
        
    }
    else if (t == 15) {
        character1 = new HarryPotter;
        character2 = new HarryPotter;
        
    
        character1->setData();
        character2->setData();
        
        cout << "Player 1 is: " << character1->getName() << endl;
        cout << "Player 2 is: " << character2->getName() << endl;
        cout << endl;
        
        bool p1Dead = false;
        bool p2Dead = false;
        
        while (p1Dead == false && p2Dead == false) {
            cout << "Player 1 attack: " << endl;
            damage = character1->attack();
            cout << "Player 2 defense: " << endl;
            character2->defense(damage);
            
            p2Dead = character2->isDead();
            
            if (p2Dead == false) {
                cout << "Player 2 attack: " << endl;
                damage = character2->attack();
                cout << "Player 1 defense: " << endl;
                character1->defense(damage);
                cout << endl;
            }
            p1Dead = character1->isDead();
        }
        
        if (p1Dead == true) {
             cout << "Game Over! Player 2 Won!" << endl;
        }
        else if (p2Dead == true) {
              cout << "Game Over! Player 1 Won!" << endl;
            
            
            delete character1;
            delete character2;
        }
        
    }
    else {
        //DO NOTHING
    }
}


