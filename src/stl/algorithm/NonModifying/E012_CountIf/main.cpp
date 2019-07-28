/**
 * count() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 0, 1, 2, 3, 4, 5, 6, 7, 8 , 9 };

    int counter = std::count_if(numbers.begin(), numbers.end(), [](int n) {
        return n % 2 == 1;
    });

    std::cout << "Odd count: " << counter << std::endl;

    return 0;
}