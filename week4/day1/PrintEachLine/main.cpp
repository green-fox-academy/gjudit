#include <iostream>
#include <fstream>
#include <string>

int main () {
    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory



    std::ifstream File("my-file.txt");
    std::string text;


    if(File.is_open()){
        std::cout << ":)" << std::endl;
    }else {
        std::cout << ":(" << std::endl;
    }

    while (std::getline(File, text)){
        std::cout << text << std::endl;
    }
    File.close();
    return 0;
}