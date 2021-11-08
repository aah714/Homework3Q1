//
// Created by ashle on 10/27/2021.
//

#ifndef PERSON_H_EMPLOYEE_H
#define PERSON_H_EMPLOYEE_H
#include "person.h"


class Employee:public Person{
public:
    Employee();
    Employee(std::string first, std::string last, int year, int day, int month, float newhours, float newhrate);
    float gethours();
    float gethrate();
    float getpay();
    void setpay();

private:
    float hours;
    float hrate;
    float pay;
protected:


};


#endif //PERSON_H_EMPLOYEE_H
