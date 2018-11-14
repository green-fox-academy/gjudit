//
// Created by Judit on 2018.11.14..
//

#include "Sharpie.h"

Sharpie::Sharpie(std::string color, float width) {
    _color = color;
    _width = width;
    _inkAmount = 100;
}

void Sharpie::use() {
    _inkAmount -= 0.2;
}

void Sharpie::print() {
    std::cout << "The " << _color << " colored sharpie with " << _width << " width has " << _inkAmount
              << "amount of ink left." <<
              std::endl;
}