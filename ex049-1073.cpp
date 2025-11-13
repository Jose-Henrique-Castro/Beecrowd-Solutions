#include <stdio.h>
#include <stdlib.h>
int main()
{
   
   int x , y , quadrado ;
   scanf("%d",&x);
   
   if ( x > 5 && x < 2000 ) {
     for ( y = 1 ; y <= x ; y++ ) {
     if ( y % 2 == 0 ) {
       quadrado = y*y;
       printf("%d^2 = %d\n",y,quadrado);
     }
   }
   }
 
  return 0;
}