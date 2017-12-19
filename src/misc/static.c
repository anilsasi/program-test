#include <stdio.h>

int check(int *data)
{
    *data = 20;
}

int func()
{
    static int i = 0;
    i++;
    printf("%d\n", i);
    check(&i);
    return 0;
}


int main()
{
    func();
    func();
    func();
}
