#!/bin/bash
gcc -c * .c
ar -rc liball.a * .c
rm * .o
