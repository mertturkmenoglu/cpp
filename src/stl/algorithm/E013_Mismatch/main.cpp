/**
 * mismatch() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <vector>

bool equalsPredicate(int first, int second) { return first == second; }

int main() {
    std::vector<int> v_first = { 10, 20, 30, 40, 50, 60 };
    std::vector<int> v_second = { 10, 20, 30, 40, 70, 50 };
    std::vector<int> v_third = { 10, 20, 30, 40, 50, 60 };

    auto pair = std::mismatch(v_first.begin(), v_first.end(), v_second.begin(), equalsPredicate);
    std::cout << "First mismatch: " << *pair.first << " - " << *pair.second << std::endl;

    auto pair2 = std::mismatch(v_first.begin(), v_first.end(), v_third.begin());
    if (pair.first > v_first.end())
        std::cout << "First mismatch: " << *pair2.first << " - " << *pair2.second << std::endl;
    else
        std::cout << "No mismatch" << std::endl;


    return 0;
}