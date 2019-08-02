/**
 * Dynamic cast example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <memory>
#include <utility>

class Animal
{
public:
    virtual void print_type() = 0;
};

class Squirrel : public Animal
{
public:
    std::string m_name;
public:
    explicit Squirrel(std::string name) : m_name(std::move(name)) { }
    void print_type() override {
        std::cout << "Squirrel: " << m_name << std::endl;
    }
};

class Cat : public Animal {
public:
    std::string m_color;
public:
    explicit Cat(std::string color) : m_color(std::move(color)) { }
    void print_type() override {
        std::cout << "Cat: " << m_color << std::endl;
    }
};


void try_new_cat(Animal* a) {
    auto new_cat = dynamic_cast<Cat*>(a);

    if (new_cat == nullptr) {
        std::cout << "Wrong casting" << std::endl;
    } else {
        new_cat->print_type();
    }
}

void try_new_squirrel(Animal* a) {
    auto new_squirrel = dynamic_cast<Squirrel*>(a);

    if (new_squirrel == nullptr) {
        std::cout << "Wrong casting" << std::endl;
    } else {
        new_squirrel->print_type();
    }
}

int main() {
    auto* squirrel = new Squirrel("alf");
    auto* cat = new Cat("white");

    squirrel->print_type();
    cat->print_type();
    Animal* a = squirrel; // implicit cast because of inheritance



    // Won't work because you can not cast base class to derived class implicitly.
    // You have to cast explicitly(And it will break the program)

    // Cat* new_cat = a;

    // Try to cast explicitly
    // It will produce error

    // Cat* new_cat = (Cat*)a;
    // std::cout << new_cat->m_color << std::endl;

    // Dynamic cast
    try_new_cat(a);
    try_new_squirrel(a);

    delete squirrel;
    delete cat;

    return 0;
}
