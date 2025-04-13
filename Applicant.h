//
// Created by Valiqulova Durdona on 4/13/2025.
//

#ifndef APPLICANT_H
#define APPLICANT_H
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
      Applicant(string name, int age, string degree, int yearsExperience, string desiredPosition): Person(name, age), degree(degree), yearsExperience(yearsExperience), desiredPosition(desiredPosition) {
          if (age<22) throw "Applicant must be at least 22";
          if(yearsExperience<1) throw "Need 1+ years of experience";
          string degLower = tolower(degree);
          if (degLower!="bachelor" && degLower != "master" && degLower != "phd") throw "Invalid degree";
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
          cout << "Applicant: " << getName() << " | Degree: "<<degree<<" | Experience: "<<yearsExperience<<endl;
      }
};
#endif //APPLICANT_H
