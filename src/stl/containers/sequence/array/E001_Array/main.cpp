/**
 * STL Container: Array example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::array<int, 5> arr = { 3, 6, 2, 9, 1 };

    std::cout << "Before: ";
    std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::sort(arr.begin(), arr.end());

    std::cout << "After: ";
    std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
