#include <stdio.h>

int main() {
  int abs ;
  float gpa, min ;
  scanf("%f,%f,%d" , &abs,&gpa,&min) ;
  if (abs>3) {
    printf("FAIL_ATTENDANCE") ;
  }
  else if (min<4) {
    printf("FAIL_SUBJECT") ;
  }
  else if (gpa >=8 && min>=7) {
    printf ("EXCELLENT") ;
  }
  else if (gpa>=6.5 && min>=5){
    printf("GOOD") ;
  }
  else if (gpa>=5 && min>=4) {
    printf("PASS") ;
  }
  return 0;
}