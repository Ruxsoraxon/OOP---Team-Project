#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "Person.h"
#include <iostream>

class Customer : public Person {
private:
    int customerID;
public:
    Customer(string n, int a, int cid) : Person(n, a), customerID(cid) {}
    void display() const {
        cout << "Customer: " << getName() << " (Customer ID: " << customerID << ")" << endl;
    }
};

#endif //CUSTOMER_H
