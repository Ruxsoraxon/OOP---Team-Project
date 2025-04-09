//
// Created by Quvonchbek Toshqo'ziyev on 07/04/2025
//

#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "Employee.h"

class Developer : public Employee {
private:
    double projectBonus;
public:
    Developer(string name, int age, int id, double baseSalary, double projectBonus)
        : Employee(name, age, id, baseSalary), projectBonus(projectBonus) {}

    double salary() const override {
        return baseSalary + projectBonus;
    }

    void display() const override {
        cout << "Developer: " << getName()
             << " (ID: " << id << ") Salary: " << salary() << endl;
    }
};

#endif
