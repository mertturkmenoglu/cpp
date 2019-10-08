/**
 * Smart Pointer implementation
 */

#include <iostream>
#include <utility>

template <class T>
class SpecialPointer
{
private:
    T* ptr;
public:
    explicit SpecialPointer(T* p = nullptr)
            :ptr(p)
    {
        std::cout << "Construct" << std::endl;
    }

    ~SpecialPointer()
    {
        std::cout << "Delete" << std::endl;
        delete ptr;
    }

    inline T& operator*()
    {
        return *ptr;
    }

    inline T* operator->()
    {
        return ptr;
    }
};

class Person
{
private:
    std::string m_name;
public:

    explicit Person(std::string name)
            :m_name(std::move(name))
    {

    }

    [[nodiscard]] inline const std::string& get_name() const
    {
        return m_name;
    }

    inline void set_name(const std::string& name)
    {
        this->m_name = name;
    }
};

int main()
{
    // Block
    {
        SpecialPointer<Person> p(new Person(std::string("Ali")));
        std::cout << p->get_name() << std::endl;
    }
    // Destructor should be called

    return 0;
}

