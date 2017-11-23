#include <stdio.h>
#include <stdarg.h>

int varaible_arg(int arg_count, ...)
{
  int i = 0, min;
  va_list ap;
  va_start(ap, arg_count);
  for (i =0; i< arg_count; i++)
  {
    printf("%d\n", va_arg(ap, int));
  }
  va_end(ap);
}

int main()
{
  int count = 5;
// Find minimum of 5 numbers: (12, 67, 6, 7, 100)
  printf("Minimum value is %d", varaible_arg(count, 'a', 67, 6, 7, 100));
  getchar();
  return 0;
}
