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
    std::array<int, 5> other = { };

    std::cout << "Array.fill(): ";
    other.fill(0);
    std::copy(other.begin(), other.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::cout << "Array.swap(): " << std::endl;
    arr.swap(other);

    std::cout << "Array: ";
    std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::cout << "Other: ";
    std::copy(other.begin(), other.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::cout << "Compare: " << std::boolalpha << (arr == other) << std::endl;
    std::cout << "Get: " << std::get<3>(other) << std::endl;

    // Since C++20
    // auto chars = std::to_array("emily");

    return 0;
}
