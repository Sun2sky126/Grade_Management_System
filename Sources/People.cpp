/*
 *People.cpp
 *Created on 8/9/2020
 *Completed on ...
 *By S.H.
 *The definition of the class "People"
 */

#include"People.h"

//Constructor
People::People() {}

People::People(
    char* _name_,
    int _id_,
    char* _password_,
    char* _gender_,
    char* _institute_) {
        strcpy(this->name, _name_);
        this->id = _id_;
        strcpy(this->password, _password_);
        strcpy(this->gender, _gender_);
        strcpy(this->institute, _institute_);
    }

//Destructor
People::~People() {
    delete [] this->name;
    delete [] this->password;
    delete [] this->gender;
    delete [] this->institute;
}

//Get people's name
//INPUT: NONE
//OUTPUT: People's name
char* People::getName() {
    return this->name;
}

//Get people's id
//INPUT: NONE
//OUTPUT: People's id
int People::getID() {
    return this->id;
}

//Get people's password
//INPUT: NONE
//OUTPUT: People's password
char* People::getPassword() {
    return this->password;
}



/******************END OF THE FILE*********************/
