//
// Created by Valiqulova Durdona on 4/13/2025.
//
#ifndef APPLICANT_H
#define APPLICANT_H
#include "Person.h"
#include <algorithm> // Include for std::transform
#include <cctype>
#include <iostream>
#include <locale>
#include <ostream>
#include <string>
using namespace std;

class Applicant : public Person {
private:
  string degree;
  int yearsExperience;
  string desiredPosition;

public:
  Applicant(string name, int age, string degree, int yearsExperience,
            string desiredPosition)
      : Person(name, age), degree(degree), yearsExperience(yearsExperience),
        desiredPosition(desiredPosition) {
    if (age < 22)
      throw "Applicant must be at least 22";
    if (yearsExperience < 1)
      throw "Need 1+ years of experience";

    string degLower = degree;
    std::transform(degLower.begin(), degLower.end(), degLower.begin(),
                   [](unsigned char c) { return std::tolower(c); });

    if (degLower != "bachelor" && degLower != "master" && degLower != "phd") {
      throw "Invalid degree";
    }
  }

  string getDegree() const { return degree; }
  int getYearsExperience() const { return yearsExperience; }
  string getDesiredPosition() const { return desiredPosition; }

  void display() const {
    cout << "Applicant: " << getName() << " | Degree: " << degree
         << " | Experience: " << yearsExperience << endl;
  }
  bool isQualified() const {
    return yearsExperience >= 1 &&
           (degree == "bachelor" || degree == "master" || degree == "phd");
  }
};

#endif // APPLICANT_H
