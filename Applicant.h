#ifndef APPLICANT_H
#define APPLICANT_H
#include <algorithm>

#include "Person.h"
#include <string>
#include <cctype>
#include <iostream>
#include <ostream>
using namespace std;

class Applicant:public Person{
private:
    string degree;
    int yearsExperience;
    string desiredPosition;
public:
    Applicant(string name, int age, string degree, int yearsExperience, string desiredPosition): Person(name, age), degree(degree), yearsExperience(yearsExperience), desiredPosition(desiredPosition) {}
    string toLower(string str) const {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        return str;
    }
    bool isQualified() const {
        string degLower = toLower(degree);
        return (getAge() >= 22) &&
             (yearsExperience >= 1) &&
             (degree == "bachelor" || degree == "master" || degree == "phd");

    }
    string getDegree() const {
        return degree;
    }
    int getYearsExperience() const {
        return yearsExperience;
    }
    string getDesiredPosition() const {
        return desiredPosition;
    }

    void display() const {
        cout << "Applicant: " << getName() << " | Degree: "<<degree<<" | Experience: "<<yearsExperience<< "Position: " << desiredPosition
           << " | " << (isQualified() ? "QUALIFIED" : "NOT QUALIFIED")<<endl;
    }
};
#endif //APPLICANT_H
