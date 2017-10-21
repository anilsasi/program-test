#include <stdio.h>
int main(int argc, char const *argv[]) {
  long leap = 0;
  printf("enterleap yerar\n");
  scanf("%ld", &leap);
  if ((leap % 4==0) || (leap %400 == 0 && leap %100 != 0)) {
    printf("it's a leap yerar\n");
  }
  else{
    printf("it is not a leap yerar\n");
  }
  return 0;
}
