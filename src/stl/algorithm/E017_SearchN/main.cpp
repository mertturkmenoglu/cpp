/**
 * search_n() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = { 2, 1, 1, 2, 1, 4, 1, 1, 1, 1, 3, 2, 2, 9 , 1, 4 };
    auto iter = std::search_n(numbers.begin(), numbers.end(), 4, 1);

    if (iter != numbers.end())
        std::cout << "Position: " << iter - numbers.begin() << std::endl;
    else
        std::cout << "No match" << std::endl;

    return 0;
}