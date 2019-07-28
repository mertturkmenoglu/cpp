/**
 * Smart pointer example
 * g++ main.cpp -std=c++14 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <memory>

class Person {
public:
    Person() {
        std::cout << "A person object created" << std::endl;
    }

    ~Person() {
        std::cout << "A person object deleted" << std::endl;
    }

    static void print() {
        std::cout << "I am at Person.print() method" << std::endl;
    }
};



int main() {
    std::cout << __LINE__ << std::endl;
    // Scope starts
    {
        auto* person = new Person();
        Person::print();

        delete person;
    }
    // Scope ends
    std::cout << __LINE__ << std::endl;


    std::cout << __LINE__ << std::endl;
    // Scope starts
    {
        // Or: std::unique_ptr<Person> u_ptr(new Person())
        std::unique_ptr<Person> u_ptr = std::make_unique<Person>();
        
        // You can not assign it to another pointer
        // !!! std::unique_ptr<Person> s_ptr = u_ptr;
        // This won't work
        u_ptr->print();
    }
    // Scope ends
    std::cout << __LINE__ << std::endl;


    std::cout << __LINE__ << std::endl;
    // Scope starts
    {
        std::shared_ptr<Person> shrd_ptr;
        std::cout << __LINE__ << std::endl;
        // Scope starts
        {
            shrd_ptr = std::make_shared<Person>();
            std::shared_ptr<Person> other_shrd_ptr = shrd_ptr;

            shrd_ptr->print();
            other_shrd_ptr->print();
        }
        // Scope ends
        // other_shrd_ptr dies
        // shrd_ptr lives
        std::cout << __LINE__ << std::endl;
    }
    // Scope ends
    // all references to object dies, object dies
    std::cout << __LINE__ << std::endl;


    std::cout << __LINE__ << std::endl;
    // Scope starts
    {
        std::cout << __LINE__ << std::endl;
        std::weak_ptr<Person> weak_ptr;
        // Scope starts
        {
            std::shared_ptr<Person> a_ptr = std::make_shared<Person>();
            weak_ptr = a_ptr;
            a_ptr->print();
        }
        // Scope ends
        std::cout << __LINE__ << std::endl;
    }
    // Scope ends
    std::cout << __LINE__ << std::endl;

    return 0;
}

