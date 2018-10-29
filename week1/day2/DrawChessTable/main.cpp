#include <iostream>

int main(int argc, char* args[]) {

    // Crate a program that draws a chess table like this
    //
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    // % % % %
    //  % % % %
    int a = 8;
    int b = 1;
    int c = 4;

    for(a; a > 0; a--){
        if (a % 2 == 0){
            for (c; c>0; c--)
                std::cout << "% ";

        } else {
            for (c; c>0; c--)
                std::cout << " %";

        }
        c = 4;
        std::cout << std::endl;
    }
    return 0;
}