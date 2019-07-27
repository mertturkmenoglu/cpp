/**
 * copy_if() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<int> evenNumbers(std::count_if(numbers.begin(), numbers.end(), [](int n){ return n % 2 == 0;}));

    std::copy_if(numbers.begin(), numbers.end(), evenNumbers.begin(), [](int n) { return n % 2 == 0; });

    std::cout << "Numbers: " << std::endl;
    for (int& number : numbers) {
        std::cout << number << '\t';
    }

    std::cout << std::endl;

    std::cout << "Even numbers: " << std::endl;
    for (int& number : evenNumbers) {
        std::cout << number << '\t';
    }

    std::cout << std::endl;

    return 0;
}
