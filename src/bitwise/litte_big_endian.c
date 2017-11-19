#include <stdio.h>
int show_memory_map(char* num, int size);
int check_endianess();

int main()
{
    int i = 0x1234567;
    //show_memory_map(&i, sizeof(i));
    check_endianess();
    return 0;
}

int show_memory_map(char* number, int size)
{
    int i=0;
    for (i = 0; i < size; i++)
    {
        printf(" %.2x", number[i]);
    }
    printf("\n");
    return 0;
}


int check_endianess()
{
    int i = 1;
    char* c = (char*)&i;
    if (*c)
    {
        printf("this is little endian\n");
    }
    else {
        printf("big endian\n");
    }
}
