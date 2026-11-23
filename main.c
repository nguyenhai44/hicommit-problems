#include <stdio.h>
int main ()
{
 double d ;
  double tien = 0;
  scanf("%lf" , &d) ;
  if (1<=d) {
    tien= d*15000 ;
  }
  else if (d<=5) {
   tien= 1*15000 +(d-1) *13000 ;
  }
  else {
    tien=1*15000+4*13000+(d-5)*11000;
  }
  printf("%.0lf",tien) ;
  return 0;
}