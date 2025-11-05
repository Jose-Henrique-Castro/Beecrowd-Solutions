#include <stdio.h>
int main()
{
    
   char nome [5];
   double fixo,vendas,salario;
   scanf("%s",&nome);
   scanf("%lf%lf",&fixo,&vendas);
   salario = fixo + (15.0/100*vendas);
   printf("TOTAL = R$ %.2lf\n", salario);
   
      return 0;
   
    
}