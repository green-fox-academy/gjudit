#include <iostream>
#include <string>
void greet(std::string x);
int main(int argc, char* args[]) {

    // - Create a stvoid greet(std::string x)ring variable named `al` and assign the value `Greenfox` to it
    // - Create a function called `greet` that greets it's input parameter
    // - Greeting is printing e.g. `Greetings dear, Greenfox`
    // - Greet `al`
    std::string al = "greenfox";
    greet(al);

    return 0;
}
void greet(std::string x){
    std::cout << "Greetings dear, " << x << std::endl;
}