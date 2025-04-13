//
// Created by Quvonchbek Toshqo'ziyev on 07/04/2025
//

#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee {
private:
  double bonus;

public:
  Manager(string name, int age, int id, double baseSalary, double bonus)
      : Employee(name, age, id, baseSalary), bonus(bonus) {}

  double salary() const override { return baseSalary + bonus; }

  void display() const override {
    cout << "Manager: " << getName() << " (ID: " << id
         << ") Salary: " << salary() << endl;
  }
};

#endif
