#include <iostream>

// time command can be used to measure running time
// Ex: time ./program.out
// Example time for const expr: 0,001
// Example time for normal eval: 0,017

/**
 * Compiler will try to evaluate constant expressions
 * at compile time so they will not be calculated at
 * runtime
 *
 * Function calculates n-th fibonacci number
 * @param n n-th number
 * @return  fibonacci number
 */
constexpr long int fib(int n)
{
    return (n <= 1) ? n : fib(n - 1) + fib(n - 2);
}

/*
 * Uncomment this to test
 * long int fib(int n) {
 *    return (n <= 1) ? n : fib(n-1) + fib(n-2);
 * }
 */
int main()
{
    const long f = fib(30);
    std::cout << f << std::endl;
    return 0;
}