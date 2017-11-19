#include "stdio.h"
#include <stdbool.h>
bool bitwsie_power_of_2(int number);

int main(int argc, char const *argv[]) {
  int number = atoi(argv[1]);
  if(bitwsie_power_of_2(number))
  {
      printf("it is not\n");
  }
  else
  {
      printf("yes it is\n");
  }
  /*while (number != 1) {
    if (number % 2 != 0) {
      printf("it is not power of 2\n");
      return 1;
    }
    number = number / 4;
  }*/
  return 0;
}

bool bitwsie_power_of_2(int number)
{
    if (number == 0)
    {
        return 1;
    }
    return (number&number-1);
}
