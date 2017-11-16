#include <stdio.h>
#include <stdbool.h>
bool ispower_of_4(long int x);
bool is_bitwise_power_of_4(unsigned int x);

int main(int argc, char const *argv[]) {
  long int number = 0;
  if (argc == 2) {
    printf("argument supplied is:%s\n", argv);
    number = atoi(argv[1]);
  }
  if (argc < 2) {
    printf("at least one argument expected\n");
  }
  if (is_bitwise_power_of_4(number)){
    printf("it is power of 4\n");
  }
  else{
    printf("wrong number\n");
  }
  return 0;
}

bool ispower_of_4(long int number){
  if (number == 0) {
    return 0;
  }
  while (number != 1) {
    if (number%4 != 0) {
      return 0;
    }
    number = number / 4;
  }
  return 1;
}

//check using bitwise operators
int count_number_of_set_bits(unsigned int number)
{
    int count = 0;
    while(number)
    {
        count = count+(number&1);
        number = number >> 1;
    }
    return count;
}

bool is_bitwise_power_of_4(unsigned int number)
{
    int count = 0;
    if (count_number_of_set_bits(number) == 1)
    {
        while (number > 1)
        {
            number = number >> 1;
            count++;
        }
        return (count%2 == 0)?1:0;
    }

    return 0;
}
