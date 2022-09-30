#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar cr liballa.a *.o
