#include <iostream>

int main(int argc, char* args[]) {

    // Define several things as a variable then print their values
    // Your name as a string
    // Your age as an integer
    // Your height in meters as a double
    // Whether you are married or not as a boolean
    std::string Name = "Judit";
    int age = 21;
    double height = 1.8;
    bool married = false;
    std::cout << Name << std::endl;
    std::cout << age << std::endl;
    std::cout << height << std::endl;
    std::cout << std::boolalpha << married << std::endl;

    return 0;
}