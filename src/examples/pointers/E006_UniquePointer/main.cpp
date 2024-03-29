#include <utility>

/**
 * Unique pointer example
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <memory>

class Person {
private:
 std::string name;
public:
    explicit Person(std::string  name) : name(std::move(name)) {
      std::cout << "Person created" << std::endl;
    }

    ~Person() { std::cout << "Person deleted" << std::endl; }

    inline const std::string& GetName() const { return name; }
    inline void set_name(const std::string& _name) { this->name = _name; }
};

int main() {
    std::unique_ptr<int> p_int = std::make_unique<int>();

    // This line creates compile time error
    //std::unique_ptr<int> p_sec = p_int;
    
    *p_int = 5;
    std::cout << *p_int << std::endl;
    *p_int = 7;
    std::cout << *p_int << std::endl;

    std::cout << "Before block" << std::endl;
    {
        std::unique_ptr<Person> p_person = std::make_unique<Person>("Emily");
        std::cout << p_person->GetName() << std::endl;
        p_person->set_name(std::string("Cemre"));
        std::cout << p_person->GetName() << std::endl;
    }
    std::cout << "After block" << std::endl;

    return 0;
}

