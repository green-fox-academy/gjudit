#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.
void counter(int n);

int main() {
    int num;
    std::cin >> num;
    counter(num);
    return 0;
}

void counter(int n) {
    if (n >= 1) {
        std::cout << n << std::endl;Ł
        counter(n - 1);
    }
}