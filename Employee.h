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
    Employee(string name, int age, int ID, double salary) : Person(name, age), id(ID), baseSalary(salary) {
        if (ID <= 0) throw "Invalid employee ID";
        if (salary < 0) throw "Salary cannot be negative";
    }

    virtual double salary() const = 0;
    virtual void display() const = 0;
    int getID() const { return id; }
    double getBaseSalary() const { return baseSalary; }
};

#endif //EMPLOYEE_H

