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
    std::string mName;
    int mAge;
public:
    Person(std::string name)
        : mName(std::move(name)), mAge(-1) { }

    Person(int age)
        : mName(""), mAge(age) { }
};

void printPerson(const Person& p) {
    std::cout << "Name: " << p.mName << " Age: " << p.mAge << std::endl;
}

int main() {
    Person j("John");   // Calls first constructor
    Person e = std::string("Emily");    // Calls first constructor
    Person f = 20;  // Calls second constructor

    printPerson(j);
    printPerson(e);
    printPerson(f);

    // Compiler knows that printPerson function takes a constant Person reference
    // So it has to create a Person object from given int argument. It implicitly
    // calls the appropriate constructor to create the object
    // In second example, same. But here we have a std::string argument
    printPerson(12);
    printPerson(std::string("Raskolnikov"));

    return 0;
}
