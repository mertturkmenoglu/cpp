/**
 * none_of() example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<std::string> names = { std::string("Emily"), std::string("Barbara"), std::string("Diana") };

    std::for_each(names.begin(), names.end(), [](const std::string& name) {
        std::cout << name << std::endl;
    });

    if ( std::none_of(names.begin(), names.end(), [](const std::string& name) { return name[0] == 'S'; })) {
        std::cout << "None of the names starts with character S" << std::endl;
    } else {
        std::cout << "At least one name starts with S" << std::endl;
    }

    return 0;
}
