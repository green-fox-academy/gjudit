#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.
int adder(int num);

int main() {
    int smt;
    std::cin >> smt;
    std::cout << adder(smt) << std::endl;
    return 0;
}

int adder(int num) {
    if (num >= 0) {
        if (num == 0 || num == 1)
            return num;
        else{
            num += adder(num - 1);
            return num;
        }

    } else
        return -1;
}