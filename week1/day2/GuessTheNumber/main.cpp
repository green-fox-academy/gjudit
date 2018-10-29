#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8


    int a = 345;
    int b;
    std::cin >> b;
    while (a != b){
        if (b > a){
            std::cout << "The number is lower!" << std::endl;
        } else if (b < a){
            std::cout << "The number is higher!" << std::endl;
        }
        std::cin >> b;
    }
    std::cout << "You found the number: " << a << std::endl;
    return 0;
}