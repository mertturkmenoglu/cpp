/**
 * max() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>

int main() {
    int max = std::max(5, 4);
    std::cout << max << std::endl;

    max = std::max({ 5, 1, 6, 2, 7, 3, 8, 4 });
    std::cout << max << std::endl;

    return 0;
}
