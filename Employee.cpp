//
// Created by ashle on 10/27/2021.
//
#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee():Person(){
    hrate=0;
    hours=0;
    pay=0.0;
}

Employee::Employee(std::string first, std::string last, int year, int day, int month, float newhours, float newhrate):Person(first, last, year, day, month) {
    hours=newhours;
    hrate=newhrate;
    pay=0.0;
}

float Employee::gethours() {
    return hours;
}


float Employee::gethrate() {
    return hrate;
}

float Employee::getpay() {
    return pay;
}

void Employee::setpay() {
    pay=hrate*hours;
}