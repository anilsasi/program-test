#include <stdio.h>

int odd_in_array(){
  int a[] = {4, 5, 4, 5, 17, 8, 8};
  int i = 0, res = 0;
  int size = sizeof(a)/sizeof(a[0]);
  for (i = 0;i < size;i++) {
    res ^= a[i];
  }
  printf("%d\n", res);
}

//check opposite signs
int check_sign(int a, int b){
  if (a ^ b){
    printf("numbers are not signed\n");
  }
  else{
    printf("numbers are signed\n");
  }
  return 0;
}

int main(int argc, char const *argv[]) {
  check_sign(-100, 100);
  check_sign(-20, -20);
  return 0;
}
