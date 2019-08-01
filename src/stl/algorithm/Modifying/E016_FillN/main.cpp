/**
 * fill_n() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> vector = { 1, 2, 3, 4, 5, 6, 7 };
    std::fill_n(vector.begin(), 3, 0);

    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}