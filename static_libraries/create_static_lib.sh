#!/bin/bash
gcc -c *.c -o a.o | ar -rsc a.a a.o
