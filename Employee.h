//
// Created by Valiqulova Durdona on 4/7/2025.
//
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
#include <iostream>
#include <string>

class Employee : public Person {
protected:
    int id;
    double baseSalary;
public:
    Employee(string name, int age, int ID, double salary) : Person(name, age), id(ID), baseSalary(salary) {}

    virtual double salary() const = 0;
    virtual void display() const = 0;
};

#endif //EMPLOYEE_H

