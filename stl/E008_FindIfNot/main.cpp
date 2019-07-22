/**
 * find_if_not() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>

bool isEven (int n) { return ((n % 2) == 0); }

int main() {
    std::vector<int> numbers = { 10, 20, 40, 35 };
    auto iter = std::find_if(numbers.begin(), numbers.end(), isEven);
    std::cout << "First even number: " << *iter << std::endl;

    auto iterOdd = std::find_if_not(numbers.begin(), numbers.end(), isEven);
    std::cout << "First odd number: " << *iterOdd << std::endl;

    return 0;
}