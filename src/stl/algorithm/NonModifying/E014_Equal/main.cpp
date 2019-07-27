/**
 * equal() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v_first = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<int> v_second = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::vector<int> v_third = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    if(std::equal(v_first.begin(), v_first.end(), v_second.begin(), v_second.end()))
        std::cout << "Match" << std::endl;
    else
        std::cout << "Difference" << std::endl;

    if(std::equal(v_first.begin(), v_first.end(), v_third.begin(), v_third.end()))
        std::cout << "Match" << std::endl;
    else
        std::cout << "Difference" << std::endl;

    return 0;
}