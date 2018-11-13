#include <iostream>
#include <fstream>
#include <exception>

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0
    try {
        int a = 10;
        int b = 0;
        if (b == 0) {
            throw 4;
        }
        std::cout << a / b << std::endl;
    } catch (int e) {
        std::cout << "fail" << std::endl;
    }


    return 0;
}