#include <stdio.h>

int void_array()
{
    //void a[10];
    return 0;
}

int void_pointer()
{
    void* a[10];
    return 0;
}

void fun(int arr[])
{
    int i;
    unsigned int n = sizeof(arr)/sizeof(arr[0]);
    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}


int main()
{
 
  int arr[] = {10, 20, 30, 40, 50};
  fun(arr);
  //void_array();
  //void_pointer();
  return 0;
}
