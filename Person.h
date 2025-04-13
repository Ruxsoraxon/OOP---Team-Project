//
// Created by Ruxsoraxon Kenjayeva on 07/04/25.
//

#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {
private:
  string name;
  int age;

public:
  Person(string name, int age) : name(name), age(age) {}
  string getName() const { return name; }
  int getAge() const { return age; }
};

#endif
