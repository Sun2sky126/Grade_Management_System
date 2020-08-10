/*
 *Teacher.h
 *Created on 8/9/2020
 *Completed on ...
 *By S.H.
 *The declaration of the class "Teacher"
 *Derived from "People"
 */

#ifndef _TEACHER_H_
#define _TEACHER_H_

#include"People.h"

class Teacher : public People {

    public:

    Teacher();
    Teacher(char* _name_, int _id_, char* _password_, char* _gender_, char* _institute_);

    virtual ~Teacher();
};

#endif //_TEACHER_H_
