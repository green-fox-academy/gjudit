
#ifndef GREENFOXINHERITANCE_STUDENT_H
#define GREENFOXINHERITANCE_STUDENT_H

#include "Person.h"

class Student : public Person {
public:
    Student();

    Student(std::string name, int age, std::string gender, int previousOrganization);

    void introduce() override;

    void getGoal() override;

    int skipDays(int numberOfDays);

private:
    std::string _previousOrganization;
    int _skippedDays;
};


#endif //GREENFOXINHERITANCE_STUDENT_H
