/*********************************************************************
 ** Author: Cory Schmidt
 ** Date: 02/19/2018
 ** File Description: "node.hpp" is the class Node header file
 *********************************************************************/

//include guards
#ifndef NODE_HPP
#define NODE_HPP

class Node {
private:
        int value;
        Node *next;
        Node *prev;
        friend class DoublyLinkedList;
        friend int main();
    
public:
        Node(int);
        Node();
};

#endif /* node_hpp */
