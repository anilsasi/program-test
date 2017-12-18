#include <stdio.h>

int main()
{
    int a = 1023;
    void* ptr = &a;
    printf("%d\n", *(char*)ptr);
}
