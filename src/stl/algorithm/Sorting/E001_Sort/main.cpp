/**
 * sort() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> vector = { 5, 1, 6, 2, 7, 3, 8, 4 };

    std::cout << "Vector: ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::sort(vector.begin(), vector.end());

    std::cout << "Vector(after sort): ";
    std::copy(vector.begin(), vector.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::string name = "Emily";
    std::cout << "Name: " << name << std::endl;
    std::sort(name.begin(), name.end());
    std::cout << "After: " << name << std::endl;

    std::vector<std::string> names = { "emily", "diana", "barbara", "selina", "dinah", "lois", "carol" };
    std::copy(names.begin(), names.end(), std::ostream_iterator<std::string>(std::cout, " "));
    std::cout << std::endl;

    auto pred = [](const std::string& first, const std::string& second) { return first.length() < second.length(); };

    std::sort(names.begin(), names.end(), pred);

    std::copy(names.begin(), names.end(), std::ostream_iterator<std::string>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
