#include <stdio.h>


int my_add(int x, int y)
{
    while(y!=0)
    {
        int carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}

int main()
{
    printf("%d\n", my_add(11,3));
}
