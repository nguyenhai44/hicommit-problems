#include <stdio.h>
int main() {
  double dtb;
  scanf("%f",&dtb) ;
  
  if (dtb>=9.00)
    printf("A\n") ;
  else if (8.0<=dtb)
    printf("B+\n") ;
  /*else if (7.0<=dtb<=7.9)
    printf("B\n") ;
  else if (6.5<=dtb<=6.9)
  {
    printf("C+\n") ;
  }
  else if (5.5<=dtb<=6.4)
  {
    printf("C\n") ;  
  }
  else if (5.0<=dtb<=5.4) 
  { 
    printf("D+\n") ;
  }
  else if (4.0<=dtb<=4.9) {
    printf("D\n") ;
  }*/
  else 
  {
    printf ("F\n") ;
  }
    return 0;
}