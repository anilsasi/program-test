#include "stdio.h"
int main(int argc, char const *argv[]) {
  char array[10] = "ABCDEFG1H";
  to_lower(array);
  printf("%s\n", array);
  return 0;
}

int to_lower(char* p)
{
  while (*p != '\0') {
   if (*p >= 'A' && *p <= 'z'){
     *p = *p + 'a' - 'A';
   }
   p++;
    /* code */
  }
  return 0;
}
int to_upper(char* p){
  while (*p != '\0') {
   if (*p >= 'A' && *p <= 'z'){
     *p = *p + 'a' - 'A';
   }
   p++;
    /* code */
  }
  return 0;
}
