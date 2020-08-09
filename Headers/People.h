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
    virtual void printInfo() const = 0;

    //Get people's name
    void getName();
};

#endif //_STUDENT_H_


/****************END OF THE FILE*********************/
