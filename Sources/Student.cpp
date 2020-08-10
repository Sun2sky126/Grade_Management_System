/*
 *Student.cpp
 *Created on 8/9/2020
 *Completed on ...
 *By S.H.
 *The definition of the class "Student"
 */

#include"Student.h"

//Constructor
Student::Student() {}

Student::Student(
    char* _name_, 
    int _id_, 
    char* _password_, 
    char* _gender_, 
    char* _institute_, 
    int _credits_, 
    double _GPA_) :
    People(_name_, _id_, _password_, _gender_, _institute_) {
        this->credits = _credits_;
        this->GPA = _GPA_;
    }

//Destructor
Student::~Student() {}

//Set student's credits
//INPUT: Student's credits
//OUTPUT: NONE
void Student::setCredits(int _credits_) {
    this->credits = _credits_;
}

//Get student's credits
//INPUT: NONE
//OUTPUT: Student's credits
int Student::getCredits() {
    return this->credits;
}

//Set student's GPA
//INPUT: Student's GPA
//OUTPUT: NONE
void Student::setGPA(double _GPA_) {
    this->GPA = _GPA_;
}

//Get student's GPA
//INPUT: NONE
//OUTPUT: Student's GPA
double Student::getGPA() {
    return this->GPA;
}

//Print student's information
//INPUT: NONE
//OUTPUT: The info of the student
void Student::printInfo() {
    cout << "Name:\t" << this->name << endl;
    cout << "ID:\t" << this->id << endl;
    cout << "Gender:\t" << this->gender << endl;
    cout << "Institite:\t" << this->institute << endl;
    cout << "Credits:\t" << this->credits << endl;
    cout << "GPA:\t" << setprecision(2) << this->GPA << endl;
    cout << endl; 
}


/*************END OF THE FILE***************/
