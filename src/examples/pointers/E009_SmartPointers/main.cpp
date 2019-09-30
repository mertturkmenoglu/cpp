#include <iostream>
#include <memory>


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

// It won't leaks
std::shared_ptr<tool> createSharedTool()
{
    return std::make_shared<tool>("tool_obj");
}

// This one will leak if you don't free the memory
tool* createRawTool()
{
    return new tool("tool_obj");
}

int main()
{
    auto t = createSharedTool();
    t->printInfo();

    return 0;
}