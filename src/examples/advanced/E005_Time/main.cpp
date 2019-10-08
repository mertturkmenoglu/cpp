/**
 * Time utils example
 */

#include <iostream>
#include <chrono>
#include <thread>

struct Timer
{
    std::chrono::time_point<std::chrono::high_resolution_clock> begin, end;
    std::chrono::duration<float> duration { };

    Timer()
    {
        begin = std::chrono::high_resolution_clock::now();
    }

    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration = end - begin;

        std::cout << "Duration: " << duration.count() << "s " << std::endl;
    }
};

void print_message(const std::string& message, int times)
{
    Timer t;

    for (int i = 0; i < times; i++)
    {
        std::cout << message << " " << i << "\n";
    }
}

int main()
{
    using namespace std::literals::chrono_literals;

    auto time_start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(1s);

    auto time_end = std::chrono::high_resolution_clock::now();
    auto dur = time_end - time_start;
    std::cout << "Slept for: " << dur.count() << std::endl;

    std::string message;
    std::cout << "Enter a message: " << std::endl;
    getline(std::cin, message);

    int times = 0;
    std::cout << "Enter repetition count: " << std::endl;
    std::cin >> times;

    print_message(message, times);

    return 0;
}

