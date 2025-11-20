#include <stdio.h>
int main()
{
   
int N , y , quadrado , cubo ;
scanf("%d",&N);

if ( N > 1 && N < 1000 ) {
  for (y=1;y<=N;y++) {
    quadrado = y*y;
    cubo = y*y*y;
    printf("%d %d %d\n",y,quadrado,cubo);
  }
}
   
   return 0;
}