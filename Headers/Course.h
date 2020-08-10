/*
 *Course.h
 *Created on 8/10/2020
 *Completed on ...
 *By S.H.
 *The declaration of the class "Course"
 */

#ifndef _COURSE_H_
#define _COURSE_H_

#include"Teacher.h"

//Two modes of course: pf mode(P/F) and grade mode(A/B/C...)
#define GRADE_MODE 1
#define PF_MODE 2

class Course {

    protected:

    //The name of the course
    char name[20];

    //The id of the course
    int id;

    //The grade mode of the course
    int mode;

    //The credit of the course
    int credit;

    //The teacher of the course
    Teacher teacher;

    public:

    //Constructor
    Course();
    Course(char* _name_, int _id_, int _mode_, int _credit_, Teacher _teacher_);

    //Destructor
    ~Course();

    //Get the teacher
    //INPUT: NONE
    //OUTPUT: The teacher of the course
    Teacher getTeacher();

    //Edit the information of the course
    //INPUT: NONE
    //OUTPUT: NONE
    void editCourseInfo();

    //Set the name of the course
    //INPUT: The new name
    //OUTPUT: NONE
    void setName(char* _name_);

    //Set the mode of the course
    //INPUT: The mode(defined)
    //OUTPUT: NONE
    void setMode(int _mode_);

    //Set the credit of the course
    //INPUT: The new credit
    //OUTPUT: NONE
    void setCredit(int _credit_);

    //Print the information of the course
    //INPUT: NONE
    //OUTPUT: NONE
    void printCourseInfo();
};

#endif //_COURSE_H_


/**************END OF THE FILE*********************/
