/**
 * remove() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> vector = { 1, 1, 2, 3, 5, 8 };
    std::vector<int>::iterator end = std::remove(vector.begin(), vector.end(), 1); // NOLINT(hicpp-use-auto,modernize-use-auto)

    std::copy(vector.begin(), end, std::ostream_iterator<int>(std::cout, " "));

    return 0;
}