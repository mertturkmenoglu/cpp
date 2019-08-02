/**
 * partial_sort_copy() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> vector = { 5, 1, 6, 2, 7, 3, 8, 4 };
    std::vector<int> v_copy(vector.size());

    std::cout << "Vector: ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::cout << "Copy vector: ";
    std::copy(v_copy.begin(), v_copy.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::partial_sort_copy(vector.begin(), vector.begin() + 4, v_copy.begin(), v_copy.begin() + 4);

    std::cout << "Vector(after sort): ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::cout << "Copy vector(after sort): ";
    std::copy(v_copy.begin(), v_copy.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
