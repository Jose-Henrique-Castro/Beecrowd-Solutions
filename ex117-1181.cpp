#include <stdio.h>
int main()
{
  float matriz[12][12] , soma=0 , media;
  int linha;
  char escolha;
  scanf("%d",&linha);
  scanf(" %c",&escolha); 
  
  for (int i=0;i<12;i++) {
      for (int j=0;j<12;j++){
      scanf("%f",&matriz[i][j]);
    }
  }
  
  
  if ( escolha == 'S'){
    for (int j=0;j<12;j++) {
      soma += matriz[linha][j];
    }
    printf("%.1f\n",soma);
  }
  
  else if ( escolha =='M') {
     for (int j=0;j<12;j++) {
       soma += matriz[linha][j];
       media = soma/12.0;
    }
    printf("%.1f\n",media);
  }
  
  
  
    return 0;
}