#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.
    int a;
    std::cout << "please give me a number! "<< std::endl;
    std::cin >> a;
    if (a % 2 == 0) {
        std::cout << "even";
    } else {
        std::cout << "odd";
    }

    return 0;
}