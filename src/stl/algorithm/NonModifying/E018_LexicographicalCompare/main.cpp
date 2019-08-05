/**
 * lexicographical_compare() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

int main() {
    std::vector<char> v1 { 'a', 'b', 'c', 'd' };
    std::vector<char> v2 { 'a', 'b', 'c', 'd' };

    std::mt19937 g { std::random_device{ }() };

    while (!std::lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end())) {
        std::copy(v1.begin(), v1.end(), std::ostream_iterator<char>(std::cout, " "));
        std::cout << ">= ";
        std::copy(v2.begin(), v2.end(), std::ostream_iterator<char>(std::cout, " "));
        std::cout << std::endl;

        std::shuffle(v1.begin(), v1.end(), g);
        std::shuffle(v2.begin(), v2.end(), g);
    }

    std::copy(v1.begin(), v1.end(), std::ostream_iterator<char>(std::cout, " "));
    std::cout << "< ";
    std::copy(v2.begin(), v2.end(), std::ostream_iterator<char>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}