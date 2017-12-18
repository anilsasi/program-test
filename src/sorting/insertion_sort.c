#include <stdio.h>


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

int insertion_sort(int array[], int len)
{
    int key = 0, j =0, i = 0;
    for (i =1, i < n; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >=0 && array[j] > key)
        {
            array[j+1] = array[j];
            j = j - 1; 
        }
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
