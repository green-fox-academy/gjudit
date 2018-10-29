#include <iostream>
#include <string>
int sum(int x);
int main(int argc, char* args[]) {

    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer
    int a = 0;
    std::cin >> a;
    int endValue = sum(a);
    std::cout<< endValue;
    return 0;
}
int sum (int x){
    int value = 0;
    for ( int i =0 ; i <=x ; i++){
         value =value + i;
    }
    return value;
}