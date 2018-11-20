//
// Created by Judit on 2018.11.20..
//

#include "Sponsor.h"

Sponsor::Sponsor() {
    _name = "Jane Doe";
    _age = 30;
    _gender = "Female";
    _company = "Google";
    _hiredStudents = 0;
}

Sponsor::Sponsor(std::string name, int age, std::string gender, std::string company) {
    _name = name;
    _age = age;
    _gender = gender;
    _company = company;
}

void Sponsor::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << _gender << " who represents " << _company
              << " and hired " << _hiredStudents << " students so far. " << std::endl;
}

void Sponsor::getGoal() {
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}

int Sponsor::hire() {
    _hiredStudents++;
    return _hiredStudents;
}