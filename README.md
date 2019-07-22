![C++ Logo](https://github.com/isocpp/logos/blob/master/cpp_logo.png?raw=true)  

![GitHub top language](https://img.shields.io/github/languages/top/mertturkmenoglu/cpp.svg) ![GitHub](https://img.shields.io/github/license/mertturkmenoglu/cpp.svg) ![GitHub followers](https://img.shields.io/github/followers/mertturkmenoglu.svg?style=social)
# C++ Language Examples
***
# Description
* This repository contains my **C++** language example codes.
* Official C++ website: https://isocpp.org/
* See the LICENSE file for details.
* You need to install **GCC** to your system(or another compiler). Please follow the [original source].
***
# Project Structure

```
  |-> examples
  |-> practice
  |-> stl
  CMakeLists.txt
```
  * `examples`: Language feature examples.
  * `practice`: Coding practices and showing language features on algorithms.
  * `stl`: You may find `C++ Standard Template Library` examples in this directory.
  * `CMakeLists.txt`: All executable links should be declared here.
***
# Build
#### Tools Required
* GCC (or another C++ compiler)
* A C++ IDE (preferably **CLion**, Visual Studio, Eclipse) or a text editor
#### Setup
* You need **a C++ compiler** on your system.
* **Fork** and **clone** the repository:
* After getting repository on your local environment, create a branch.
* You can edit source code files or you can create **C++** project on your IDE.
* Project uses **CLion** structure but you do not have to.
# Contributing
* Fork and clone the repository.
* Follow the steps under the build chapter.
* Do not add any IDE project files(CLion project files are already added).
* Push and open a pull request.
* All ideas and helps are welcome. For more, please contact with me.
# GCC Commands / Flags
* Turn on warnings: `-Wall -Wextra`
* Warnings for non virtual destructors: `-Wnon-virtual-dtor`
* For more warnings and stable compiling: `-pedantic`
* Turn on debugging: `-g`
* Name of the output file: `-o main`
* `g++ main.cpp -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main`
# Authors
* Mert Türkmenoğlu

[original source]: https://gcc.gnu.org/