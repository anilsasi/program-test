#include <stdio.h>
#include <stdbool.h>

int main()
{
    int number_1 = 3, number_2 = 2, i = 0;
    for(i = 31; i > 0; i--)
    {
        bool b1 = number_1 & (1 << i);
        bool b2 = (number_2) & (1 << i);

        bool xorbit = (b1 & b2)?0:(b1 | b2);
    }
    printf("\n");

}
