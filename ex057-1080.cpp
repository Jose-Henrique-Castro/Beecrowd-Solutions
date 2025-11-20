#include <stdio.h>
#include <stdlib.h>
int main()
{
   
   int x , y , maior , posiçao;
   
   scanf("%d",&x);
   maior = x;
   posiçao = 1;
   
   for (y=2;y<=100;y++) {
     scanf("%d",&x);
     if ( x>maior ){
       maior = x;
       posiçao = y;
     } 
   }
   printf("%d\n",maior);
   printf("%d\n",posiçao);
   
  return 0;
}