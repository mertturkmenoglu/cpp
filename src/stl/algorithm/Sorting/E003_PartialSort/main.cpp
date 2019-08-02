/**
 * partial_sort() example
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

    std::partial_sort(vector.begin(), vector.begin() + 3, vector.end());

    std::cout << "Vector(after sort): ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;


    return 0;
}
