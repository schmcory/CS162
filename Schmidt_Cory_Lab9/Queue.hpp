/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 03/05/2018
 ** File Description: Queue.hpp is the Queue class header file
 *********************************************************************/

//include guards
#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <queue>
#include <list>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

class Queue {
private:
    int rounds;
    int percentPush;
    int percentPop;
    int number;
    int percent;
    int spush;
    int spop;
    double average = 0;
    double aPrev = 0;
    queue<int,list<int>> buffer, temp;
public:
    int getRounds();
    int getPush();
    int getPop();
    void outputQueue();
};

#endif /* Queue_hpp */
