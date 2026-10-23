#include <stdio.h>
int main() {
  double dtb;
  scanf("%f",&dtb) ;
  
  if (dtb>=9.00 && dtb>=10.0){
    printf("A\n") ;
  }
  else if (dtb>=8.0 && dtb>=8.9){
    printf("B+\n") ;
  }
     else if (dtb>=7.0) && dtb>=7.9)
    {
      printf("B\n") ;
    }
       else if (dtb>=6.5) && dtb>=6.9)
       {
         printf("C+\n") ;
       }
         else if (dtb>=5.5 && dtb>=6.4)
  {
    printf ("C") ;
  }
 else if (dtb>=5.0 && dtb>=5.4){
    printf("D+") ;
  }
    else if  (dtb>=4.0 && dtb>=4.9)
  {
    printf("D") ;
  }
  else if (dtb<=4.0)
  {
    printf ("F\n") ;
  }

    return 0;
}