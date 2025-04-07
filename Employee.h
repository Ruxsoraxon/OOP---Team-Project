//
// Created by Valiqulova Durdona on 4/7/2025.
//
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
#include <iostream>

class Employee : public Person {
protected:
    int id;
    double baseSalary;
public:
    Employee(string n, int a, int i, double s) : Person(n, a), id(i), baseSalary(s) {}
    virtual double salary() const = 0;
    virtual void display() const = 0;
    virtual ~Employee() {}
};

#endif //EMPLOYEE_H
