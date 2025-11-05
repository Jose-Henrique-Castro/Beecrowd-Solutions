#include <stdio.h>
int main()
{
    
   int codigo1 , numpeças1 , codigo2 , numpeças2;
   float valor1 , valor2 , total1 , total2 , totalfinal ;
   scanf("%d%d",&codigo1,&numpeças1);
   scanf("%f",&valor1);
   scanf("%d%d",&codigo2,&numpeças2);
   scanf("%f",&valor2);
   total1 = numpeças1*valor1;
   total2 = numpeças2*valor2;
   totalfinal = total1 + total2;
   printf("VALOR A PAGAR: R$ %.2f\n",totalfinal);
   
      return 0;
   
    
}