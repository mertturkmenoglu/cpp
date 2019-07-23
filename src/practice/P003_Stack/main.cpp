/**
 * Practice 003: Stack implementation
 * "g++ main.cpp -std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <algorithm>
#include <iterator>
#include <ctime>
#include <cstdlib>
#include <iomanip>

#include <iostream>
#include <vector>


template<class T>
class Stack
{
private:
    std::vector<T> elements;
    int size;
public:
    Stack()
        : size(0) { }

    void Push(const T& element) {
        elements.push_back(element);
        size++;
    }

    T Pop() {
        if (elements.empty()) {
            throw std::exception();
        }
        
        T value = elements.back();
        elements.pop_back();
        size--;
        return value;
    }

    const T& Peek() const {
        if (elements.empty()) {
            throw std::exception();
        }

        return elements.back();
    }

    int GetCapacity() const {
        return elements.capacity();
    }

    int GetSize() const {
        return size;
    }

    const std::vector<T>& GetElements() const {
        return elements;
    }
};

int main() {
    Stack<int> s;
    
    for (int i = 0; i < 10; i++) {
        s.Push(i);
    }

    std::for_each(s.GetElements().begin(),s.GetElements().end(), [](int num){
        std::cout << num << "\t";
    });

    std::cout << std::endl;

    int popped = s.Pop();
    int size = s.GetSize();
    std::cout << "Value: " << popped << std::endl;
    std::cout << "Size: " << size << std::endl;

    std::for_each(s.GetElements().begin(),s.GetElements().end(), [](int num){
        std::cout << num << "\t";
    });

    std::cout << std::endl;

    while (s.GetSize() > 0) {
        s.Pop();
    }

    std::for_each(s.GetElements().begin(),s.GetElements().end(), [](int num){
        std::cout << num << "\t";
    });
    
    std::cout << std::endl;
    // Should throw an error
    try {
        s.Pop();
    } catch (const std::exception& e) {
        e.what();
        std::cerr << "Empty stack" << std::endl;
    }

    return 0;
}
