//
// Created by Judit on 2018.11.20..
//

#include "Student.h"

Student::Student() {
    _name = "Jane Doe";
    _age = 30;
    _gender = "Female";
    _previousOrganization = "The School of Life";
    _skippedDays = 0;
}

Student::Student(std::string name, int age, std::string gender, int previousOrganization) {
    _name = name;
    _age = age;
    _gender = gender;
    _skippedDays = 0;
    _previousOrganization = previousOrganization;
}

void Student::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << _gender << " from " << _previousOrganization
              << ", who skipped " << _skippedDays << " days from the course already." << std::endl;
}

void Student::getGoal() {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

int Student::skipDays(int numberOfDays) {
    _skippedDays += numberOfDays;
    return _skippedDays;
}