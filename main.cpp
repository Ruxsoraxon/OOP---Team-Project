//
// Created by Valiqulova Durdona on 4/9/2025.
//
#include <iostream>
using namespace std;
#include "Customer.h"
#include "Department.h"
#include "Developer.h"
#include "Manager.h"
#include "SalesRepresentative.h"
#include "SupportStaff.h"
int main() {
  Department<Employee> techDept;
  techDept.addEmployee(make_shared<Manager>("Quvonchbek", 35, 101, 6000, 1200));
  techDept.addEmployee(
      make_shared<Developer>("Quvonchbek", 30, 102, 5500, 900));

  Department<Employee> salesDept;
  salesDept.addEmployee(
      make_shared<SalesRepresentative>("Assadi", 28, 201, 3000, 500));
  salesDept.addEmployee(
      make_shared<SupportStaff>("Assadi", 32, 202, 2500, "Night"));

  cout << "Tech Department:\n";
  techDept.showEmployees();

  cout << "\nSales Department:\n";
  salesDept.showEmployees();

  Customer customer("McCoy", 27, 501);
  customer.display();

  return 0;
}