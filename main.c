#include <stdio.h>
int main() {
  float a ;
  scanf("%f",&a) ;
  if (9.0>=a>=10.0) 
  {
    printf("A : \n") ;
  }
  else if(8.0>=a>=8.9)
  {
    printf("B+") ;
  }
  else if (7.0>=a>=7.9) ;
  {
    printf("B") ;
  }
  else if (6.5>=a>=6.9) 
  {
    printf("C+") ;
  }
  return 0;
}