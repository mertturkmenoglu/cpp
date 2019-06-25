/**
 * Thread example
 * g++ main.cpp std=c++17 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -pthread -o main
 * valgrind --leak-check=yes -v ./main
 */

#include <iostream>
#include <thread>
#include <chrono>

static bool finished = false;

void PrintMessage(const char* message) {
    std::cout << "Thread started. Thread ID: " << std::this_thread::get_id() << std::endl;

    while (!finished) {
        std::cout << message << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

}

int main() {
    std::cout << "Thread started. Thread ID: " << std::this_thread::get_id() << std::endl;
    std::thread print_thread(PrintMessage, "Press Enter To Continue");

    std::cin.get();
    finished = true;

    print_thread.join();
    std::cout << "Game continues" << std::endl;

    std::cin.get();

    return 0;
}

