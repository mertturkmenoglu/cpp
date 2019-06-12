# C++
***
# Description
* This repository contains my C++ codes.
* You need to install **GCC** to your system(or another compiler). Please follow the [original source].
# Build
* You need **GCC** on your system.
* Clone the repository:  
  * `git clone https://github.com/mertturkmenoglu/cpp.git`
* After getting repository on your local environment, a simple compile process:  
```
    cd cpp
    cd E001_Swap
    g++ -o main main.cpp
    ./main
```
* You can use `afgenerator.jar` file to create auto file generation.
* Simple process:
  * Add an alias:
    * `vim ~/.bashrc`
    * Add this line: `alias gen="./afgenerator.jar"`
    * Run this command: `source ~/.bashrc`
  * Run the program via terminal with arguments:
    * `gen 123 CppTest`
* **Temporarily, it does not work**.
***
# GCC Commands / Flags
* Turn on warnings: `-Wall -Wextra`
* Warnings for non virtual destructors: `-Wnon-virtual-dtor`
* For more warnings and stable compiling: `-pedantic`
* Turn on debugging: `-g`
* Name of the output file: `-o main`
* `g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main`
# Contributing
* All ideas and helps are welcome. Please contact with me.
# Authors
* Mert Türkmenoğlu

[original source]: https://gcc.gnu.org/