#include <algorithm>
#include <forward_list>
#include <iostream>
#include <iterator>

int main() {
    std::forward_list<int> fl1 = { 7, 3, 1, 9, 10, 20, 42, 42 };
    std::forward_list<int> fl2 = { 0, 2, 4, 5, 10, 42, 29, 88 };

    fl1.push_front(-5);

    std::copy(fl1.begin(), fl1.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::copy(fl2.begin(), fl2.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    fl1.sort();
    fl2.sort();

    fl1.merge(fl2);
    std::cout << "------------" << std::endl;

    std::copy(fl1.begin(), fl1.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::copy(fl2.begin(), fl2.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}