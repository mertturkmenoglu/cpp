/**
 * partition_copy() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> vector = { 5, 1, 6, 2, 7, 3, 8, 4 };
    std::vector<int> lessThan(std::count_if(vector.begin(), vector.end(), [](int n) { return n < 5; }));
    std::vector<int> greaterThan(vector.size() - lessThan.size());

    std::cout << "Vector: ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::partition_copy(vector.begin(), vector.end(), greaterThan.begin(), lessThan.begin(), [](int n) { return n > 5; });

    std::cout << "Less: ";
    std::copy(lessThan.begin(), lessThan.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::cout << "Greater: ";
    std::copy(greaterThan.begin(), greaterThan.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
