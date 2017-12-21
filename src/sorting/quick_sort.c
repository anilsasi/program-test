#include <stdio.h>

int swap(int* x, int* y);

int partition(int array[], int low, int end)
{
   int pivot = array[end];
   int previous = -1;
   for (int next=0; next <= end-1; next++)
   {
        if (array[next] <= pivot)
        {
            previous++;
            swap(&array[previous], &array[next]);
        }
   }
   swap(&array[previous+1], &array[end]);
   return (previous+1);
}

int swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int print_array(int array[], int size)
{
    for (int i=0; i < size; i++)
    {
        printf("%d,", array[i]);
    }
    printf("\n");
}

int quick_sort(int* array, int start, int end)
{
    if (start < end)
    {
        int part_index = partition(array, start, end);
        quick_sort(array, start, part_index-1);
        quick_sort(array, part_index+1, end);
    }
}

int main()
{
    int array[] = {10, 7, 8, 9, 1, 5, 0, 20, 2, 46};
    int size = sizeof(array) / sizeof(array[0]);
    quick_sort(array, 0, size-1);
    print_array(array, size);
    return 0;
}

