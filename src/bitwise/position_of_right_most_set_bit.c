#include <stdio.h>
#include <math.h>

int main()
{
    int n = 4;
    int pos = Log2((n&(-n)))+1;
    printf("%d\n", pos);
}
