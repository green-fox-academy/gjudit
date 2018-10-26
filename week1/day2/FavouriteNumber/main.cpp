#include <iostream>

int main(int argc, char* args[]) {

    // Store your favorite number in a variable (as an integer)
    // And print it like this: "My favorite number is: 8"
    int favnum;
    std::cout << "Whats your favourite number?: "<< std::endl;
    std::cin >> favnum;
    std::cout << "Your favourite number is " << favnum << std::endl;

    return 0;
}