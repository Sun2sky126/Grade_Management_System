/*
 *MyList.cpp
 *Created on 8/9/2020
 *Completed on ...
 *By S.H.
 *The definition of the class "MyList"
 */

#include"MyList.h"

//Constructor
//INPUT: NONE
//OUTPUT: NONE
template<class T>
MyList<T>::MyList() {
    //Create an empty list
    this->headNode = NULL;
    this->length = 0;
}

//Constructor
//INPUT: The value of the node
//OUTPUT: NONE
template<class T>
MyList<T>::MyList(T value) {
    MyNode * newNode = new MyNode(value);
    if (newNode != NULL) {
        this->headNode = newNode;
        this->length = 1;
    }
    else {
        this->headNode = NULL;
        this->length = 0;
    }
}

//Destructor
//INPUT: NONE
//OUTPUT: NONE
template<class T>
MyList<T>::~MyList() {}

//Add a node
//INPUT: The value to be added, the order of the location
    //If order is n, the value will be added next to n
//OUTPUT: 1 for success and 0 for failure
template<class T>
int MyList<T>::addNode(T value, int order) {
    int index;
    MyNode * node;

    //Create the new node
    MyNode * newNode = new MyNode(value);
    if (newNode == NULL) return 0;

    //Check whether the parameter is legal
    if (order >= 0 && order <= this->length ) {
        //Find the location
        index = 0;
        node = this->headNode;
        while (index < order) {
            node = node->getPointer();
            index += 1;
        }

        //Insert the node
        if (order < this->length) {
            newNode->setPointer(node->getPointer());
            node->setPointer(newNode);
        }
        else {
            node->setPointer(newNode);
        }

        //Increase the length
        length += 1;
        return 1;
    }
    else return 0;
}

//Delete a node
//INPUT: The order of the node to be deleted
//OUTPUT: 1 for success and 0 for failure
template<class T>
int MyList<T>::deleteNode(int order) {
    int index;
    MyNode * node, * temp;

    //Check whether the parameter is legal
    if (order >= 1 && order <= this->length) {
        //Find the location
        index = 0;
        node = this->headNode;
        while (index < order - 1) {
            node = node->getPointer();
            index += 1;
        }

        //Delete the node
        temp = node->getPointer()->getPointer();
        delete node->getPointer();
        node->setPointer(temp);

        //Decrease the length
        length -= 1;
        return 1;
    }
    else return 0;
}

//Search a node
//INPUT: The order of the node to be searched
//OUTPUT: The pointer to the node
template<class T>
MyNode<T>* MyList<T>::searchNode(int order) {
    int index;
    MyNode * node;

    //Check whether the parameter is legal
    if (order >= 1 && order <= this->length) {
        //Find the location
        index = 0;
        node = this->headNode;
        while (index < order) {
            node = node->getPointer();
            index++;
        }

        //Return the pointer
        return node;
    }
    else return NULL;
}

//Get the length of the list
//INPUT: NONE
//OUTPUT: The length
template<class T>
int MyList<T>::getLength() {
    return this->length;
}

//Swap two nodes
//INPUT: The order_1, the order_2
//OUTPUT: 1 for success and 0 for failure
template<class T>
int MyList<T>::swapNodes(int order_1, int order_2) {
    int index_1, index_2;
    MyNode * temp_1, temp_1_next, temp_2, temp_2_next, node_1, node_2;

    //Check whether the parameters are legal
    if (order_1 >= 1 && order_1 <= this->length && order_2 >= 1 && order_2 <= this->length) {
        if (order_1 == order_2) return 1;
        else {
            index_1 = 0;
            node_1 = this->headNode;
            while (index_1 < order_1 - 1) {
                node_1 = node_1->getPointer();
                index_1 += 1;
            }
            temp_1 = node_1->getPointer();
            temp_1_next = temp_1->getPointer();

            index_2 = 0;
            node_2 = this->headNode;
            while (index_2 < order_2 - 1) {
                node_2 = node_2->getPointer();
                index_2 += 1;
            }
            temp_2 = node_2->getPointer();
            temp_2_next = temp_2->getPointer();

            node_1->setPointer(temp_2);
            temp_2->setPointer(temp_1_next);
            node_2->setPointer(temp_1);
            temp_1->setPointer(temp_2_next);

            return 1;
        }   
    }
    else return 0;
}
