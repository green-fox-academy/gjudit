//
// Created by Judit on 2018.11.14..
//

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <iostream>

class Animal {
public:
    Animal();

    void eat();

    void drink();

    void play();

    void print();

private:
    int _thirst;
    int _hunger;
};


#endif //ANIMAL_ANIMAL_H
