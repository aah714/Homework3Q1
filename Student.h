//
// Created by ashle on 10/27/2021.
//

#ifndef PERSON_H_STUDENT_H
#define PERSON_H_STUDENT_H
#include "Person.h"

class Student:public Person{
public:
    Student();
    Student(std::string first, std::string last, int year, int day, int month, int newcredits);
    void addcredits(int newcredits);
    int getcredits();
private:
protected:
    int credits;

};


#endif //PERSON_H_STUDENT_H
