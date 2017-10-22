#include "stdio.h"
int check_even_odd();
int main() {
  check_even_odd();
  return 0;
}

int check_even_odd(){
  long int number = 0, i = 0;
  for (i = 0; i <= 100; i++) {
    if (i & 1){
      printf("%d: is odd\n", i);
    }
    else{
      printf("%d:is even\n", i);
    }
  }
  return 0;
}
