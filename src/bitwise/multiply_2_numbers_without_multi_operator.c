#include <stdio.h>

int main()
{
    int number1 = 3, number2 = 2, res = 0;
    while (number2 > 0)
    {
        printf("number 2 is:%d\n", number2);
        if (number2 & 1)
        {
            res = res + number1;
        }
        number1 = number1 << 1;
        number2 = number2 >> 1;
    }
    printf("%d\n", res);
}
