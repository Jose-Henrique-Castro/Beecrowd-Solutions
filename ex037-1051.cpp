#include <stdio.h>
#include <string.h>  // precisa para strcmp

int main() {
    
    float salario , imposto1 , imposto2 , imposto3 ;
    scanf("%f",&salario);
    
    if ( salario > 0.0 && salario <= 2000.0 ) {
      printf("Isento\n");
    }
    
    if  ( salario >= 2000.01 && salario <= 3000.00 ) {
      imposto1 = (salario - 2000.01 )*0.08;
      printf("R$ %.2f\n",imposto1);
    }
    
    if ( salario >= 3000.01 && salario <= 4500.00 ) {
      imposto2 = (1000.0*0.08)+((salario-3000.0)*0.18);
      printf("R$ %.2f\n",imposto2);
    }
    
    if (salario > 4500 ) {
      imposto3 = (1000.0*0.08)+(1500.0*0.18)+((salario-4500)*0.28);
      printf("R$ %.2f\n",imposto3);
    }
    
    return 0;
}