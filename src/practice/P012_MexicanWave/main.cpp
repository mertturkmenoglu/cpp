#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

std::vector<std::string> mexicanWave(const std::string& input);

int main() {
    std::string input = "emily";
    std::vector<std::string> result = mexicanWave(input);

    std::copy(result.begin(), result.end(), std::ostream_iterator<std::string>(std::cout, "\n"));

    return 0;
}

std::vector<std::string> mexicanWave(const std::string& input) {
    std::vector<std::string> v;
    std::string str = input;

    for (char & c : str) {
        c = static_cast<char>(std::tolower(c));
    }

    for (char &c : str) {
        if (c != ' ') {
            c = static_cast<char>(std::toupper(c));
            v.push_back(str);
            c = static_cast<char>(std::tolower(c));
        }
    }

    return v;
}