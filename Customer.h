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

public:
  Customer(string name, int age, int cid)
      : Person(name, age), customerID(cid) {}
  void display() const {
    cout << "Customer: " << getName() << " (Customer ID: " << customerID << ")"
         << endl;
  }
};

#endif // CUSTOMER_H
