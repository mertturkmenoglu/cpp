/**
 * copy_n() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    const int n = 4;
    std::vector<int> numbers = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<int> v_copy;
    v_copy.resize(n);

    std::copy_n(numbers.begin(), n, v_copy.begin());

    std::cout << "Numbers: " << std::endl;
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << '\t';
    });

    std::cout << std::endl;

    std::cout << "Copy: " << std::endl;
    std::for_each(v_copy.begin(), v_copy.end(), [](int n) {
        std::cout << n << '\t';
    });

    std::cout << std::endl;

    return 0;
}