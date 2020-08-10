/*
 *People.h
 *Created on 8/9/2020
 *Completed on ...
 *by S.H.
 *The declaration of the class "People"
 *VIRTUAL BASE CLASS
 */

#ifndef _PEOPLE_H_
#define _PEOPLE_H_

#include<string.h>
#include<iostream>
#include<iomanip>

using namespace std;

class People {

    protected:

    //People's name
    char name[15];

    //People's id number
    int id;

    //People's account password
    char password[10];

    //People's gender
    char gender[8];

    //People's institute
    char institute[20];

    public:

    People();
    People(char* _name_, int _id_, char* _password_, char* _gender_, char* _institute_);

    virtual ~People();

    //Print people's information
    virtual void printInfo() = 0;

    //Get people's name
    //INPUT: NONE
    //OUTPUT: People's name
    char* getName();

    //Get people's id
    //INPUT: NONE
    //OUTPUT: People's id
    int getID();

    //Get people's password
    //INPUT: NONE
    //OUTPUT: People's password
    char* getPassword();
};

#endif //_STUDENT_H_


/****************END OF THE FILE*********************/
