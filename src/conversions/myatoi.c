#include "stdio.h"
int main() {
  long cnumber = 0;
  char input[10] = "1234";
  cnumber = myatoi(input);
  printf("%ld\n", cnumber);
  return 0;
}
int myatoi(char* str)
{
  long number = 0;
  while(*str != '\0')
  {
    if (*str >='0' && *str <= '9')
    {
      number = number*10 + *str - '0';
    }
    str++;
  }
  return number;
}
