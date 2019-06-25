/**
 * String example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

void printCString(const char *str);

int main( ) {  
    std::string message = "python";
    char cStyle[10];
    
    std::cout << "Enter your string: " << std::endl;
    std::cin >> cStyle;

    std::string userMessage = std::string(cStyle);
    
    std::cout << message << std::endl << userMessage << std::endl;

    if (userMessage.compare(message) == 0) {
        std::cout << "Messages are same" << std::endl;
    } else {
        std::cout << "Messages are different" << std::endl;
    }

    std::cout << "----------" << std::endl;

    std::string base;
    std::string extra;

    std::cout << "Enter the base string: " << std::endl;
    std::cin >> base;

    std::cout << "Enter the extra string: " << std::endl;
    std::cin >> extra;
    
    base.append(extra);
    std::cout << "New string: " << base << std::endl;
    std::cout << "Length: " << base.length() << std::endl;

    std::cout << "----------" << std::endl;

    std::string first = "First";
    std::string second = "Second";

    std::cout << first << std::endl << second << std::endl;
    first = std::move(second);
    std::cout << first << std::endl << second << std::endl;

    std::cout << "----------" << std::endl;

    first = "First";
    second = "Second";
    std::cout << first << std::endl << second << std::endl;
    first.swap(second);
    std::cout << first << std::endl << second << std::endl;
    std::cout << "----------" << std::endl;

    std::cout << "Enter a word: " << std::endl;
    std::cin >> message;

    printCString(message.c_str());

    std::cout << "First character: " << message.at(0) << std::endl;
    return 0;
}

void printCString(const char *str) {
    std::cout << str << std::endl;
}