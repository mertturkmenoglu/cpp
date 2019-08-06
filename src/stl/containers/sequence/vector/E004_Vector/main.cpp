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
    std::vector<std::string> names = {"emily", "diana", "barbara", "selina", "dinah" };
    std::cout << names << std::endl;

    std::cout << "empty(): " << std::boolalpha << names.empty() << std::endl;
    std::cout << "size():  " << names.size() << std::endl;
    std::cout << "max_size(): " << names.max_size() << std::endl;
    std::cout << "capacity(): " << names.capacity() << std::endl;

    names.reserve(10);

    std::cout << "size():  " << names.size() << std::endl;
    std::cout << "capacity(): " << names.capacity() << std::endl;

    names.clear();

    std::cout << "size():  " << names.size() << std::endl;
    std::cout << "capacity(): " << names.capacity() << std::endl;

    names.shrink_to_fit();

    std::cout << "size():  " << names.size() << std::endl;
    std::cout << "capacity(): " << names.capacity() << std::endl;

    names = {"emily", "diana", "barbara", "selina", "dinah" };
    std::cout << names << std::endl;

    std::cout << "Insert lois" << std::endl;
    names.insert(names.cbegin() + 1, "lois");
    std::cout << names << std::endl;

    std::cout << "Emplace carol" << std::endl;
    names.emplace(names.cbegin(), "carol");
    std::cout << names << std::endl;

    std::cout << "Erase 4" << std::endl;
    names.erase(names.cbegin() + 4);
    std::cout << names << std::endl;

    std::cout << "Erase range" << std::endl;
    names.erase(names.cbegin() + 3, names.cbegin() + 5);
    std::cout << names << std::endl;

    std::cout << "Emplace back cosette" << std::endl;
    names.emplace_back("cosette");
    std::cout << names << std::endl;

    std::cout << "Pop back" << std::endl;
    names.pop_back();
    std::cout << names << std::endl;

    std::cout << "Resize 3" << std::endl;
    names.resize(3);
    std::cout << names << std::endl;

    std::cout << "Push back" << std::endl;
    names.push_back("Fantine"); // NOLINT(hicpp-use-emplace,modernize-use-emplace)
    std::cout << names << std::endl;

    std::vector<std::string> numbers { "42", "7", "314" };
    std::cout << numbers << std::endl;

    names.swap(numbers);

    std::cout << "After swap: " << std::endl;
    std::cout << "Names: " << names << std::endl;
    std::cout << "Numbers: " << numbers << std::endl;

    std::cout << "Compare: " << std::boolalpha << (names == numbers) << std::endl;

    return 0;
}
