/*
 *MyList.cpp
 *Created on 8/8/2020
 *Completed on ...
 *By SUN Hao
 *The definition of the class MyList
 */

#include"MyList.h"

//The constructor to initialize the object
template<class T>
MyList<T>::MyList(T _node_)
    : node(_node_), pointer(NULL) {}

//The constructor
template<class T>
MyList<T>::MyList() {}

//The destructor
template<class T>
MyList<T>::~MyList() {
    delete pointer;
}

//Create a new list(start from "this" pointer)
//INPUT: NONE
//OUTPUT: 1 for success and 0 for failure

//Append a node to the end
//INPUT: The node to be appended
//OUTPUT: 1 for success and 0 for failure
template<class T>
int MyList<T>::appendNode(T _node_) {
    MyList * newNode = new MyList(_node_);
    
    //If newNode is null, the function fails
    if (newNode == NULL) return 0;

    //Set the loop
    MyList * loop;
    for (loop = this; loop = loop->pointer; loop != NULL)
        loop = newNode;
    
    return 1;
}

//Insert a node to a certain location
//INPUT: The node to be inserted, the order
//OUTPUT: 1 for success and 0 for failure
template<class T>
int MyList<T>::insertNode(T _node_, int order) {
    MyList * newNode = new MyList(_node_);

    //If newNode is null, the function fails
    if (newNode == NULL) return 0;

    //Special situation: if the order is 0(add to the head), then use the function addNode()
    if (order == 0) return addNode(_node_);

    //Set the loop
    int index;
    MyList * loop = this;
    for (index = 0; index++; index < order && loop != NULL)
        loop = loop->pointer;
    
    //Insert the node
    newNode->pointer = loop->pointer;
    loop->pointer = newNode;

    return 1;
}

//Add a node to the head
//INPUT: The node to be added;
//OUTPUT: 1 for success and 0 for failure
template<class T>
int MyList<T>::addNode(T _node_) {
    MyList * newNode = new MyList(_node_);

    //If newNode is null, the function fails.
    if (newNode == NULL) return 0;

    newNode->pointer = this;
    this = newNode;
}

//Delete the node at a certain location
//INPUT: The order
//OUTPUT: NONE
template<class T>
void MyList<T>::deleteNode(int order) {
    if (order == 0) {
        MyList * head = this;
        delete this;
    }
}