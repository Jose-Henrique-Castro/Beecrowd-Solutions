#include <stdio.h>
int main()
{
   
   int inicio , fim , total ;
   scanf("%d%d",&inicio,&fim);
   
   if ( inicio >= fim ) {
     total = (fim+24) - inicio; 
     printf("O JOGO DUROU %d HORA(S)\n",total);
   }
   else {
     total = fim - inicio;
     printf("O JOGO DUROU %d HORA(S)\n",total);
   }
   
   return 0;
}