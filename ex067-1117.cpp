#include <stdio.h>
#include <stdlib.h>
int main()
{
   
   float nota , soma , media ;
   int validas=0 ;
   
   scanf("%f",&nota);
   if ( nota>=0 && nota<=10.0 ) {
     validas++;
     soma += nota;
   }
   else {
     printf("nota invalida\n");
   }
   while ( validas<2 ) {
     scanf("%f",&nota);
   if ( nota>=0 && nota<=10.0 ) {
     validas++;
     soma += nota;
   }
   else {
     printf("nota invalida\n");
   }
   }
   media = soma/2;
   printf("media = %.2f\n",media);
   
   
  return 0;
}