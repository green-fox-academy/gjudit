#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

int sumdigit(int num);


int main() {
    int smt;
    std::cin >> smt;
    std::cout << sumdigit(smt) << std::endl;

    return 0;
}

int sumdigit(int num) {
    if (num <= 0)
        return 0;
    else
        return num % 10 + sumdigit(num/10);
}