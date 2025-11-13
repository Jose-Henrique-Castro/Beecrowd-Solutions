#include <stdio.h>
#include <stdlib.h>
int main()
{
   
   int x , y , resultado ;
   scanf("%d",&x);
   
   if ( x > 2 && x < 1000 ) {
     for (y=1;y<=10;y++) {
       resultado = x*y;
       printf("%d x %d = %d\n",y,x,resultado);
     }
   }
   
  return 0;
}