#include <stdio.h>

int find_missing(int a[], int n)
{
    int i=0;
    int xor_array = a[0];
    int xor_of_n_natural_numbers = 1;

    for (i=1; i<n; i++)
    {
        xor_array = xor_array ^ a[i];
    }

    for (i = 2; i <= n+1; i++)
    {
        xor_of_n_natural_numbers = xor_of_n_natural_numbers ^ i;
    }

    int missing = xor_array ^ xor_of_n_natural_numbers;
    printf("%d\n", missing);
    return 0;
}

int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int miss = find_missing(a, 5);
    return 0;
}
