/**
 * reverse_copy() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4 };
    std::vector<int> reverse(numbers.size());

    std::reverse_copy(numbers.begin(), numbers.end(), reverse.begin());

    std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    std::copy(reverse.begin(), reverse.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
