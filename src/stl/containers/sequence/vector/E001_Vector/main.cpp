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

int main() {
    std::vector<std::string> names1 =  { "emily", "diana", "barbara", "selina", "dinah" };
    std::vector<std::string> names2(names1.begin(), names1.end());
    std::vector<std::string> names3(names1);
    std::vector<std::string> names4(10, "emily");

    std::cout << "names1: " << names1 << std::endl;
    std::cout << "names2: " << names2 << std::endl;
    std::cout << "names3: " << names3 << std::endl;
    std::cout << "names4: " << names4 << std::endl;

    return 0;
}
