#!/bin/bash


CFLAGS="-g -Wall -Wextra -D_GNU_SOURCE -DLINUX"

INCPATH="-I../../inc"


gcc -o output $CFLAGS $INCPATH -g linked_list_problems.c check.c 
