#include <common.h>

int selection_sort(int a[], int size)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < size; i++)
    {
        for (j = i+1; j < size; j++)
        {
            if (a[j] < a[i])
            {
                swap(&a[j], &a[i]);
            }
        }
    }
    
    return 0;
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
 
}
