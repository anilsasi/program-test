#include <stdio.h>

int set_bit(int number, int pos)
{
    int setbit = number | (1 << pos);
    printf("set_bit:%d\n", setbit);
}

int clear_bit(int number, int pos)
{
    int clear_bit = ~(1 << pos) & number;
    printf("clear_bit:%d\n", clear_bit);
}

int toggle_bit(int number, int pos)
{
    int toggle_bit = number ^ (1 << pos);
    printf("toggle_bit:%d\n", toggle_bit);
}

int get_bit(int number, int pos)
{
    int get_bit = (number >> pos) & 1; 
    printf("get_bit:%d\n", get_bit);
}

int toggle_all_except_kth_bit(int number, int pos)
{
    printf("%d\n", ~((1 << pos) ^ (number)));
}

int main()
{
    set_bit(4, 3);
    clear_bit(4, 3);
    toggle_bit(4, 3);
    for (int i = 3; i > 0; i--)
    {
        get_bit(4, i);
    }
    toggle_all_except_kth_bit(3, 1);
    return 0;
}
