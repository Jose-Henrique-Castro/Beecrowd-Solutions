#include <stdio.h>
int main()
{
  
  int x; // tamanho do vetor
  
  scanf("%d",&x);
  int num[x];
  int menor;
  
  scanf("%d",&num[0]);
  menor = num[0];
  int posicao = 0 ;
  
  for (int i=1 ; i<x ; i++ ) {
    scanf("%d",&num[i]);
    if (num[i]<menor) menor = num[i] , posicao = i;
  }
  printf("Menor valor: %d\n",menor);
  printf("Posicao: %d\n",posicao);
  
    return 0;
}