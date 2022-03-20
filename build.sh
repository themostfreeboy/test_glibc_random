#!/bin/bash

g++ --std=c++11 myrand.cpp -c -o myrand.o
g++ --std=c++11 -O2 test_glibc_random.cpp myrand.o -o main
