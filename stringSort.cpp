/**
 * Example:
 * String read and std::sort for
 * letters in the string
 * 
 * Example Input: cba
 * Expected Output: abc
 * 
 * g++ stringSort.cpp
 */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

int main() {
    std::string str;

    // Read a string from stdin
    std::cout << "Please enter a string" << std::endl;
    std::cin >> str;

    // Sort letters of the string
    std::sort(str.begin(), str.end());

    // Print out the new string
    std::cout << str << std::endl;
    
    return 0;
}
