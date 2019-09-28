#include <algorithm>
#include <forward_list>
#include <iostream>
#include <iterator>

int main() {
    std::forward_list<std::string> names;

    names.assign(5, "emily");
    std::copy(names.begin(), names.end(), std::ostream_iterator<std::string>(std::cout, " "));
    std::cout << std::endl;

    names.insert_after(names.before_begin(), "Diana");
    std::copy(names.begin(), names.end(), std::ostream_iterator<std::string>(std::cout, " "));
    std::cout << std::endl;

    names.clear();

    return 0;
}