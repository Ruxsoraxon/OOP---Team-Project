#ifndef SUPPORTSTAFF_H
#define SUPPORTSTAFF_H
#include "Employee.h"

class SupportStaff : public Employee {
private:
    string shift;
public:
    SupportStaff(string n, int a, int i, double s, string sh) : Employee(n, a, i, s), shift(sh) {}
    double salary() const override { return baseSalary; }
    void display() const override {
        cout << "Support Staff: " << getName() << " (ID: " << id << ") Shift: " << shift << " Salary: " << salary() << endl;
    }
};

#endif