/**
 * max_element() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> v = { 1, 4, 2, 9, 2, 2, 3, 7, 5, 3, 1 };

    std::cout << "Vector: ";
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    auto max_iter = std::max_element(v.begin(), v.end());

    std::cout << "Position: " << std::distance(v.begin(), max_iter) << std::endl;
    std::cout << "Element:  " << *max_iter << std::endl;

    return 0;
}
