/**
 * find_first_of() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main () {
    std::string quote = "To be or not to be.";
    std::string charSet = { 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U' };

    auto iter = std::find_first_of(quote.begin(), quote.end(), charSet.begin(), charSet.end());
    std::cout << "First vowel index: " << (iter-quote.begin()) << std::endl;

    return 0;
}