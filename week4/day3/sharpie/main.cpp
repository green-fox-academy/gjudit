#include <iostream>
#include "Sharpie.h"
int main() {
    Sharpie red("red", 0.5);
    for (int i =0; i<10; i++){
        red.use();
        red.print();
    }
    return 0;
}