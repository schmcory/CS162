/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "doublylinkedlist.cpp" is the class DoublyLinkedList implementation file
 *********************************************************************/

//"doublylinkedlist.hpp" is the class DoublyLinkedList header file
#include "doublylinkedlist.hpp"

//header files
#include <iostream>
#include <cstdlib>
using namespace std;

//default constructor initializes the head and tail to NULL
DoublyLinkedList::DoublyLinkedList() {
    head = NULL;
    tail = NULL;
}

//function adds a Node to the head
void DoublyLinkedList::addHead(int value) {
    Node *n = new Node();
    n->value = value;
    
    if(tail == NULL) {
        head = tail = n;
    }
    
    else {
        n->next = head;
        head->prev = n;
        head = n;
    }
}

//function adds a Node to the tail
void DoublyLinkedList::addTail (int value) {
    Node *n = new Node();
    n->value = value;
    
    if(head == NULL) {
        head = tail = n;
    }
    
    else {
        n->prev = tail;
        tail->next = n;
        tail = n;
    }
}

//function removes the first Node
bool DoublyLinkedList::removeHead() {
    if(head == NULL) {
        return -1;
    }
    
    Node *temp = head;
    
    if(head->next != NULL) {
        head->next->prev = NULL;
    }
    
    head = head->next;
    int value = temp->value;
    delete temp;
    return value;
}

//function removes the last Node
bool DoublyLinkedList::removeTail() {
    if(tail == NULL) {
        return -1;
    }
    
    Node *temp = tail;
    
    if(tail->prev !=NULL) {
        tail->prev->next = NULL;
    }
    
    tail = tail->prev;
    int value = temp->value;
    delete temp;
    return value;
}

//function prints the list of Nodes
void DoublyLinkedList::traverse() {
    Node *temp = head;
    if(temp == NULL) {
        cout << "The list is empty." << endl;
        return;
    }
    
    while(temp !=NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    
    cout << endl;
}

//function prints the list of Nodes in reverse
void DoublyLinkedList::traverseReverse() {
    Node *temp = tail;
    
    if(temp == NULL) {
        cout << "The list is empty." << endl;
         return;
    }
    
    while(temp !=NULL) {
        cout << temp->value <<" ";
        temp = temp->prev;
    }
    cout << endl;
}

//function prints the Node the head is pointing to
int DoublyLinkedList::getHeadValue() {
    if(head == NULL) {
        return -1;
    }
    else {
        return head->value;
    }
}

//function prints the Node the tail is pointing to
int DoublyLinkedList::getTailValue() {
    if(tail == NULL) {
        return -1;
    }
    else {
        return tail->value;
    }
}
