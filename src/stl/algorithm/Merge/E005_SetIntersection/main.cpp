/**
 * set_intersection() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> v1 = { 1, 4, 7, 9, 22 };
    std::vector<int> v2 = { 4, 7, 8 };
    std::vector<int> result;

    std::cout << "V1: ";
    std::copy(v1.begin(), v1.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::cout << "V2: ";
    std::copy(v2.begin(), v2.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), std::inserter(result, result.begin()));

    std::cout << "Result: ";
    std::copy(result.begin(), result.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
