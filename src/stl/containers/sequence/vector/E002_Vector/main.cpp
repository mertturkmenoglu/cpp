/**
 * STL Container: Vector example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <vector>

template<typename T> std::ostream& operator<<(std::ostream& s, const std::vector<T>& v) {
    s.put('<');
    for (const auto& e : v) {
        s << " " << e;
    }
    return s << " >";
}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "bugprone-use-after-move"
int main() {
    std::vector<std::string> names1 =  { "emily", "diana", "barbara", "selina", "dinah" };
    std::vector<std::string> names2;
    std::vector<std::string> names3;

    std::cout << "n1: " << names1 << std::endl << "n2: " << names2 << std::endl << "n3: " << names3 << std::endl;
    std::cout << "----------------" << std::endl;
    names2 = names1;

    std::cout << "n1: " << names1 << std::endl << "n2: " << names2 << std::endl << "n3: " << names3 << std::endl;
    std::cout << "----------------" << std::endl;

    names3 = std::move(names1);

    std::cout << "n1: " << names1 << std::endl << "n2: " << names2 << std::endl << "n3: " << names3 << std::endl;
    std::cout << "----------------" << std::endl;

    return 0;
}
#pragma clang diagnostic pop
