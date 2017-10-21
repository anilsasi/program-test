#include <stdio.h>
int to_hex(long int number);
int main()
{
  long int number;
  printf("enter number:\n");
  scanf("%ld", &number);
  //to_hex(number);
  //to_oct(number);
  to_binary(number);
  return 0;
}


int to_hex(long int number)
{
  int quotient=number, reminder=0, i=0;
  char hexarray[32]={0};
  while (quotient != 0) {
    reminder = quotient % 16;
    //printf("%d\n", reminder);
    //convert integer to string
    if (reminder < 10) {
      hexarray[i] = reminder + '0';
      //printf("%c\n", hexarray[0]);
      /* code */
    }
    else{
      hexarray[i] = reminder + 55;
      //printf("%c\n", hexarray[0]);
    }
    quotient = quotient / 16;
    i++;
  }
  for (;i >=0; i--)
  {
    printf("%c", hexarray[i]);
  }
  printf("\n");
  return 0;
}

int to_oct(long int number){
  long int temp = 0;
  int quotient = 0, reminder = 0, i = 0;
  int octalnumber[32] = {0};
  quotient = number;
  while (quotient!= 0) {
    reminder = quotient % 8;
    octalnumber[i] = reminder;
    i++;
    quotient = quotient / 8;
  }
  for(;i >=0; i--){
    printf("%d", octalnumber[i]);
  }
  printf("\n");
 return 0;
}

int to_binary(long int number){
  long int temp = 0;
  int quotient = 0, reminder = 0, i = 0;
  int binary[32] = {0};
  quotient = number;
  while (quotient != 0) {
    reminder = quotient % 2;
    binary[i] = reminder;
    quotient = quotient / 2;
    i++;
    /* code */
  }
  for(;i >=0; i--){
    printf("%d", binary[i]);
  }
  printf("\n");
}
