#include <stdio.h>
int add_one(int x);

int odd_in_array(){
  int a[] = {4, 5, 4, 5, 17, 8, 8};
  int i = 0, res = 0;
  int size = sizeof(a)/sizeof(a[0]);
  for (i = 0;i < size;i++) {
    res ^= a[i];
  }
  printf("%d\n", res);
  return 0;
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
  //check_sign(-100, 100);
  //check_sign(-20, -20);
  add_one(7);
  return 0;
}

//add one to given number
int add_one(int x){
  int m = 1;
  while (x&m) {
    printf("x=%d and m=%d\n", x, m);
    x=x^m;
    m = m<<1;
  }
  //printf("x=%d and m=%d\n", x, m);
  x=x^m;
  printf("%d\n", x);
  return 0;
}
