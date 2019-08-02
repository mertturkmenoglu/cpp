/**
 * is_partitioned() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> vector = { 5, 1, 6, 2, 7, 3, 8, 4 };

    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::partition(vector.begin(), vector.end(), [](int n) { return n < 5; });

    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    bool result = std::is_partitioned(vector.begin(), vector.end(), [](int n) { return n < 5; });

    if (result) {
        std::cout << "True";
    } else {
        std::cout << "False";
    }

    return 0;
}
