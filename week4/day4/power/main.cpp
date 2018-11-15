#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).
int power(int base, int n);

int main() {
    int base;
    int n;
    std::cin >> base;
    std::cin >> n;
    std::cout << power(base, n);
    return 0;
}

int power(int base, int n) {
    if (n == 1)
        return base;
    if (base >= 1 && n >1)
        return base * power(base, n - 1);

}