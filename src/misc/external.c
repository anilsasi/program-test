#include <stdio.h>
#include "test.c"

extern int c;

int test_program(void)
{
    extern int c;
    c = 55;
}


int main()
{
    extern int c;
    c = 20;
    printf("%d\n", c);
    test_program();
    printf("%d\n", c);
}
