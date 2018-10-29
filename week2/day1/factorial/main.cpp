#include <iostream>
#include <string>
int factorio(int x);
int main(int argc, char* args[]) {

    // - Create a function called `factorio`
    //   that returns it's input's factorial
    int a = 0;
    std::cin >> a;
    int endValue = factorio(a);
    std::cout<< endValue;
    return 0;
}
int factorio (int x){
    int value = 1;
    for ( int i =1 ; i <=x ; i++){
        value =value * i;
    }
    return value;
}