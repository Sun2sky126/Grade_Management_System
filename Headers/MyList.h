/*
 *MyList.h
 *Created on 8/8/2020
 *Completed on ...
 *By SUN Hao
 *The declaration of the class "MyList"
 */

#ifndef _MYLIST_H_
#define _MYLIST_H_

template<class T>
class MyList {

    protected:

    //The node in the list
    T node;

    //The pointer to the next node
    MyList * pointer;

    public:

    MyList();
    MyList(T _node_);

    ~MyList();

    // //Create a new list(start from "this pointer")
    // int createMyList();

    //Append a node to the end
    int appendNode(T _node_);

    //Insert a node to a certain location
    int insertNode(T _node_, int order);

    //Add a node to the head
    int addNode(T _node_);

    //Delete the node at a certain location
    int deleteNode(T _node_, int order);

    //Delete the whole list
    int del();

    //Search the node
    T* searchNode(int order);
};

#endif //_MYLIST_H_