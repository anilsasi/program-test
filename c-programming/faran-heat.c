#include "stdio.h"

int  main(int argc, char const *argv[]) {
int limit = 300;
int step = 20;
float c;
int f;
int i;
for (i=0; i <= 300; i += step)
{
  c = (5/9)*(i - 32);
  printf("%d\t%f\n", i, c);
}
  return 0;
}
