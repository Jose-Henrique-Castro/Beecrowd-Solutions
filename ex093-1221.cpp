#include <stdio.h>
#include <math.h>
int main()
{
  
  // 1- declarar variaveis e ler numero de linhas
  // 2- criar condição para saber se é primo 
  // 3- imprimir se for ou não 
  
  int linhas ; 
  
  scanf("%u",&linhas);
  
  for (int i=0;i<linhas;i++) { // quantos numeros vou descobrir se é primo
    int primo , luz=0 ;
    
    scanf("%u",&primo); // ler numero inteiro positivo > 2**31
     int raiz = sqrt (primo);
    for (int x=2 ; x<=raiz ; x++) { // divida numero primo de 2 até primo-1 
        if (primo%x==0) luz=1;
    } 
    
      if (luz==1) printf("Not Prime\n");  // se dividir não é primo
      if (luz==0) printf("Prime\n"); // se não dividir é primo
    
  }
  
    return 0;
}