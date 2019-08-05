/**
 * minmax_element() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> v = { 1, 4, 2, 9, 2, 0, 3, 7, 5, 3, 5 };

    std::cout << "Vector: ";
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::pair<std::vector<int>::iterator, std::vector<int>::iterator> p;
    p = std::minmax_element(v.begin(), v.end());

    std::cout << "Min element: " << *p.first << " Position: " << std::distance(v.begin(), p.first) << std::endl;
    std::cout << "Max element: " << *p.second << " Position: " << std::distance(v.begin(), p.second) << std::endl;

    return 0;
}
