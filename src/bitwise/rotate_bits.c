#include "stdio.h"
#define MAX 32
int left_rotate(int number, int postion);
int right_rotate(int number, int postion);

int main(int argc, char const *argv[]) {
  printf("left rotate is:%d\n",  left_rotate(atoi(argv[1]), atoi(argv[2])));
  printf("right rotate is:%d\n", right_rotate(atoi(argv[1]), atoi(argv[2])));
  return 0;
}


int left_rotate(int number, int postion) {
  return (number << postion) | (number >> (MAX - postion));
}

int right_rotate(int number, int postion) {
  return (number >> postion) | (number << (MAX - postion));
}
