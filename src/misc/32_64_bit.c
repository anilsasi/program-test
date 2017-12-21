#include <stdio.h>

int main()
{
    int check = sizeof(void*)*8;
    printf("%d", check);
    getchar();
    printf("char pointer is:%d\n", sizeof(char*));
}
