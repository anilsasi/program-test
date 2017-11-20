#include <stdio.h>
#include <stdbool.h>
bool power_of_2(int number);
int main(int argc, char* argv[])
{
    int position = 0;
    int number = atoi(argv[1]);
    if (power_of_2(number))
    {

        printf("%d\n", position);
        return 0;
    }
    while(number)
    {
        number = number >> 1;
        position++;
    }
    printf("%d\n", position);
    return 0;
}

bool power_of_2(int number)
{
    if (!(number &(number - 1)))
    {
        return 0;
    }
    return 1;
}
