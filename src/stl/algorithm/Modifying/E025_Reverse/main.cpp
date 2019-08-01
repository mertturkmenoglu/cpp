/**
 * reverse() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>

int main() {
    std::string name = "emily";

    std::cout << name << std::endl;

    std::reverse(name.begin(), name.end());

    std::cout << name << std::endl;

    return 0;
}