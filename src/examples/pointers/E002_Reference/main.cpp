/**
 * Reference example
 */

#include <iostream>

void increment_via_pointer(int* value)
{
    (*value)++;
}

void increment_via_reference(int& value)
{
    value++;
}

class JustClass
{
private:
    std::string m_string;
public:
    explicit JustClass(std::string& string)
            :m_string(string)
    {

    }

    [[nodiscard]] std::string get_string() const
    {
        return m_string;
    }
};

int main()
{
    int var = 5;
    int* ptr = &var;
    int& ref = var;

    std::cout << "Variable: " << var << std::endl;
    std::cout << "Via pointer: " << *ptr << std::endl;
    std::cout << "Via reference: " << ref << std::endl;

    increment_via_pointer(ptr);
    std::cout << "After incrementing via pointer: " << *ptr << std::endl;

    increment_via_reference(ref);
    std::cout << "After incrementing via reference: " << ref << std::endl;

    std::string my_string = "My string in main function";
    std::cout << "Before object creation: " << my_string << std::endl;

    JustClass jc(my_string);
    std::cout << "After object creation: " << my_string << std::endl;
    std::cout << "Getter method call: " << jc.get_string() << std::endl;

    return 0;
}

