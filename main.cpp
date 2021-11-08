/****************************************************
 * Author:              Ashley Howard
 * Program:             hw3, q1
 * Date Created:        Wednesday, October 27, 2021
 * Date Last Modified:  Friday, November 5, 2021
 * **************************************************/

#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Student.h"
#include "GradStudent.h"

using namespace std;

int main()
{
    Person p1("Tony", "Stark", 1950, 21, 1);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;

    Employee e1("John", "Don", 1989, 13, 10, 40, 20);
    e1.setpay();
    cout << e1.getName() << " born on: " <<e1.getBirthdate() << " and worked " << e1.gethours() << " hours " <<
        " and was paid " << e1.gethrate() << " per hour. " << "They made a total of " << e1.getpay() << " dollars" <<endl;

    Student s1("Danny", "Luke", 1991, 12, 2, 4);
    cout << s1.getName() << " born on: " <<s1.getBirthdate() << " and has " << s1.getcredits() << " credits " <<endl;

    GradStudent g1("Austin", "Douglas", 1990, 14, 3, 125, "music");
    cout << g1.getName() << " born on: " <<g1.getBirthdate() << " and has " << g1.getcredits() << " credits " <<
    " and has a degree in " <<g1.getdegree() << endl;

    return 0;
}
