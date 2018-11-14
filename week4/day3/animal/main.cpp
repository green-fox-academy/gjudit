#include <iostream>
#include "Animal.h"


int main() {
    Animal cat;
    for (int i = 0; i < 5; i++) {
        cat.eat();
        cat.drink();
        cat.print();
        cat.play();
        cat.print();
    }
    return 0;
}