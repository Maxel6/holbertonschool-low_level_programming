#!/bin/bash
gcc -c *.c -o liball.o && ar -rsc liball.a liball.o
