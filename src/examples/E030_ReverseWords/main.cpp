/**
 * Reverse each word of a sentence
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>         // For cout and cin
#include <vector>           // For vector<T>
#include <sstream>          // For stringstream
#include <algorithm>        // For reverse

void printWords(std::vector<std::string>& words) {
    for (std::string str : words) {
        std::cout << str << "\t";
    }
    std::cout << std::endl;
}


int main() {
    std::string str;
    std::cout << "Please enter your sentence: " << std::endl;
    getline(std::cin, str);
    std::vector <std::string> tokens;
    std::vector <std::string> reverse;
    std::stringstream str_stream(str);
    std::string temp;

    // Get tokens
    while(getline(str_stream, temp, ' ')) {
        tokens.push_back(temp);
    }

    std::cout << "Original: " << std::endl;
    printWords(tokens);

    // Reverse the string
    for (std::string str : tokens) {
        std::reverse(str.begin(), str.end());
        reverse.push_back(str);
    }

    std::cout << "Reverse: " << std::endl;
    printWords(reverse);

    return 0;
}

