#include <utility>

/**
 * Smart Pointer implementation
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

template <class T>
class SpecialPointer {
private:
    T* ptr;
public:
    explicit SpecialPointer(T* p = nullptr) : ptr(p) {
        std::cout << "Construct" << std::endl;
    }

    ~SpecialPointer() {
        std::cout << "Delete" << std::endl;
        delete ptr;
    }

    inline T& operator*() { return *ptr; }

    inline T* operator->() { return ptr; }
};

class Person {
private:
    std::string name;
public:

    explicit Person(std::string  name) : name(std::move(name)) { }

    inline const std::string& GetName() const { return name; }
    inline void SetName(const std::string& _name) { this->name = _name; }
};

int main() {
    // Block
    {
        SpecialPointer<Person> p(new Person(std::string("Ali")));
        std::cout << p->GetName() << std::endl;
    }
    // Destructor should be called
    
    return 0;
}

