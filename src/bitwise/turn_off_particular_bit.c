#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv)
{
   int number = 15, reset = 0;
   int pos = 1;
   reset = number & ~(1 <<( pos - 1));
   printf("%d\n", reset); 
}
