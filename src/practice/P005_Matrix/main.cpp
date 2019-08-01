/**
 * Matrix example
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include<chrono>
#include<iostream>
#include <random>
#include<string>
#include<thread>

int main() {
    const int terminalWidth = 80;
    const int flipsPerLine = 5;
    const int sleepTime = 70;

    int x = 0;
    int counter = 0;

    bool switches[terminalWidth] = {false};

    const std::string charSet = " 1234567890qwertyuiopasdfghjklzxcvbnm,./';[]!@#$%^&*()-=_+";
    const int len = static_cast<int>(charSet.size());

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> random(0, len);
    std::uniform_int_distribution<int> random_terminal_width(0, terminalWidth);

    while (counter++ < 10000) {
        for (int i = 0; i < terminalWidth; i += 3) {
            char output = switches[i] ? charSet[random(mt)] : charSet.at(0);
            std::cout << output << " ";
        } 

        for (int i = 0; i != flipsPerLine; ++i) {
            x = random_terminal_width(mt);
            switches[x] = !switches[x];
        }

        std::cout << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(sleepTime));
    }

    return 0;
}