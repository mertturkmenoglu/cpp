#include <iostream>

/**
 * Works on C++14 and after
 */
auto calc(int a, int b)
{
    return a + b;
}

int main()
{
    auto result = calc(3, 5);
    std::cout << result << std::endl;
    
    return 0;
}