/**
 * transform() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> even_numbers = { 0, 2, 4, 6, 8 };
    std::vector<int> odd_numbers = { 1, 3, 5, 7, 9 };
    std::vector<int> result(5);

    std::transform(even_numbers.begin(), even_numbers.end(), even_numbers.begin(), [](int n) {
        return n * 2;
    });

    std::copy(even_numbers.begin(), even_numbers.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::transform(even_numbers.begin(), even_numbers.end(), odd_numbers.begin(), result.begin(), [](int a, int b) {
        return a + b;
    });

    std::copy(even_numbers.begin(), even_numbers.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::copy(odd_numbers.begin(), odd_numbers.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::copy(result.begin(), result.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}