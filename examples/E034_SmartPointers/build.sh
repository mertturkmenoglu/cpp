#!/bin/sh

build_command="g++ main.cpp -std=c++14 -Wall -Wextra -Wnon-virtual-dtor -pedantic -g -o main"

clean_command="rm -f main"

if [ $# -gt 0 ] && [ $1 = 'clean' ]
then
    eval $clean_command
else
    eval $build_command
fi