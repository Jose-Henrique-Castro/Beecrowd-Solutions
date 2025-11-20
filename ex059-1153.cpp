#include <stdio.h>
#include <stdlib.h>
int main()
{
   
   int N , i ;
   int x=1;
   
   scanf("%d",&N);
   
   if ( N>0 && N<13 ) {
     for (i=1;i<=N;i++) {
       x *= i;
     }
   }
   printf("%d\n",x);
   
  return 0;
}