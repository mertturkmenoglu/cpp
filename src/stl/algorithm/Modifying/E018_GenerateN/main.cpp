/**
 * generate_n() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> vector(10);

    int i = 0;
    std::generate_n(vector.begin(), 5, [&i]() {
        return i++;
    });

    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}