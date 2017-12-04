#include <stdio.h>

int swap_bits_in_given_number(int number, int k_bits, int p1, int p2)
{
    unsigned int set_1 = (number >> p1) & ((1 << k_bits) - 1);
    unsigned int set_2 = (number >> p2) & ((1 << k_bits) - 1);
    unsigned int xor = (set_1 ^ set_2);
    unsigned int xor_bits = (xor << p1) | (xor << p2);
    int result = xor_bits ^ number; 
    return result; 
}

int main()
{
    printf("%d\n", swap_bits_in_given_number(47, 3, 1, 5));
}
