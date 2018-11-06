#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again
    int size = 5;
    int num[size];
    std::cout << "gimme some numbers " << std::endl;
    for (int i = 0; i < size; i++)
        std::cin >> num[i];

    int *ptrnum = num;

    for (int i = 0; i < size; i++)
        std::cout << *ptrnum + i << std::endl;

    return 0;
}