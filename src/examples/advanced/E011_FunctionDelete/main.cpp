/**
 * delete keyword example
 */
#include<iostream>
#include <utility>

class Person
{
private:
    int m_id;
    std::string m_name;
public:
    Person(int id, std::string name)
            :m_id(id), m_name(std::move(name))
    {
    }

    // Delete copy constructor
    Person(const Person&) = delete;

    // Prevent down casting
    Person(double, std::string) = delete;

    // Prevent invalid type conversion
    Person(char, std::string) = delete;

    // Prevent heap creation(delete new operator)
    void* operator new(size_t) = delete;
};

int main()
{
    // Valid object creation
    Person p(35, "Alice");

    // Since copy constructor is deleted, we can not use assignment
    // Person p2 = p;

    // Since this constructor is deleted, we can not use this object creation
    // Person p_double(1.1, "Alice");

    // Since this constructor is deleted, we can not use this object creation
    // Person p_char('a', "Alice");

    // Since this operator is deleted, we can not heap allocate object
    // Person* p_heap = new Person(35, "Alice");
    return 0;
}