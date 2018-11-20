//
// Created by Judit on 2018.11.20..
//

#include "Mentor.h"

Mentor::Mentor() {
    _name = "Jane Doe";
    _age = 30;
    _gender = "Female";
    _level = "intermediate";
}

Mentor::Mentor(std::string name, int age, std::string gender, std::string level) {
    _name = name;
    _age = age;
    _gender = gender;
    _level = level;
}

void Mentor::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << _gender << " " << _level << " mentor."
              << std::endl;
}

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}