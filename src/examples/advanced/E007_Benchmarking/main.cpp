/**
 * Please check out TheChernoProject on Youtube and
 * https://www.youtube.com/watch?v=YG4jexlSAjc
 */

#include <array>
#include <chrono>
#include <iostream>
#include <memory>

class benchmark {
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> mStartTimePoint;
public:
    benchmark() {
        mStartTimePoint = std::chrono::high_resolution_clock::now();
    }

    ~benchmark() {
        stop();
    }

    void stop() {
        std::chrono::time_point<std::chrono::high_resolution_clock> endTimePoint = std::chrono::high_resolution_clock::now();
        auto begin = std::chrono::time_point_cast<std::chrono::microseconds>(mStartTimePoint).time_since_epoch().count();
        auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimePoint).time_since_epoch().count();
        std::cout << "Duration: " << end - begin << std::endl;
    }

};

class person {

};

int main() {
    {
        benchmark b;
        long value = 0;
        for (int i = 0; i < 1000000; i++) {
            if (i % 2 == 0) {
                value += i;
            }
        }
    }

    {
        std::array<std::shared_ptr<person>, 2000> ptrs;
        benchmark b;
        for (int i = 0; i < 2000; i++) {
            ptrs[i] = std::make_shared<person>();
        }
    }

    std::cout << "Completed" << std::endl;

    return 0;
}