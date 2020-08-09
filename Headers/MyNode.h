/*
 *MyNode.h
 *Created on 8/9/2020
 *Completed on ...
 *By S.H.
 *The declaration of the class "MyNode"
 */

#ifndef _MYNODE_H_
#define _MYNODE_H_

template<class T>
class MyNode {

    protected:

    //The value part of a node
    T value;

    //The pointer part of a node
    MyNode * pointer;

    public:

    MyNode();
    MyNode(T _value_);
    MyNode(T _value_, MyNode * _pointer_);

    ~MyNode();

    //Set the value of the node
    //INPUT: The value to be set
    //OUTPUT: NONE
    void setValue(T _value_);

    //Set the pointer
    //INPUT: The pointer to be set
    //OUTPUT: NONE
    void setPointer(MyNode * _pointer_);

    //Get the value
    //INPUT: NONE
    //OUTPUT: The value
    T getValue();

    //Get the pointer
    //INPUT: NONE
    //OUTPUT: The pointer
    MyNode* getPointer();
};

#endif // _MYNODE_H_



/************END OF THE FILE**************/