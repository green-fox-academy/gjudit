

#ifndef GREENFOXINHERITANCE_MENTOR_H
#define GREENFOXINHERITANCE_MENTOR_H

#include "Person.h"

class Mentor : public Person {
public:
    Mentor();

    Mentor(std::string name, int age, std::string gender, std::string level);

    void getGoal() override;

    void introduce() override;

private:
    std::string _level;
};


#endif //GREENFOXINHERITANCE_MENTOR_H
