//
// Created by ashle on 10/27/2021.
//

#include "Student.h"

Student::Student():Person(){
    credits=0;
}

Student::Student(std::string first, std::string last, int year, int day, int month, int newcredits):Person(first, last, year, day, month) {
    credits=newcredits;
}

void Student::addcredits(int newcredits) {
    credits+=newcredits;
}

int Student::getcredits() {
    return credits;
}