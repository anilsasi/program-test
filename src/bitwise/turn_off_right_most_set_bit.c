#include <stdio.h>
int main()
{
    int n = 0;
    printf("enter a number:\n");
    scanf("%d", &n);
    printf("%d\n", n&(n-1));
    return 0;
}

