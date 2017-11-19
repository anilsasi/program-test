#include <stdio.h>

int main(int argc, char* argv[])
{
    int a_xor_b = atoi(argv[1]) ^ atoi(argv[2]);
    printf("number of bits to be flipped:%d", count_no_of_set_bits(a_xor_b));
    getchar();
    return 0;
}

int count_no_of_set_bits(int number)
{
    int count = 0;
    while(number)
    {
        count = count + (number & 1);
        number = number >> 1;
    }
    return count;
}
