#include <stdio.h>

#define MAX 100
#define incriment(x) ++x
#define magi(a, b) a * b
#define merge(a, b) a##b

int test_01(void)
{
  printf("max is: %d\n", MAX);
}

int test_02(void)
{
  char* str = "GeekforGeeks";
  int x = 10;
  printf("%s\n", incriment(str));
  printf("%d\n", incriment(x));
  return 0;
}

int test_03(void)
{
  printf("%d\n", magi(2+3, 3+2));
  return 0;
}

void test_04(/* arguments */) {
  printf("%d\n", merge(12,34));
}

int main(int argc, char const *argv[]) {
  //test_01();
  //test_02();
  //test_03();
  test_04();
  return 0;
}
