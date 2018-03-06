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

 
int check()
{
  int M = 2;
  int arr[M][M]={0};
  int i, j;
  for (i = 0; i < M; i++)
  {
    for (j = 0; j < M; j++)
    {
       arr[i][j] = 0;
       printf ("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}


int main()
{
 
  int arr[] = {10, 20, 30, 40, 50};
  fun(arr);
  //void_array();
  //void_pointer();
  check();
  return 0;
}
