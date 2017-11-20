#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[])
{
    char number = atoi(argv[1]), swap = 0;
    swap = ((number & 0x0F) << 4) | ((number & 0xF0) >> 4);
    printf("%d\n", swap);
}

