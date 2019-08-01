/**
 * swap_ranges() example
 * g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<std::string> first = { "emily", "diana", "barbara" };
    std::vector<std::string> second = { "selina", "dinah", "lois", "carol", "wanda" };

    std::copy(first.begin(), first.end(), std::ostream_iterator<std::string>(std::cout, " - "));
    std::cout << std::endl;
    std::copy(second.begin(), second.end(), std::ostream_iterator<std::string>(std::cout, " - "));
    std::cout << std::endl;

    std::swap_ranges(first.begin(), first.end(), second.begin());

    std::copy(first.begin(), first.end(), std::ostream_iterator<std::string>(std::cout, " - "));
    std::cout << std::endl;
    std::copy(second.begin(), second.end(), std::ostream_iterator<std::string>(std::cout, " - "));
    std::cout << std::endl;

    return 0;
}