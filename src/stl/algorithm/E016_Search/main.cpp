/**
 * search() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v_first = { 1, 2, 3, 4 };
    std::vector<int> v_second = { 2, 3 };

    auto iter = std::search(v_first.begin(), v_first.end(), v_second.begin(), v_second.end());

    if (iter != v_first.end()) {
        std::cout << "Index: " << iter - v_first.begin() << std::endl;
    } else {
        std::cout << "No match" << std::endl;
    }

    return 0;
}