//
// Created by Ruxsoraxon Kenjayeva on 07/04/25.
//

#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Applicant.h"
#include <algorithm>
#include <memory>
#include <vector>
using namespace std;

template <typename T> class Department {
private:
  vector<shared_ptr<T>> members;
  vector<Applicant> applicants;

public:
  void addEmployee(shared_ptr<T> emp) { members.push_back(emp); }

  void addApplicant(const Applicant &app) {
    if (!app.isQualified()) {
      throw runtime_error("Applicant doesn't meet minimum requirements");
    }
    applicants.push_back(app);
  }

  template <typename EmployeeType>
  shared_ptr<EmployeeType> hireApplicant(int applicantIndex, int newEmployeeId,
                                         double salary) {
    if (applicantIndex < 0 || applicantIndex >= applicants.size()) {
      throw out_of_range("Invalid applicant index");
    }

    Applicant &app = applicants[applicantIndex];
    auto newEmployee = make_shared<EmployeeType>(app.getName(), app.getAge(),
                                                 newEmployeeId, salary);

    addEmployee(newEmployee);
    applicants.erase(applicants.begin() + applicantIndex);
    return newEmployee;
  }

  void displayApplicants() const {
    cout << "--- Applicants ---\n";
    for (const auto &app : applicants) {
      app.display();
    }
  }

  void showEmployees() const {
    cout << "--- Employees ---\n";
    for (const auto &emp : members) {
      emp->display();
    }
  }
};

#endif // DEPARTMENT_H