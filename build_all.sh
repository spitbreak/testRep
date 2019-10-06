#!/usr/bin/sh

set -x

g++ -g main.cpp -o cpp_bin

gcc -g main.c -o cc_bin
