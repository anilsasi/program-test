#include <stdio.h>


int main()
{
    int arr[]={10, 20, 30, 40, 50};
    int (*ptr)[5] = &arr;
    printf("%d\n", *ptr[0]);
}
