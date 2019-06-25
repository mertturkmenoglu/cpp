#!/bin/sh

memory_command="valgrind --leak-check=yes -v ./main"

eval $memory_command