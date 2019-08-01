/**
 * copy_backward() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    std::vector<int> newNumbers;
    newNumbers.resize(numbers.size() + 10);

    std::copy_backward(numbers.begin(), numbers.end(), newNumbers.end());

    for (const int& number : newNumbers) {
        std::cout << ' ' << number;
    }

    std::cout << std::endl;

    return 0;
}