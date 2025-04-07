//
// Created by Quvonchbek Toshqo'ziyev on 07/04/2025
//

#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "Employee.h"

class Developer : public Employee {
private:
    double bonus;
public:
    Developer(string name, int age, int id, double baseSalary, double bonus)
        : Employee(name, age, id, baseSalary), projectCompletionBonus(bonus) {}

    double salary() const override {
        return baseSalary + bonus;
    }

    void display() const override {
        cout << "Developer: " << getName()
             << " (ID: " << id << ") Salary: " << salary() << endl;
    }
};

#endif
