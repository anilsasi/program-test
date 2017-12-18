#include <stdio.h>

int main()
{
    const int a;
    const int* b = &a;
    *b = 40;
    printf("%d\n", a);
    return 0;
}
