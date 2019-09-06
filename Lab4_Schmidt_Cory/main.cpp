/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/05/2018
 ** Description: "main.cpp" is the main function file for the OSU information system
 *********************************************************************/

//"building.hpp" is the Building class header file
#include "building.hpp"
//"person.hpp" is the Person class header file
#include "person.hpp"
//"student.hpp" is the Student class header file
#include "student.hpp"
//"instructor.hpp" is the Instructor class header file
#include "instructor.hpp"
//"university.hpp" is the University class header file
#include "university.hpp"

//header files
#include <string>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
    Student s;
    Instructor i;
    Building b, b1, b2;
    University u;
    
    s.setName("Cory");
    s.setAge(27);
    s.setGpa(4.0);
    
    i.setName("Professor Daniels");
    i.setAge(49);
    i.setRating(5.0);
    
    b1.name = "Callahan Hall";
    b1.size = 71389;
    b1.address = "1420 SW Jefferson Ave.";
    
    b2.name = "Cascade Hall";
    b2.size = 38765;
    b2.address = "601 SW 17th St.";
    
    u.name = "Oregon State University";
    u.printBuildings();
    u.printPeople();
    
    cout << "This is a representation of Oregon State University." << endl;
    cout << "The following options are availble. Please choose one." <<endl << endl;
    
    bool quit = true;
    while(quit == true) {
        char menuChoice;
        cout << "1. Prints information about all the buildings." << endl;
        cout << "2. Prints information about everybody at the university." << endl;
        cout << "3. Choose a person to do work." << endl;
        cout << "4. Exit the program." << endl;
        cin >> menuChoice;
        cout << "\nYou chose " << menuChoice << endl << endl;
        
        if(menuChoice == '1') {
            u.printBuildings();
            b1.buildingInfo();
            cout << endl;
            b2.buildingInfo();
            cout << endl << endl;
            break;
        }
        
        else if(menuChoice == '2') {
            u.printPeople();
            s.personInfo();
            cout << endl;
            i.personInfo();
            cout << endl << endl;
            break;
        }
        
        else if(menuChoice == '3') {
            char choice;
            bool personChoice = false;
            while(!personChoice) {
                cout << "Which person should do the work?" << endl;
                cout << "a. Cory, the student" << endl;
                cout << "b. Professor Daniels, the instructor" << endl;
                cout << "Please choose a or b." << endl;
                cin >> choice;
            
                if(choice == 'a') {
                    s.do_work();
                    cout << endl << endl;
                    return 0;
                }
                
                else if(choice == 'b') {
                    i.do_work();
                    cout << endl << endl;
                    return 0;
                }
                
                else {
                    cout << "Please only enter 'a' or 'b'." << endl << endl;
                    cin.clear();
                    cin.ignore();
                }
            }
            
        }
        
        else if(menuChoice == '4') {
            quit = true;
            cout <<"Goodbye!" << endl << endl;
            break;
        }
        
        else {
            cout << "Please only enter 1, 2, 3 or 4." << endl << endl;
            cin.clear();
            cin.ignore();
        }
    }
    return 0;
}
