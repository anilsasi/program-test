#include <stdio.h>
int position_of_right_most_set_bit(int number);

int main(int argc, char* argv[])
{
    binary_representation(atoi(argv[1]));
    //position_of_right_most_set_bit(atoi(argv[1]));
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

int binary_representation(int number)
{
    int i =0;
    for(i = number << 32; i > 0; i = i/2)
    {
        (number & i)?printf("1"):printf("0");
    }
    printf("\n");
}
