#include <stdio.h>

int find_missing_element(int arr[], int n)
{
    int sum = 0, i = 0;
    int sum_of_n = n*(n+1)/2;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int result = sum - sum_of_n;
    printf("%d", result);
    return 0;
}


int main()
{
   int a[] = {1,2,4,5,6}; 
   find_missing_element(a, 5);
   return 0;
}
