//
// Created by ashle on 10/27/2021.
//

#include "GradStudent.h"

GradStudent::GradStudent():Student(){
    degree=" ";
}

GradStudent::GradStudent(string first, string last, int year, int day, int month, int newcredits, string undergradDegree):Student(first, last, year, day, month, newcredits){
    degree=undergradDegree;
}

void GradStudent::setdegree(string undergradDegree) {
    degree=undergradDegree;
}

string GradStudent::getdegree() {
    return degree;
}