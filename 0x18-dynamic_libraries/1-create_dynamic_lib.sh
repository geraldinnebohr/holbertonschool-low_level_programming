#!/bin/bash
gcc -Wall -Werror -fpic -c *.c
gcc -shared -o liball.so *.o
