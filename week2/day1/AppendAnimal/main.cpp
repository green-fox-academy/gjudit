#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `animals`
    //   with the following content: `["koal", "pand", "zebr"]`
    // - Add all elements an `"a"` at the end

    std::string animals[3]={"koal", "pand", "zebr"};
    for (int i = 0; i<3; i++){
        animals[i] = animals[i] + "a";
    }
    for (int i = 0; i<3; i++){
        std::cout<< animals[i];
    }

    return 0;
}