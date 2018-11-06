#include <iostream>

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it
    std::cout << "how many numbers u want in the array? " << std::endl;
    int size;
    std::cin >> size;
    int array[size];
    std::cout << "now fill up the array with numbers! " << std::endl;
    for (int i = 0; i < size; i++)
        std::cin >> array[i];
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";

    return 0;
}