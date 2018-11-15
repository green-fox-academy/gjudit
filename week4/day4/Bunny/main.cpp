#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).
int bunnies(int num);

int main() {
    int num;
    std::cin >> num;
    std::cout << bunnies(num);
    return 0;
}

int bunnies(int num) {
    if (num <= 0)
        return 0;
    if (num >= 1)
        return 2 + bunnies(num - 1);
}