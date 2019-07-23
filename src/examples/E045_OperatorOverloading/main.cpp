/**
 * Operator Overloading example
 * g++ main.cpp std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>

template<class T>
class Array {
private:
    T* array;
    int m_Size;
public:
    explicit Array(int size) {
        m_Size = size;
        array = new T[size];
    }

    void init(T array[]) {
        for (int i = 0; i < m_Size; i++) {
            this->array[i] = array[i];
        }
    }

    ~Array() {
        delete[] array;
    }

    T& operator[](int index) {
        if(index > m_Size) {
            std::cerr << "Error: Index out of bounds" << std::endl;
            return array[0];
        }
        
        return array[index];
    }
};

int main() {
    Array<int> a(10);

    int elements[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    a.init(elements);

    std::cout << "A[2]: " << a[2] << std::endl;
    std::cout << "A[7]: " << a[5] << std::endl;
    std::cout << "A[20]: " << a[12] << std::endl;

    return 0;
}
