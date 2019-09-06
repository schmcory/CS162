/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 03/05/2018
 ** File Description: Queue.cpp is the Queue class implementation file
 *********************************************************************/

//Queue.hpp is the Queue class header file
#include "Queue.hpp"

//header files
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

//Default constructor initializes number, average and count variables to 0

int Queue::getRounds() {
    cout << "Enter the number of rounds." << endl;
        while (!(cin >> rounds)) {
        cin.clear();
    
            while(cin.get() != '\n')
                continue;
            cout << "Please only enter a number." << endl;
        }
    return rounds;
}

int Queue::getPush() {
    cout << "Enter the chance to add a number at the end of the buffer." << endl;
        while(!(cin >> percentPush)) {
            cin.clear();
    
                while(cin.get() != '\n')
                    continue;
                cout << "Please only enter a number." << endl;
        }
    return percentPush;
}

int Queue::getPop() {
    cout << "Enter the chance to remove a number from the front of the buffer." << endl;
        while(!(cin >> percentPop)) {
            cin.clear();
            
                while(cin.get() != '\n')
                    continue;
                cout << "Please only enter a number." << endl;
        }
    return percentPop;
}

void Queue::outputQueue() {
    rounds = getRounds();
    percentPush = getPush();
    percentPop = getPop();
    
    for(int i = 1; i <= rounds; i++) {
    spush = 0;
    spop = 0;
    aPrev = average;
    
    srand(time(NULL));
    number = rand()%1000 + 1;
    percent = rand()%100 + 1;
    
        if(percent <= percentPush) {
            buffer.push(number);
            spush++;
        }
    
        percent = rand()%100 + 1;
        if(percent <= percentPop && !buffer.empty()) {
            buffer.pop();
            spop++;
        }
    
        temp = buffer;
        cout << "Round " << i << endl;;
        if(spush && spop) {
            cout << "A number was added to the end of the queue and removed from the front of the queue." << endl;
        }
    
        else if(spush) {
            cout << "A number was appended to the end of the queue." << endl;
        }
    
        else if(spop) {
            cout << "A number was removed from the end of the queue." << endl;
        }
    
        else {
            cout << "Nothing happened." << endl;
        }
        
        cout << "Queue: ";
        while(!temp.empty()) {
            cout << temp.front() << ".00 ";
            temp.pop();
        }
        cout << endl;
              
        cout << "The length of the buffer after round " << i << " is: " << buffer.size() << endl;
              
        average = (aPrev*(i-1)+buffer.size())/i;
              cout << "The average length of the queue after round " << i << " is: " << average << endl << endl;
    }
}
