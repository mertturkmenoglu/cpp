/**
 * minmax() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>

int main() {
    std::pair<int, int> p = std::minmax( { 1, 4, 2, 9, 2, 0, 3, 7, 5, 3, 5 } );

    std::cout << "Min: " << p.first << '\t' << "Max: " << p.second << std::endl;

    return 0;
}
