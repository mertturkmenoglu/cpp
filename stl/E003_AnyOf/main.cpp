/**
 * any_of() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, -1, 6, 7, 8};

    std::for_each(numbers.begin(), numbers.end(), [](int n) { std::cout << n << '\t'; });
    std::cout << std::endl;

    if (std::any_of(numbers.begin(), numbers.end(), [](int it) { return it < 0; }))
    {
        std::cout << "Vector has at least one negative element" << std::endl;
    } else {
        std::cout << "All numbers are non-negative" << std::endl;
    }

    return 0;
}
