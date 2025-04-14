//
// Created by Valiqulova Durdona on 4/9/2025.
//
#include <iostream>
using namespace std;
#include "Department.h"
#include "Manager.h"
#include "Developer.h"
#include "SalesRepresentative.h"
#include "SupportStaff.h"
#include "Customer.h"
int main() {
    Department<Employee> techDept;
    techDept.addEmployee(shared_ptr<Employee>(new Manager("Quvonchbek", 35, 101, 6000, 1200)));
    techDept.addEmployee(shared_ptr<Employee>(new Developer("Quvonchbek", 30, 102, 5500, 900)));

    Department<Employee> salesDept;
    salesDept.addEmployee(shared_ptr<Employee>(new SalesRepresentative("Assadi", 28, 201, 3000, 500)));
    salesDept.addEmployee(shared_ptr<Employee>(new SupportStaff("Assadi", 32, 202, 2500, "Night")));
    cout << "Tech Department:\n";
    techDept.showEmployees();

    cout << "\nSales Department:\n";
    salesDept.showEmployees();

    Customer customer("McCoy", 27, 501, " ");
    customer.display();

    return 0;
}
