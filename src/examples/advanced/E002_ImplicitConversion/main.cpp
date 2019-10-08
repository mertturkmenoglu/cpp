/**
 * Implicit type conversion example
 *
 * When we create objects of a class, sometimes we want to create them in a more conscious way.
 * In this example, we have a Person class and a Person has a name and a age.
 * Sometimes we want to create a Person object but we do not want to give all information.
 * Just name or just age.
 * Here we have two constructors, they initialize the object with appropriate values but we give only
 * one information. An int value or an std::string value. Compiler will analyze the context and try to find
 * a constructor which is not marked as explicit. Then it will implicitly converse the type to Person.
 */

#include <iostream>

class Person
{
public:
    std::string m_name;
    int m_age;
public:
    Person(std::string name)
            :m_name(std::move(name)), m_age(-1)
    {
    }

    Person(int age)
            :m_name(""), m_age(age)
    {
    }
};

void print_person(const Person& p)
{
    std::cout << "Name: " << p.m_name << " Age: " << p.m_age << std::endl;
}

int main()
{
    Person j("John");   // Calls first constructor
    Person e = std::string("Emily");    // Calls first constructor
    Person f = 20;  // Calls second constructor

    print_person(j);
    print_person(e);
    print_person(f);

    // Compiler knows that printPerson function takes a constant Person reference
    // So it has to create a Person object from given int argument. It implicitly
    // calls the appropriate constructor to create the object
    // In second example, same. But here we have a std::string argument
    print_person(12);
    print_person(std::string("Raskolnikov"));

    return 0;
}
