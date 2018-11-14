//
// Created by Judit on 2018.11.14..
//

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <iostream>

class Sharpie {
public:
    Sharpie(std::string color, float width);

    void use();

    void print();

private:
    std::string _color;
    float _width;
    float _inkAmount;
};


#endif //SHARPIE_SHARPIE_H
