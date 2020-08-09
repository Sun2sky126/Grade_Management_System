/*
 *Student.h
 *Created on 8/9/2020
 *Completed on ...
 *By S.H.
 *The declaration of the class "Student"
 *Derived from "People"
 */

#ifndef _STUDENT_H_
#define _STUDENT_H_

#include"People.h"

class Student : public People {

    protected:

    //Student's credits
    int credits;

    //Student's GPA
    double GPA;

    public:

    Student();
    Student(char* _name_, int _id_, char* _password_, 
        char* _gender_, char* _institute_, int _credits_, double _GPA_);

    virtual ~Student();

    //Set student's credits
    //INPUT: Student's credits
    //OUTPUT: NONE
    void setCredits(int _credits_);

    //Get student's credits
    //INPUT: NONE
    //OUTPUT: Student's credits
    int getCredits();

    //Set student's GPA
    //INPUT: Student's GPA
    //OUTPUT: NONE
    void setGPA(double _GPA_);

    //Get student's GPA
    //INPUT: NONE
    //OUTPUT: Student's GPA
    double getGPA();
};

#endif //_STUDENT_H_


/***************END OF THE FILE*********************/
