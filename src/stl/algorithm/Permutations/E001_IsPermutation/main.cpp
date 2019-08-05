/**
 * is_permutation() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

int main() {
    std::vector<int> v1 = {5, 1, 6, 2, 7, 3, 8, 4 };
    std::vector<int> v2(v1.size());
    std::copy(v1.begin(), v1.end(), v2.begin());

    std::mt19937 mt { std::random_device { }() };
    std::shuffle(v2.begin(), v2.end(), mt);

    std::cout << "v1: ";
    std::copy(v1.begin(), v1.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::cout << "v2: ";
    std::copy(v2.begin(), v2.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    bool result = std::is_permutation(v1.begin(), v1.end(), v2.begin());

    std::cout << std::boolalpha << result << std::endl;

    return 0;
}
