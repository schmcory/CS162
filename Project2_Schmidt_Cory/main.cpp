/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "main.cpp" is the Zoo Tycoon game main function file
 *********************************************************************/

//"animal.hpp" is the Animal class header file
#include "animal.hpp"
//"tiger.hpp" is the Tiger class header file
#include "tiger.hpp"
//"penguin.hpp" is the Penguin class header file
#include "penguin.hpp"
//"turtle.hpp" is the Turtle class header file
#include "turtle.hpp"
//"zoo.hpp" is the Zoo class header file
#include "zoo.hpp"

#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {//BEGIN MAIN
    
    Zoo zoo;
    bool choices = true;
    char animalType;
    int buyAnimals = 3;
    void deadAnimals(Zoo&);
    void animalBirths(Zoo&);
    int randomEvent;
    
    cout << "Welcome to Zoo Tycoon" << endl << endl;
    
    cout << "You are the proud owner of a virtual zoo that has spaces to house tigers, penguins and turtles." << endl;
    cout << "You start with 100,000 dollars in the bank. You need to buy three animals to start your zoo business." << endl;
    cout << "Each turn is a day at the zoo." << endl << endl;

    
    cout << "Your zoo can have four random events occur" << endl;
    cout << "1. A sickness occurs to an an animal in the zoo." << endl;
    cout << "2. A boom in zoo attendance occurs." << endl;
    cout << "3. A baby animal is born." << endl;
    cout << "4. Nothing happens." << endl << endl;
    
    cout << "Press enter to begin the game." << endl;
    cin.ignore();
    cout << endl;
    
    //while loop adds an animal to the zoo
    while(zoo.getBank() == false) {//BEGIN WHILE LOOP
        cout << "Which animal would you like to buy?" << endl;
        cout << "1. Tiger." << endl;
        cout << "2. Penguin" << endl;
        cout << "3. Turtle" << endl;
        cout << "Please enter 1, 2, or 3 for Tiger, Penguin or Turtle." << endl;
        cin >> animalType;
        cout << endl;
        cout << "How many of this animal would you like to buy?" << endl;
        cin >> buyAnimals;
        
        for(int i = 0; i < buyAnimals; i++) {//for
            if(animalType == 1) {
                zoo.addTiger();
                zoo.getBudget() -= (zoo.getTiger(0)).getCost();
            }
            
            if(animalType == 2) {
                zoo.addPenguin();
                zoo.getBudget() -= (zoo.getPenguin(0)).getCost();
            }
            
            if(animalType == 3) {
                zoo.addTurtle();
                zoo.getBudget() -= (zoo.getTurtle(0)).getCost();
            }
        }//end for
    
        //generate the random event
        randomEvent = (rand()%4)+1;
        if(randomEvent == 1) {
            deadAnimals(zoo);
        }
        
        else if(randomEvent == 2) {
            animalBirths(zoo);
        }
        
        else if(randomEvent == 3) {
            cout << "A boom in zoo attendance occured! You have recieved a bonus payoff for each tiger in the zoo." << endl << endl;
        }
        
        else if(randomEvent == 4) {
            cout << "No random event occured!" << endl << endl;
        }
    
    //print the payoff
        if(randomEvent == 3) {
            zoo.printPayoff(2);
        }
        
        if(randomEvent == !3) {
            zoo.printPayoff(1);
        }
        
        cout << "The payoff for the day was: " << zoo.getBudget() << endl << endl;
        
   
    if(zoo.getBudget() > 0) {//begin if
        char ZooChoice;
        cout << "Do you want to continue to next day? Press 1 for yes or 2 for no.";
        cin >> ZooChoice;
            
        if(ZooChoice == '1') {
            zoo.incrementAge();
        }
            
        else if(ZooChoice == '2') {
            cout << "Goodbye!" << endl;
            zoo.setBank(true);
        }
            
        else {
            cout << "Please only enter 1 or 2" << endl;
        }
  
        }//end if
        
    else if(zoo.getBudget() < 0) {
        cout << "You went bankrupt, goodbye!" << endl;
        zoo.setBank(true);
    }
}
}

void deadAnimals(Zoo &zoo) {
    srand(time(NULL));
    int animalType;
    int randomAnimal;
    randomAnimal = (rand()%3) + 1;
    
    //a tiger died
    if(animalType == 1 && zoo.getNumOfTigers() > 0) {
        randomAnimal = (rand()% zoo.getNumOfTigers());
        zoo.removeTiger(randomAnimal);
        cout << "A tiger died!" << endl << endl;
    }
    
    //a penguin died
    else if(animalType == 2 && zoo.getNumOfPenguins() > 0) {
        randomAnimal = (rand()% zoo.getNumOfPenguins());
        zoo.removePenguin(randomAnimal);
        cout << "A penguin died!" << endl << endl;
    }
    
    //a turtle died
    else if(animalType == 3 && zoo.getNumOfTurtles() > 0) {
        randomAnimal = (rand()% zoo.getNumOfTurtles());
        zoo.removeTurtle(randomAnimal);
        cout << "A turtle died!" << endl << endl;
    }
}


void animalBirths(Zoo &zoo) {
    //One of the animals gave birth at the zoo
        srand(time(NULL));
        int babyAnimal = (rand()%3) + 1;
        int animalType;

        cout << "One of your animals gave birth!" << endl;
        
        //tiger gave birth to 1 baby
        if(babyAnimal == 1 && zoo.getNumOfTigers() > 0) {
            if(zoo.getTiger((babyAnimal)).getAge() > 3) {
                cout << "A tiger had a baby!" << endl << endl;
                zoo.getTiger(babyAnimal).addBabies(1);
                zoo.addTiger();
                zoo.getTiger((zoo.getNumOfTigers())-1).setAge(1);
            }
        }
        
        //tiger gave birth to 5 babies
        else if(babyAnimal == 2 && zoo.getNumOfPenguins() > 0) {
            if(zoo.getPenguin((babyAnimal)).getAge() > 3) {
                cout << "A penguin had 5 babies!" << endl << endl;
                for(int i = 0; i < 5; i++){
                zoo.getPenguin(babyAnimal).addBabies(1);
                zoo.addPenguin();
                zoo.getPenguin((zoo.getNumOfPenguins())-1).setAge(1);
                }
            }
        }
        
        //turtle gave birth to 10 babies
        else if(babyAnimal == 3 && zoo.getNumOfTurtles() > 0) {
            if(zoo.getTurtle((babyAnimal)).getAge() > 3) {
                cout << "A turtle had 10 babies!" << endl << endl;
                for(int i = 0; i < 10; i++){
                zoo.getTurtle(babyAnimal).addBabies(1);
                zoo.addTurtle();
                zoo.getTurtle((zoo.getNumOfTurtles())-1).setAge(1);
                }
            }
        }
    }
    



