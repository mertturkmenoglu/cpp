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

    std::cout << "Front: " << deq.front() << std::endl;
    std::cout << "*deq.begin(): " << *deq.begin() << std::endl;

    std::cout << "Back: " << deq.back() << std::endl;
    std::cout << "*(--deq.end()): " << *(--deq.end()) << std::endl;

    std::cout << "Empty: " << std::boolalpha << deq.empty() << std::endl;
    std::cout << "Size: " << deq.size() << std::endl;
    std::cout << "Max_size: " << deq.max_size() << std::endl;
    deq.clear();


    return 0;
}
