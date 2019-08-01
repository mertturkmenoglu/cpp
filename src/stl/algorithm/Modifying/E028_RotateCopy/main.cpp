/**
 * rotate_copy() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<int> result(numbers.size());

    std::rotate_copy(numbers.begin(), numbers.begin() + 3, numbers.end(), result.begin());

    std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    std::copy(result.begin(), result.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
