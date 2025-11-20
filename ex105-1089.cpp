#include <stdio.h>
int main()
{
  // pico minimo -> menor que o anterior e sucessor ;
  // pico maximo -> maior que o anterior e sucessor ;
  
  int loop; // quantos numeros verificar
  
  
while (scanf("%d",&loop) && loop != 0) { 
    
  int num[loop];
  int cont=0;
  
  for (int i=0;i<loop;i++) {scanf("%d",&num[i]);} // ler vetores para verificar picos 
  for (int i=0;i<loop;i++) { // verificar se forma pico ou não
    int anterior = num[(i-1 + loop)%loop];
    int atual = num[i];
    int sucessor = num[(i+1)%loop];
    
    if ((atual>anterior && atual>sucessor) || (atual<anterior && atual<sucessor)) {cont+=1;}
    
  }
  printf("%d\n",cont);
}
  
    return 0;
}