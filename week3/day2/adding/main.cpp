#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;
    int* ptra = &a;
    int* ptrb = &b;
    int c = *ptra + *ptrb;
    std::cout << c << std::endl;
    std::cout << *ptra + *ptrb << std::endl;

    return 0;
}