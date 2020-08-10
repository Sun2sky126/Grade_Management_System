/*
 *Grade.h
 *Created on 8/10/2020
 *Completed on ...
 *By S.H.
 *The definition of the class "Grade"
 */

#ifndef _GRADE_H_
#define _GRADE_H_

#include<iostream>
using namespace std;

class Grade {

    protected:

    //The score(full mark = 100)
    int score;

    //The grade(full mark = A+)
    char grade[3];

    //The grade point(full mark = 4.0)
    double gradePoint;

    public:

    //Constructor
    Grade();
    Grade(int _score_, char* _grade_, double _gradePoint_);

    //Destructor
    ~Grade();

    //Set the grade
    //INPUT: The score(x/100)
    //OUTPUT: NONE
    void setGrade(int _score_);

    //Get the score
    //INPUT: NONE
    //OUTPUT: The score
    int getScore();

    //Get the grade
    //INPUT: NONE
    //OUTPUT: The grade
    char* getGrade();

    //Get the gradepoint
    //INPUT: NONE
    //OUTPUT: The gradepoint
    double getGradePoint();

    //Operator: <<
    friend ostream& operator << (ostream& output, Grade& grade);
};

#endif //_GRADE_H_

/******************END OF THE FILE**********************/
