/**
 * Reference example
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>


void incrementViaPointer(int* value)
{
    (*value)++;
}

void incrementViaReference(int& value)
{
    value++;
}

class JustClass {
private:
    std::string m_string;
public:
    explicit JustClass(std::string& string) : m_string(string) { }
    
    std::string GetString() const {
        return m_string;
    }
};

int main() {
    int var = 5;
    int* ptr = &var;
    int& ref = var;

    std::cout << "Variable: " << var << std::endl;
    std::cout << "Via pointer: " << *ptr << std::endl;
    std::cout << "Via reference: " << ref << std::endl;

    incrementViaPointer(ptr);
    std::cout << "After incrementing via pointer: " << *ptr << std::endl;

    incrementViaReference(ref);
    std::cout << "After incrementing via reference: " << ref << std::endl;

    std::string my_string = "My string in main function";
    std::cout << "Before object creation: " << my_string << std::endl;
    
    JustClass jc(my_string);
    std::cout << "After object creation: " << my_string << std::endl;
    std::cout << "Getter method call: " << jc.GetString() << std::endl;

    return 0;
}

