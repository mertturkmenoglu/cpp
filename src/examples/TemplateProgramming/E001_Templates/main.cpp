#include <iostream>

template <typename T>
void println(T value)
{
    std::cout << value << std::endl;
}

void println()
{
    std::cout << std::endl;
}

int main()
{
    println("Hi");
    println(3);
    println();

    return 0;
}