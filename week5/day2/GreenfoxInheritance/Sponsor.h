#include "Person.h"

#ifndef GREENFOXINHERITANCE_SPONSOR_H
#define GREENFOXINHERITANCE_SPONSOR_H


class Sponsor : public Person {
public:
    Sponsor();

    Sponsor(std::string name, int age, std::string gender, std::string company);

    void getGoal() override;

    void introduce() override;

    int hire();

private:
    std::string _company;
    int _hiredStudents;
};


#endif //GREENFOXINHERITANCE_SPONSOR_H
