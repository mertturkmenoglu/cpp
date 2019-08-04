/**
 * lower_bound() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> vector = { 5, 1, 6, 2, 7, 3, 8, 4 };
    std::sort(vector.begin(), vector.end());

    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    const int n = 4;

    auto iter = std::lower_bound(vector.begin(), vector.end(), n);

    if (*iter == n) {
        std::cout << *iter << " found at: " << iter - vector.begin() << std::endl;
    } else {
        std::cout << "Can not find" << std::endl;
    }

    return 0;
}
