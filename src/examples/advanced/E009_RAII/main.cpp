/**
 * RAII: Resource Acquisition Is Initialization
 * The resource is automatically freed when the object gets out of scope.
 * You encapsulate a resource with a class and when the encapsulation unit goes out of scope, it frees the resource.
 * It is an important concept for memory management because C++ guarantees that the destructor of objects on the stack
 * will be called, even if an exception is thrown.
 * It is an C++ programming technique which binds the life cycle of a resource (allocated heap memory, thread execution,
 * open socket, file, mutex, DB connection ...) to the lifetime of an object.
 * It guarantees that all resources are released when the lifetime of their controlling object ends.
 * It also called as "Scope-Bound Resource Management"
 */

#include <mutex>

std::mutex m;

bool everything_ok()
{
    return false;
}

void calculate()
{
    throw std::exception();
}

void bad_example()
{
    m.lock();
    calculate();                 // If calculate() throws an exception, the mutex is never released

    if(!everything_ok())
        return;                  // Early return, the mutex is never released

    m.unlock();                  // The mutex is released
}

void good_example()
{
    std::lock_guard<std::mutex> guard(m);   // Mutex acquisition is initialization
    calculate();                               // If calculate() throws an exception, the mutex is released

    if(!everything_ok())
        return;                                // Early return, the mutex is released

    // If code flow hits this point, guard object will go out of scope, so it's deconstructor will be called and it
    // will free the wrapped resource.

    // If code flow doesn't hit this point and it is diverted because of an exception or an early return,
    // stack allocated objects are automatically freed. So guard's deconstructor will be called and it will free the
    // wrapped resource.
}

int main() {
    bad_example();
    good_example();

    return 0;
}
