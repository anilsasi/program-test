#include <stdio.h>
#include <stdint.h>

int little_to_big(int* data)
{
    uint32_t b[4];
    uint32_t result;
    b[0] = (*data & 0x000000ff) << 24;
    b[1] = (*data & 0x0000ff00) << 8;
    b[2] = (*data & 0x00ff0000) >> 8;
    b[3] = (*data & 0xff000000) >> 24;
    result = b[0] | b[1] | b[2] | b[3];
    printf("%x", result);
}



int main()
{
    int a = 0x12345678;
    little_to_big(&a);
}
