#include <stdio.h>
#include <math.h>

int main()
{
    
   int idade_dias , anos , meses , dias ;
   scanf("%d",&idade_dias);
   
   anos = idade_dias / 365;
   idade_dias = idade_dias % 365;
   printf("%d ano(s)\n",anos);
   
   meses = idade_dias / 30;
   idade_dias = idade_dias % 30;
   printf("%d mes(es)\n",meses);
   
   dias = idade_dias / 1;
   idade_dias = idade_dias % 1;
   printf("%d dia(s)\n",dias);
   
    return 0; 
}