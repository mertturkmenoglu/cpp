/**
 * Please check out TheChernoProject on Youtube and
 * https://www.youtube.com/watch?v=YG4jexlSAjc
 */

#include <array>
#include <chrono>
#include <iostream>
#include <memory>

class Benchmark
{
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> m_start_time_point;
public:
    Benchmark()
    {
        m_start_time_point = std::chrono::high_resolution_clock::now();
    }

    ~Benchmark()
    {
        stop();
    }

    void stop()
    {
        std::chrono::time_point<std::chrono::high_resolution_clock> end_time_point = std::chrono::high_resolution_clock::now();
        auto begin = std::chrono::time_point_cast<std::chrono::microseconds>(m_start_time_point).time_since_epoch()
                .count();
        auto end = std::chrono::time_point_cast<std::chrono::microseconds>(end_time_point).time_since_epoch().count();
        std::cout << "Duration: " << end - begin << std::endl;
    }

};

class Person
{

};

int main()
{
    {
        Benchmark b;
        long value = 0;

        for (int i = 0; i < 1000000; i++)
        {
            if (i % 2 == 0)
            {
                value += i;
            }
        }
    }

    {
        std::array<std::shared_ptr<Person>, 2000> pointers;
        Benchmark b;

        for (int i = 0; i < 2000; i++)
        {
            pointers[i] = std::make_shared<Person>();
        }
    }

    std::cout << "Completed" << std::endl;

    return 0;
}