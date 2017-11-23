#include <stdio.h>

unsigned int reverse_bits(unsigned int number)
{
    int no_of_bits = sizeof(number) * 8;
    unsigned int reverse_number = 0, i = 0;
    for (i =0; i<no_of_bits; i++)
    {
        if (number & (1 << i))
        {
            reverse_number = reverse_number | (1 << ((no_of_bits - 1)- i));
        }
    }
    
    return reverse_number;
}

int main()
{
    unsigned int num = 2;
    printf("%u\n", reverse_bits(num));
}
