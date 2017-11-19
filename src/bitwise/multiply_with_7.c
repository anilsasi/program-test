#include <stdio.h>

int main(int argc, char* argv[])
{
    int n = atoi(argv[1]);
    printf("multiply by 7 is:[%d]\n", (n << 3) - n);
    return 0;
}
