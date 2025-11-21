#include <stdio.h>
int main()
{
  // alternando maior e menor ou menor e maior ( para formar picos e vales )
  
  
  int testes , anterior , atual ; // quantos tamanhos de paisagem vou analisar
  int cont=0;
  int paisagem1=1 , paisagem2=1;
  scanf("%d",&testes);
  int num[testes];
  for (int i=0;i<testes;i++) { // 10 
      scanf("%d",&num[i]);
  }
  
  for (int i=1;i<testes;i++) { // maior para menor 
     anterior = num[i-1]; //  0 
     atual = num[i]; // 1
      
      if (i%2==0) { // par
          if (anterior>=atual) { // 2 <= 1 
              paisagem1=0;
              break;
          }
      }
      else { // impar 
          if (anterior<=atual) { // 1 >= 0
              paisagem1 = 0;
              break;
          }
      }
  }
 
 for (int i=1;i<testes;i++) { // menor para maior 
     anterior = num[i-1]; //  0 
     atual = num[i]; // 1
      
      if (i%2==0) { // par
          if (anterior<=atual) { // 2 <= 1 
              paisagem2=0;
              break;
          }
      }
      else { // impar 
          if (anterior>=atual) { // 1 >= 0
              paisagem2 = 0;
              break;
          }
      }
  }
  
  if (paisagem1 || paisagem2) printf("1\n");
  else printf("0\n");
 
  
  
    return 0;
}