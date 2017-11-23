#include <stdio.h>
#include <stdbool.h>


bool alter()
{
    int number = 4;
    int prev =0 , cur = 0;
    prev = number % 2;
    number = number / 2;

    while (number > 0)
    {
        cur = number % 2;
        if (prev == cur)
        {
            return false;
        }
        prev = cur;
        number = number/2;
    }
    return true; 
}

int toggle_kth_bit(int number, int pos)
{
    int toggle = (number) ^ (1 << (pos - 1));
    printf("%d\n", toggle);
}

int main()
{
    if (alter())
    {
        printf("yes\n");
    }
    else
    {
        printf("No\n");
    }
    toggle_kth_bit(5, 1);
}


