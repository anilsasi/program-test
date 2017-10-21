#include "stdio.h"
int main(int argc, char const *argv[]) {
  //long number = check();
  printf("%ld\n", check());
  return 0;
}

int check() {
  int sign = 0;
  long number=0,i = 0;
  char input[10] = {0};
  printf("enter string\n");
  scanf("%s", input);
  if (input[0] == '-')
  {
    sign = 1;
    i++;
  }
  while (input[i] != '\0' && input[i] >= '0' && input[i] <= '9') {
    number = number * 10 + (input[i] - '0');
    i++;
  }
  if (sign > 0){
    number = number*(-1);}
  //printf("%ld\n", number);
  return number;
}
