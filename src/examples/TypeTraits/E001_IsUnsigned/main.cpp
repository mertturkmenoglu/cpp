/**
 * Requires C++11 or higher
 */

#include <iostream>
#include <type_traits>

class Person { };

enum UnsignedEnum : unsigned { };

enum class UnsignedEnumClass : unsigned { };

int main()
{
    std::cout << std::boolalpha;
    std::cout << "IsUnsigned: " << std::endl;

    std::cout << "Person:" << std::is_unsigned<Person>::value << std::endl;
    std::cout << "float: " << std::is_unsigned<float>::value << std::endl;
    std::cout << "signed int: " << std::is_unsigned<signed int>::value << std::endl;
    std::cout << "unsigned int: " << std::is_unsigned<unsigned int>::value << std::endl;
    std::cout << "UnsignedEnum: " << std::is_unsigned<UnsignedEnum>::value << std::endl;
    std::cout << "UnsignedEnumClass: " << std::is_unsigned<UnsignedEnumClass>::value << std::endl;

    return 0;
}