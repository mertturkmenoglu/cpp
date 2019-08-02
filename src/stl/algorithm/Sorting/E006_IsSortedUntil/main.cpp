/**
 * is_sorted_until() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> vector = { 5, 1, 6, 2, 7, 3, 8, 4 };

    std::cout << "Vector: ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    if (std::is_sorted_until(vector.begin(), vector.begin() + 4) == vector.begin() + 4) {
        std::cout << "Sorted" << std::endl;
    } else {
        std::cout << "Not sorted" << std::endl;
    }

    std::sort(vector.begin(), vector.end());

    std::cout << "Vector: ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    if (std::is_sorted_until(vector.begin(), vector.begin() + 4) == vector.begin() + 4) {
        std::cout << "Sorted" << std::endl;
    } else {
        std::cout << "Not sorted" << std::endl;
    }

    return 0;
}
