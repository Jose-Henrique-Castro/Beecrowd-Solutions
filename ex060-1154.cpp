#include <stdio.h>
#include <stdlib.h>
int main()
{
   
   int idade , cont=0 , soma=0 ;
   float media ;
   
   scanf("%d",&idade);
   if ( idade > 0 ) {
    soma += idade;
   cont++;
   }
   
   while ( idade >= 0) {
     scanf("%d",&idade);
     soma += idade;
     cont++;
     if ( idade < 0 ) {
       soma -= idade;
       cont--;
     }
   }
   media = (float)soma/cont;
   printf("%.2f\n",media);
   
  return 0;
}