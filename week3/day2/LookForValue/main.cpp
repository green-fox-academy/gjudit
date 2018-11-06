#include <iostream>

int checker(int *funcArray, int length, int parameter);

int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0
    const int size = 4;
    int array[size] = {1, 2, 3, 4};
    int *ptrArray = array;
    int result = checker(ptrArray, size, 4);
    if( result != 0){
        std::cout <<  result << std::endl;
    }
    else{
        std::cout << "There is no matching" << std::endl;
    }
    return 0;
}

int checker(int *funcArray, int length, int parameter)
{
    for(int i = 0; i < length; i++){
        if(funcArray[i] == parameter){
            return i;
        }
    }

    return 0;
}