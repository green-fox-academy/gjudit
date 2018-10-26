#include <iostream>

int main(int argc, char* args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables
    currentHours *= 60 * 60;
    currentMinutes *= 60;
    int fullday = 60 * 60 * 24;
    int remaining = fullday - (currentHours + currentMinutes + currentSeconds);
    std::cout << remaining << std::endl;
    return 0;
}