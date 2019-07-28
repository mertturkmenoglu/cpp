/**
 * Matrix example
 * g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main
 * valgrind --leak-check=yes -v ./main
 */

#include<iostream>
#include<string>
#include<thread>
#include<cstdlib>
#include<ctime>
#include<chrono>

int main() {
    const int terminalWidth = 80;
    const int flipsPerLine = 5;
    const int sleepTime = 70;

    int x = 0;
    int counter = 0;

    srand(time(nullptr));

    bool switches[terminalWidth] = {false};

    const std::string charSet = " 1234567890qwertyuiopasdfghjklzxcvbnm,./';[]!@#$%^&*()-=_+";
    const int len = charSet.size();

    while (counter++ < 10000) {
        for (int i = 0; i < terminalWidth; i += 3) {
            char output = switches[i] ? charSet[rand() % len] : charSet.at(0);
            std::cout << output << " ";
        } 

        for (int i = 0; i != flipsPerLine; ++i) {
            x = rand() % terminalWidth;
            switches[x] = !switches[x];
        }

        std::cout << std::endl;

        std::this_thread::sleep_for(std::chrono::milliseconds(sleepTime));
    }

    return 0;
}