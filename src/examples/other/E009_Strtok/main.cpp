#include <cstring>
#include <iostream>
#include <vector>

int main() {
    std::string str = "---Example: This is an example string, no worry. Ok";
    std::cout << "String: " << str << std::endl;
    std::string delimiters = " -:,.";
    std::vector<std::string> tokens;

    char* parts = strtok(const_cast<char *>(str.c_str()), const_cast<char *>(delimiters.c_str()));

    while (parts != nullptr) {
        tokens.emplace_back(parts);
        parts = strtok(nullptr, const_cast<char *>(delimiters.c_str()));
    }

    for (std::string& s : tokens) {
        std::cout << s << std::endl;
    }

    return 0;
}