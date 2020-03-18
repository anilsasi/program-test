#include <stdio.h>
int  main() {
  farenheat();
  return 0;
}
/* c=(5/9)(f-32)*/
int farenheat()
{
     float c = 0;
     float f = 0;
     int step = 20;
     printf("farenheat\tcelcius\n");
     for (f=0; f<=300; f=f+step)
     {
       c=(5.0*(f-32.0))/9.0;

       printf("%.0f\t%.1f\n", f,c);
     }
     return 0;
}
