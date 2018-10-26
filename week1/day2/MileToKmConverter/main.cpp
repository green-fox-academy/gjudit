#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it
    double mile = 0.621371192;
    int km;
    std::cout << "How many kilometers do you want to convert? " << std::endl;
    std::cin >> km;
    std::cout << km << " kilometer is " << km * mile << " mile." << std::endl;
    return 0;
}