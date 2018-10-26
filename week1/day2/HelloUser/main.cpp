#include <iostream>

int main(int argc, char* args[]) {

    // Modify this program to greet user instead of the World!
    // The program should ask for the name of the user
    std::string user;
    std::cout << "Please tell me your name!: ";
    std::cin >> user;
    std::cout << "Hello " << user << std::endl;

    return 0;
}