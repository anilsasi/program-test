#include "stdio.h"

int main(int argc, char const *argv[]) {
int a[] = {1,1,2,4,3,3,3,3,2, 4};
int count =0;
int outer_loop_idx = 0, inner_loop_indx = 0;
for (outer_loop_idx = 0; outer_loop_idx < sizeof(a)/sizeof(a[1]); outer_loop_idx++) {
  count = 0;
    for (inner_loop_indx = 0; inner_loop_indx < sizeof(a)/sizeof(a[1]); inner_loop_indx++)
    {
      if (a[outer_loop_idx] == a[inner_loop_indx]) {
        count++;
      }
    }
    if (count % 2 != 0){
      printf("odd occurence is:%d\n", a[outer_loop_idx]);
    }
}
  return 0;
}
