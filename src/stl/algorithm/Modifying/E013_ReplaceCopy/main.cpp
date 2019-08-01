/**
 * replace_copy() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> numbers = { 1, 1, 2, 3, 5, 8, 13, 21 };
    std::vector<int> v_copy(numbers.size());

    std::replace_copy(numbers.begin(), numbers.end(), v_copy.begin(), 1, 0);

    std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::copy(v_copy.begin(), v_copy.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}