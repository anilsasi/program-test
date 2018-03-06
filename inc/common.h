#include <stdio.h>


#ifndef COMMON_H
#define COMMON_H

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}



#endif
