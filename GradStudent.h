//
// Created by ashle on 10/27/2021.
//

#ifndef PERSON_H_GRADSTUDENT_H
#define PERSON_H_GRADSTUDENT_H
#include "Student.h"
#include <string>
using namespace std;

class GradStudent:public Student{
public:
    GradStudent();
    GradStudent(std::string first, std::string last, int year, int day, int month, int newcredits, string undergradDegree);
    void addcredits(int newcredits);
    string getdegree();
    void setdegree(string undergradDegree);
private:
protected:
    string degree;

};


#endif //PERSON_H_GRADSTUDENT_H
