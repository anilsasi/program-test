#include <stdio.h>

int main()
{
    int n = 21, m =2, num = 0;
    num = (1 << m) - 1;
    n = n ^ num;
    printf("%d\n", n);    
    
}
