/**
 * for_each() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 0, 2, 4, 6, 8 };

    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << '\t';
    });

    std::cout << std::endl;

    return 0;
}