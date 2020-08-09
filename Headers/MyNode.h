/*
 *MyList.h
 *Created on 8/9/2020
 *Completed on ...
 *By S.H.
 *The declaration of the class "MyList"
 */

#ifndef _MYLIST_H_
#define _MYLIST_H_

#include"MyNode.h"

template<class T>
class MyList {

    protected:

    //The fisrt node
    MyNode<T> * headNode;

    //The length of the whole list
    int length;

    public:

    MyList();
    MyList(T value);

    ~MyList();

    //Add a node
    //INPUT: The value to be added, the order of the location
        //If order is n, the value will be added next to n
    //OUTPUT: 1 for success and 0 for failure
    int addNode(T value, int order);

    //Delete a node
    //INPUT: The order of the node to be deleted
    //OUTPUT: 1 for success and 0 for failure
    int deleteNode(int order);

    //Search a node
    //INPUT: The order of the node to be searched
    //OUTPUT: The pointer to the node
    MyNode* searchNode(int order);

    //Get the length of the list
    //INPUT: NONE
    //OUTPUT: The length
    int getLength();

    //Swap two nodes
    //INPUT: The order_1, the order_2
    //OUTPUT: 1 for success and 0 for failure
    int swapNodes(int order_1, int order_2);
};

#endif // _MYLIST_H_


/**************END OF THE FILE*****************/
