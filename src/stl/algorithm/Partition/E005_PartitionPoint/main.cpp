/**
 * partition_point() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> vector = { 5, 1, 6, 2, 7, 3, 8, 4 };

    std::cout << "Vector: ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    auto predicate = [](int n) { return n % 2 == 1; };
    std::stable_partition(vector.begin(), vector.end(), predicate);
    auto point = std::partition_point(vector.begin(), vector.end(), predicate);

    std::cout << "Vector(after partition): ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::cout << "Until point: ";
    std::copy(vector.begin(), point, std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::cout << "After point: ";
    std::copy(point, vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
