/**
 * Finding array size in a different way
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(nullptr));

    int first[10];
    int second[20];

    int *third = new int[42];

    std::cout << "First array: " << (*(&first + 1) - first) << std::endl;
    std::cout << "Second array: " << (*(&second  + 1) - second) << std::endl;

    // It won't work
    std::cout << "Third array: " << (*(&third + 1) - third) << std::endl;
    
    delete[] third;

    return 0;
}

