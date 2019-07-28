/**
 * File I/O operations example
 * Read example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */
#include <iostream>
#include <fstream>

int main() {
    std::string line;
    std::ifstream inputStream("input.txt");

    if (inputStream.is_open()) {
        while (getline(inputStream, line)) {
            std::cout << line << std::endl;
        }
        
        std::cout << "Reading completed" << std::endl;
        inputStream.close();
    } else {
        std::cout << "File could not opened";
    }

    return 0;
}