/*
 *MyNode.cpp
 *Created on 8/9/2020
 *Completed on ...
 *By S.H.
 *The definition of the class "MyNode"
 */

#include"MyNode.h"

//Constructor
//INPUT: NONE
//OUTPUT: NONE
template<class T>
MyNode<T>::MyNode() {}

//Constructor
//INPUT: The value of a new node
//OUTPUT: NONE
template<class T>
MyNode<T>::MyNode(T _value_) :
    value(_value_), pointer(NULL) {}

//Constructor
//INPUT: The value, the pointer
//OUTPUT: NONE
template<class T>
MyNode<T>::MyNode(T _value_, MyNode * _pointer_) :
    value(_value_), pointer(_pointer_) {}

//Destructor
//INPUT: NONE
//OUTPUT: NONE
template<class T>
MyNode<T>::~MyNode() {}

//Set the value of the node
//INPUT: The value to be set
//OUTPUT: NONE
template<class T>
void MyNode<T>::setValue(T _value_) {
    this->value = _value_;
}

//Set the pointer of the node
//INPUT: The pointer to be set
//OUTPUT: NONE
template<class T>
void MyNode<T>::setPointer(MyNode * _pointer_) {
    this->pointer = _pointer_;
}

//Get the value of the node
//INPUT: NONE
//OUTPUT: The value
template<class T>
T MyNode<T>::getValue() {
    return this->value;
}

//Get the pointer of the node
//INPUT: NONE
//OUTPUT: The pointer
template<class T>
MyNode<T>* MyNode<T>::getPointer() {
    return this->pointer;
}



/***************END OF THE FILE***************/