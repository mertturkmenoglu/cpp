/**
 * String tokenizing example
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::string line = "String contains multiple words";
    std::vector <std::string> tokens;

    std::stringstream str_stream(line);

    std::string temp;

    while(getline(str_stream, temp, ' ')) {
        tokens.push_back(temp);
    }

    for(const std::string& str : tokens) {
        std::cout << str << std::endl;
    }

    return 0;
}
