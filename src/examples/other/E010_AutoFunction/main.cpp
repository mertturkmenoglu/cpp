/**
 * Requires C++14 or higher
 */
#include <iostream>

auto fst(int n) -> int
{
    return n * n;
}

auto snd(int n)
{
    return n * n;
}

auto main() -> int
{
    std::cout << fst(5) << std::endl;
    std::cout << snd(5) << std::endl;

    return 0;
}