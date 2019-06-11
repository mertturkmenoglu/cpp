/**
 * Example:
 * C++ style strings and
 * + operator overloading for
 * string concatenation.
 * 
 * g++ stringConcat.cpp
 */

#include <iostream>
#include <string>

int main() {
    std::string str1 = "This is the first sentence. ";
    std::string str2 = "And this is the second.";
    std::cout << str1 + str2 << std::endl;
    return 0;
}
