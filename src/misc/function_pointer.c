#include <stdio.h>

void foo(int a)
{
    printf("%d\n", a);
}

int call_back(void (*ptr)())
{
    (ptr)(30);
}

int main()
{
    void (*func)(int)=foo;
    call_back(func);
}
