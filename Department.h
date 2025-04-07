//
// Created by Ruxsoraxon Kenjayeva on 07/04/25.
//

#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <vector>
#include <memory>
using namespace std;

template <typename T>
class Department {
private:
    vector<shared_ptr<T>> employees;
public:
    void addEmployee(T* emp) {
        employees.push_back(shared_ptr<T>(emp));
    }
    void showEmployees() const {
        for (const auto& emp : employees) {
            emp->display();
        }
    }
};


#endif //DEPARTMENT_H
