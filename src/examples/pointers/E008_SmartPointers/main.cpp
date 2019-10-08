#include <iostream>
#include <memory>
#include <utility>

class Tool
{
private:
    std::string m_name;
public:
    explicit Tool(std::string name)
            :m_name(std::move(name))
    {
        std::cout << "Tool created: " << m_name << std::endl;
    }

    void print_info()
    {
        std::cout << "Inside tool::printInfo: " << m_name << std::endl;
    }

    ~Tool()
    {
        std::cout << "Tool destroyed: " << m_name << std::endl;
    }
};

int main()
{
    std::unique_ptr<Tool> t;

    std::cout << "main function started" << std::endl;
    std::cout << "Before scope" << std::endl;

    {
        std::cout << "Scope started" << std::endl;

        t = std::make_unique<Tool>("Scope tool");

        std::cout << "Scope ended" << std::endl;
    }

    std::cout << "After scope" << std::endl;

    t->print_info();

    std::cout << "main function ended" << std::endl;

    return 0;
}