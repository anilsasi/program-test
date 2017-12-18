#include <stdio.h>
#include <string.h>

/*void print_reverse(char *p)
{
    if(*p)
    {
        p++;
        print_reverse(p);
        printf("%c", *p);
    }
    else
    {
        return;
    }
}*/

void printArray(char arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%c ", arr[i]);
 
  printf("\n");
} 

void reverse_string(char* p, int start, int end)
{
    int temp;
    if (start >= end)
    {
        return;
    }
    temp = p[start];
    p[start] = p[end];
    p[end] = temp;
    reverse_string(p, start+1, end-1);
}


int main()
{
   char a[] = "Geeks for Geeks";
   reverse_string(a, 0, strlen(a));
   printArray(a, strlen(a));
   return 0;
}
