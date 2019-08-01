/**
 * fill() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<std::string> numbers(10);
    std::fill(numbers.begin(), numbers.end(), "emily");

    std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<std::string>(std::cout, " "));

    return 0;
}