/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "doublylinkedlist.hpp" is the class DoublyLinkedList header file
 *********************************************************************/

//"node.hpp" is the class Node header file
#include "node.hpp"

//include guards
#ifndef DOUBLYLINKEDLIST_HPP
#define DOUBLYLINKEDLIST_HPP

//
class DoublyLinkedList {
private:
    //a head pointer that points to the first Node in the linked list
    Node *head;
    
    //a tail pointer that points to the last Node in the linked list
    Node *tail;

public:
    DoublyLinkedList();        //default constructor
    void addHead(int);         //function adds a Node to the head
    void addTail (int);        //function adds a Node to the tail
    bool removeHead();         //function removes the first Node
    bool removeTail();         //function removes the last Node
    void traverse();           //function prints the list of Nodes
    void traverseReverse();    //function prints the list of Nodes in reverse
    int getHeadValue();        //function prints the Node the head is pointing to
    int getTailValue();        //function prints the Node the tail is pointing to
};

#endif /* doublylinkedlist_hpp */
