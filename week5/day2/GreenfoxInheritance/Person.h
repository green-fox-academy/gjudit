#ifndef GREENFOXINHERITANCE_PERSON_H
#define GREENFOXINHERITANCE_PERSON_H

#include <iostream>

class Person {
public:
    Person();

    Person(std::string name, int age, std::string gender);

    virtual void introduce();

    virtual void getGoal();

protected:
    std::string _name;
    int _age;
    std::string _gender;

};


#endif //GREENFOXINHERITANCE_PERSON_H
