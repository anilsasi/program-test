#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 0;
  short b = 0;
  long int c = 0;
  char d = 0;
  float e = 0;
  double f = 0;
  unsigned char g = 0;
  unsigned int h = 0;
  printf("%lu,%lu,%lu,%lu,%lu,%lu,%lu, %lu\n", sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e),sizeof(f),sizeof(g),sizeof(h));
  return 0;
}
