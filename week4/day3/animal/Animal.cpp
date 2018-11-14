//
// Created by Judit on 2018.11.14..
//

#include "Animal.h"

Animal::Animal() {
    _hunger = 50;
    _thirst = 50;
    std::cout << "an animal created" << std::endl;
}

void Animal::eat() {
    _hunger--;
}

void Animal::drink() {
    _thirst--;
}

void Animal::play() {
    _hunger++;
    _thirst++;
}

void Animal::print() {
    std::cout << "the animals hunger is " << _hunger << std::endl;
    std::cout << "teh animals thisrs is " << _thirst << std::endl;
}
