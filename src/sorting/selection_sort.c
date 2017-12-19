#include <stdio.h>

/*1.start from index 0
2.find out min element
3.swap indx and min element*/

int swap(int* x, int* y)
{
    printf("swapping x =%d, y=%d \n", *x, *y);
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int selection_sort(int array[], int len)
{
    int indx = 0, min = 0, j = 0;
    for (indx = 0; indx < len; indx++)
    {
        min = indx;
        for (j = indx + 1; j < len; j++)
        {
            if ( array[j] < array[min])
            {
                min = j;
            }
            swap(&array[min], &array[indx]); 
        }
    }
    return 0;
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
