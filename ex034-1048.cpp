#include <stdio.h>
int main()
{
   
  float salario_antigo , aumento , salario_novo ;
  int percentual ;
  
  scanf("%f",&salario_antigo);
  
  if ( salario_antigo >= 0.0 && salario_antigo <= 400.00){
     salario_novo = salario_antigo + salario_antigo*15/100;
     percentual = 15;
     aumento = salario_antigo*15/100;
  }
   
  if ( salario_antigo >= 400.01 && salario_antigo <= 800.00){
     salario_novo = salario_antigo + salario_antigo*12/100;
     percentual = 12;
     aumento = salario_antigo*12/100;
  } 
  if (salario_antigo >= 800.01 && salario_antigo <= 1200.00){
    salario_novo = salario_antigo + salario_antigo*10/100;
    percentual = 10;
    aumento = salario_antigo*10/100;
  }
  
  if ( salario_antigo >= 1200.01 && salario_antigo <= 2000.00){
    salario_novo = salario_antigo + salario_antigo*7/100;
    percentual = 7;
    aumento = salario_antigo*7/100;
  }
  if ( salario_antigo > 2000.00){
    salario_novo = salario_antigo + salario_antigo*4/100;
    percentual = 4;
    aumento = salario_antigo*4/100;
  }
  
  printf("Novo salario: %.2f\n",salario_novo);
  printf("Reajuste ganho: %.2f\n",aumento);
  printf("Em percentual: %d %\n",percentual);
  
  return 0;

}