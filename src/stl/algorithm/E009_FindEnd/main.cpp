/**
 * find_end() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>

bool compFunc (char first, char second) { return first == second; }

int main () {
    std::vector<char> charSet = { 'a', 'b', 'c', 'd', 'e', 'a', 'b', 'c', 'd', 'e' };
    std::vector<char> pattern1 = { 'a', 'b', 'c' };

    auto iter = std::find_end (charSet.begin(), charSet.end(), pattern1.begin(), pattern1.end());

    if (iter != charSet.end()) {
        std::cout << "Pattern1 last found: " << iter - charSet.begin() << std::endl;
    } else {
        std::cout << "Pattern1 could not be found" << std::endl;
    }

    std::vector<char> pattern2 = { 'd', 'e', 'a' };
    auto iter2 = std::find_end(charSet.begin(), charSet.end(), pattern2.begin(), pattern2.end(), compFunc);

    if (iter != charSet.end()) {
        std::cout << "Pattern2 last found: " << iter2 - charSet.begin() << std::endl;
    } else {
        std::cout << "Pattern2 could not be found" << std::endl;
    }

    return 0;
}  