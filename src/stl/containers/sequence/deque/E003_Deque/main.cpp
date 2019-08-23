/**
 * STL Container: Deque example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <deque>
#include <iostream>
#include <iterator>

int main() {
    std::deque<int> deq = { 1, 2, 3 };
    std::copy(deq.begin(), deq.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    deq.push_back(4);
    std::copy(deq.begin(), deq.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    deq.pop_back();
    std::copy(deq.begin(), deq.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
