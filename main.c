#include <stdio.h>
int main() {
  float w ;
  float h ;
  float x ;
  scanf("%f,%f" , &w ,&h) ;
  scanf("%f" ,&x) ;
  if (x < 18.5)
  {
    printf("UNDERWEIGHT") ;
  }
  else if (18.5 ≤ x < 25) 
  {
    printf(" NORMAL") ;
  }
  else if (25 ≤ x < 30) 
  {
    printf("OVERWEIGHT") ;
  }
  else if (x ≥ 30) 
  {
    printf ("OBESE") ;
  }
  float x=w/(h/100)^2
  return 0;
}