/**
 * PascalCase, snake_case, camelCase
 */
#include <algorithm>
#include <iostream>

std::string case_detection(const std::string& str);

int main()
{
    std::cout << case_detection("PersonName") << std::endl;
    std::cout << case_detection("person_name") << std::endl;
    std::cout << case_detection("personName") << std::endl;


    return 0;
}

// Assume every string can be categorized
std::string case_detection(const std::string& str)
{
    if (str[0] == std::toupper(str[0]))
    {
        return "PascalCase";
    }
    else if (std::find(str.begin(), str.end(), '_') != str.end())
    {
        return "snake_case";
    }
    else
    {
        return "camelCase";
    }
}