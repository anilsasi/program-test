#include <stdio.h>

struct check{
   char d;
   int a;
   int b;
};

struct check name;



int main()
{
    printf("%d\n", sizeof(name));
}
