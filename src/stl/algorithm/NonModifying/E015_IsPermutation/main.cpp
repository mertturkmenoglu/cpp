/**
 * is_permutation() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v_first = { 1, 2, 3, 4 };
    std::vector<int> v_second = { 2, 1, 4, 3 };

    bool result = std::is_permutation(v_first.begin(), v_first.end(), v_second.begin());
    std::cout << result << std::endl;

    return 0;
}