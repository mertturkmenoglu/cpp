#include <iostream>
#include <memory>

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
        std::cout << "Inside Tool::printInfo: " << m_name << std::endl;
    }

    ~Tool()
    {
        std::cout << "Tool destroyed: " << m_name << std::endl;
    }
};

// It won't leak
std::shared_ptr<Tool> create_shared_tool()
{
    return std::make_shared<Tool>("tool_obj_shared");
}

// This one will leak if you don't free the memory
Tool* create_raw_tool()
{
    return new Tool("tool_obj_raw");
}

int main()
{
    auto t = create_shared_tool();
    t->print_info();

    auto raw_tool = create_raw_tool();
    raw_tool->print_info();
    delete raw_tool;

    return 0;
}