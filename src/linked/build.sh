#!/bin/bash


CFLAGS="-g -Wall -Wextra -D_GNU_SOURCE -DLINUX"

INCPATH="-I../../inc"


gcc -o linked_list $CFLAGS $INCPATH -g linked_list_problems.c 
