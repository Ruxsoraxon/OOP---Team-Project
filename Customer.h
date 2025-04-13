//
// Created by Valiqulova Durdona on 4/7/2025.
//
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Person.h"
#include <iostream>

class Customer : public Person {
private:
    int customerID;
    string email;

public:
    Customer(string name, int age, int cID, string email) : Person(name, age), customerID(cID), email(email) {}
    void display() const {
        cout << "Customer: " << getName() << " (Customer ID: " << customerID << ")";
        if (!email.empty()) cout << " | Email: " << email;
        cout << endl;
    }
    int getCustomerId() const { return customerID; }
    string getEmail() const { return email; }


};

#endif //CUSTOMER_H
