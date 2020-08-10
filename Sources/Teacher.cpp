/*
 *Teacher.cpp
 *Created on 8/10/2020
 *Completed in ...
 *By S.H.
 *The definition of the class "Teacher"
 *Derived from "People"
 */

#include"Teacher.h"

//Constructor
Teacher::Teacher() {}

Teacher::Teacher(char* _name_, int _id_, char* _password_, char* _gender_, char* _institute_) :
    People(_name_, _id_, _password_, _gender_, _institute_) {}

//Destructor 
Teacher::~Teacher() {}    

//Print teacher's information
//INPUT: NONE
//OUTPUT: The info of teacher
void Teacher::printInfo() {
    cout << "Name:\t" << this->name << endl;
    cout << "ID:\t" << this->id << endl;
    cout << "Gender:\t" << this->gender << endl;
    cout << "Institite:\t" << this->institute << endl;
    cout << endl; 
}



/*************END OF THE FILE*************/
