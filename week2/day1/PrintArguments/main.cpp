#include <iostream>
#include <string>

void printParams (std::string a);
void printParams (std::string a, std::string b);
void printParams (std::string a, std::string b, std::string c);
void printParams (std::string a, std::string b, std::string c, std::string d);

int main(int argc, char* args[]) {

    // - Create a function called `printParams`
    //   which prints the input String parameters
    // - It can have any number of parameters

    // Examples
    // printParams("first")
    // printParams("first", "second")
    // printParams("first", "second", "third", "fourh")
    // ...
    printParams("first");
    printParams("first", "second");
    printParams("first", "second", "third");
    printParams("first", "second", "third", "fourth");
    return 0;
}
void printParams (std::string a){
    std::cout << a << std::endl;
}
void printParams (std::string a, std::string b){
    std::cout << a <<", "<< b << std::endl;
}
void printParams (std::string a, std::string b, std::string c){
    std::cout << a <<", "<< b <<", "<< c << std::endl;
}
void printParams (std::string a, std::string b, std::string c, std::string d){
    std::cout << a <<", "<< b <<", "<< c <<", "<< d << std::endl;
}