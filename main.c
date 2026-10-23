#include <stdio.h>
int main() {
  double dtb;
  scanf("%f",&dtb) ;
  
  if (dtb>=9.00 && dtb>=10.0){
    printf("A\n") ;
  }
  if (8.0<=dtb){
    printf("B+\n") ;
  }
     if (7.0<=dtb)
    {
      printf("B\n") ;
    }
       if (6.5<=dtb)
       {
         printf("C+\n") ;
       }
         else (5.5<=dtb)
  {
    printf ("C") ;
  }
  if (5.0<=dtb){
    printf("D+") ;
  }
    else (4.0<=dtb)
  {
    printf("D") ;
  }
  if (dtb<=4.0)
  {
    printf ("F\n") ;
  }
  
    return 0;
}