/**
 * Class template example
 * 
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <string>
#include <utility>

template <class K, class V>
class Storage {
private:
    K key;
    V value;
public:
    Storage(K key, V value) : key(key), value(value) { }

    void displayStorage() {
        std::cout << "Key: " << this->key << "    Value: " << this->value << std::endl;
    }

    K getKey() {
        return key;
    }

    V getValue() {
        return value;
    }

    std::pair<K, V> getPair() {
        return std::pair<K, V>(key, value);
    }
};

int main() {
    Storage<std::string, int> storeInt(std::string("age"), 42);
    storeInt.displayStorage();
    std::cout << storeInt.getKey() << std::endl;
    std::cout << storeInt.getValue() << std::endl;
    std::cout << storeInt.getPair().first << std::endl;
    std::cout << storeInt.getPair().second << std::endl;

    Storage<int, int> twoInt(0, 42);
    twoInt.displayStorage();
    std::cout << twoInt.getKey() << std::endl;
    std::cout << twoInt.getValue() << std::endl;
    std::cout << twoInt.getPair().first << std::endl;
    std::cout << twoInt.getPair().second << std::endl;
    
    return 0;
}