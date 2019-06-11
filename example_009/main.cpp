/**
 * File I/O operations example
 * Write example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */
#include <iostream>
#include <fstream>

int main() {
    std::ofstream fileStream("output.txt");

    if(fileStream.is_open()) {
        fileStream << "Test line\n";
        fileStream << "Second and the last line";
        std::cout << "File output completed" << std::endl;
        fileStream.close();
    } else {
        std::cout << "File could not opened";
    }

    return 0;
}