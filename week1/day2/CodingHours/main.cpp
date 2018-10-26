#include <iostream>

int main(int argc, char* args[]) {

    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long
    //
    // Print how many hours is spent with coding in a semester by an attendee,
    // if the attendee only codes on workdays.
    //
    // Print the percentage of the coding hours in the semester if the average
    // working hours weekly is 52
    int attendee = 17 * 5 * 6;
    float full = 17 * 52;
    std::cout << "The attendee spends " << attendee << " hours in a semester with coding," << std::endl;
    std::cout << "Thats " << attendee / full * 100 << "% of the full working time!" << std::endl;

    return 0;
}