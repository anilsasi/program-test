#include <stdio.h>

int swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}
 

int bubble_sort(int array[], int size)
{
    int sort_idx = 0, inner = 0;
    for (sort_idx = 0; sort_idx < size; sort_idx++)
    {
       for (inner = 0; inner < size-sort_idx; inner++)
       {
           if (array[inner] > array[inner + 1])
           {
                swap (&array[inner], &array[inner + 1]);
           }
         
       } 
    }
    
    return 0;
}


int main()
{
    int array[]= {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(array)/sizeof(array[0]);
    bubble_sort(array, size);
    printArray(array, size);
}
