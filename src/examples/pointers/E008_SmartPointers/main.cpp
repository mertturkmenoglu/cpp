#include <iostream>
#include <memory>
#include <utility>

class tool
{
private:
    std::string mName;
public:
    explicit tool(std::string name) : mName(std::move(name))
    {
        std::cout << "Tool created: " << mName << std::endl;
    }

    void printInfo()
    {
        std::cout << "Inside tool::printInfo: " << mName << std::endl;
    }

    ~tool()
    {
        std::cout << "Tool destroyed: " << mName << std::endl;
    }
};

int main()
{
    std::unique_ptr<tool> t;

    std::cout << "main function started" << std::endl;
    std::cout << "Before scope" << std::endl;


    {
        std::cout << "Scope started" << std::endl;

        t = std::make_unique<tool>("Scope tool");

        std::cout << "Scope ended" << std::endl;
    }

    std::cout << "After scope" << std::endl;

    t->printInfo();

    std::cout << "main function ended" << std::endl;

    return 0;
}