#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char* args[])
{
    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");

    // When saving this quote a disk error has occured. Please fix it.
    // Add "always takes longer than" to the quote between the words "It" and "you" using the replace function

    std::string where = "It you";
    int start = quote.find(where);
    quote.replace(start,where.length(), "It always takes longer than you");
    std::cout << quote << std::endl;
    return 0;
}
