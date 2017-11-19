#include <stdio.h>
int position_of_right_most_set_bit(int number);

int main(int argc, char* argv[])
{
    position_of_right_most_set_bit(atoi(argv[1]));
}


int position_of_right_most_set_bit(int number)
{
    int flip = 0, position=0;
    if (number < 0)
    {
        return 1;
    }
    if (number!=0)
    {
        flip     = (number&number-1);
        position = flip ^ number; 
    }
    printf("%d\n", position);
    return 0;
}
