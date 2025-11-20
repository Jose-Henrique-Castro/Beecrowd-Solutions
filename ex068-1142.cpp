#include <stdio.h>
#include <stdlib.h>
int main()
{
   
   int linhas, i , a=1 , b=2 , c=3 ;
   
   scanf("%d",&linhas);
   
   for (i=1;i<=linhas;i++) {
     printf("%d %d %d PUM\n",a,b,c);
     a += 4;
     b += 4;
     c += 4;
   }
   
  return 0;
}