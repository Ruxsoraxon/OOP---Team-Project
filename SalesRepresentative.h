#ifndef SALESREPRESENTATIVE_H
#define SALESREPRESENTATIVE_H
#include "Employee.h"

class SalesRepresentative : public Employee {
private:
    double commission;
public:
    SalesRepresentative(string n, int a, int i, double s, double c) : Employee(n, a, i, s), commission(c) {}
    double salary() const override { return baseSalary + commission; }
    void display() const override {
        cout << "Sales Rep: " << getName() << " (ID: " << id << ") Salary: " << salary() << endl;
    }
};

#endif