#include <stdio.h>
#include <string.h>

int swap(char* x, char* y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(char* array, int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%c", array[i]);
    printf("\n");
}
 

int bubble_sort(char* array, int size)
{
    int sort_idx = 0, inner = 0;
    for (sort_idx = 0; sort_idx < size; sort_idx++)
    {
       for (inner = 0; inner < size-sort_idx; inner++)
       {
           if (array[inner] > array[inner + 1])
           {
                char temp = array[inner];
                array[inner] = array[inner+1];
                array[inner+1] = temp;
           }
         
       } 
    }
    
    return 0;
}

int remove_duplicate(char* str, int size)
{
    printf("%s\n", str);
    int next_pos = 1, cur_pos = 1;
    while (*(str + next_pos))
    {
        if (*(str+next_pos) != *(str+cur_pos-1))
        {
            *(str+cur_pos) = *(str+next_pos);
            cur_pos++;
        }
        next_pos++;
    }
    *(str + cur_pos) = '\0';
    printf("%s", str);
    //printArray(str, cur_pos);
    return 0;
}


int main()
{
    char array[] = "geekforgeeks";
    int size = strlen(array);
    bubble_sort(array, size-1);
    //printArray(array, size);
    remove_duplicate(array, size-1);
}
